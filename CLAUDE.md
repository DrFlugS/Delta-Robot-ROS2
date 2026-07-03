# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Overview

ROS 2 (Jazzy) colcon workspace for controlling a 3-DOF delta robot over a serial link to an Arduino. It contains three packages under `src/`:

- **`delta_robot_serial`** — the application logic: serial communication, forward/inverse kinematics, IK service, and a trajectory-planning action server.
- **`delta_robot_description`** — URDF, meshes, RViz config, and all launch files.
- **`serial`** — vendored copy of wjwwood's cross-platform serial library, built as an ament package so the other package can `find_package(serial)`.

## Build & Run

```bash
# Build (from workspace root)
colcon build
source install/setup.bash          # must be sourced in every shell after building

# Build a single package
colcon build --packages-select delta_robot_serial

# Run with a simulated Arduino (no hardware needed)
ros2 launch delta_robot_description PseudoArduino.launch          # base sim stack
ros2 launch delta_robot_description PseudoArduinoTraj.launch      # sim + trajectory action server

# Run against the real robot (Arduino on /dev/ttyUSB0)
ros2 launch delta_robot_description ArduinoTraj.launch serial_port:=/dev/ttyUSB0 baudrate:=115200
```

There is no test suite wired up beyond the default `ament_lint` hooks; `colcon test` runs only linters.

## Architecture / Data Flow

The system is a closed loop connecting a Cartesian target to joint visualization, with the serial port (real or simulated) sitting in the middle:

```
Action goal (x[], y[], z[])   n Cartesian via points
  → trajPlan_actionServer  (fits a cubic spline through the via points, samples it,
                            reads current joint_states as feedback)
  → /ikin_server service   (inverse_kinematics.h: x,y,z → 3 motor angles φ)
  → serial write           ("m1, m2, m3\n" formatted string)
  → Arduino / pseudo_arduino
  → serial read by delta_joint_pub
  → direct_kinematics.h    (motor angles → full joint state)
  → /joint_states topic
  → robot_state_publisher → RViz
```

Key nodes (all in `delta_robot_serial/src/`):

- **`ikin_server`** — provides the `/ikin_server` service (`srv/Ikin.srv`: x,y,z → phi_11/21/31). Also owns the serial port it writes motor commands to. Rejects NaN IK solutions (out-of-workspace targets) instead of sending them.
- **`delta_joint_pub`** — reads motor angles back from serial, runs forward kinematics, publishes `sensor_msgs/JointState` on `/joint_states`. The joint names are hard-coded to match `urdf/delta_robot.urdf`.
- **`trajPlan_actionServer`** — `trajectory_plan` action (`action/PosTraj.action`). The Goal carries **`n` via points** as parallel `float64[] x/y/z` arrays; the server prepends the robot's current position, fits a **natural cubic spline** through all knots (`include/spline_trajectory.h`), and streams densely-sampled setpoints to `/ikin_server` in order. Feedback reports the current Cartesian setpoint plus a `via_index` (which supplied via point it is heading toward); it pauses ~0.5 s each time it crosses an intermediate via point, and checks final convergence against the **last** via point. Built as a `rclcpp_components` component library and also registered as the `trajPlan_action_server` executable. Uses a separate callback group + executor for the `/joint_states` subscription so IK service calls don't deadlock against the subscription. Ready-to-run example goals are in `example_trajectories.txt` at the workspace root.
- **`pseudo_arduino`** — hardware-in-the-loop stand-in. On startup it shells out to `socat` to create a linked PTY pair `$HOME/socatpty1` ↔ `$HOME/socatpty2`, then emulates the Arduino: reads target angles on one end and echoes mocked robot angles back.

### Serial port handling

The serial port is a node parameter (`serial_port`, `baudrate`). When the port string contains `socatpty1`, the nodes are talking to the pseudo Arduino and expand the literal `$(env HOME)` token to `$HOME`; otherwise it is a real device path like `/dev/ttyUSB0`. Both `ikin_server` and `delta_joint_pub` open their own `serial::Serial` instance — they do not share one.

### Kinematics

`include/direct_kinematics.h` and `include/inverse_kinematics.h` are header-only and depend on the bundled Eigen in `include/Eigen/`. Geometry constants (link lengths `l_pl_i`/`l_dl_i`, base offsets `a_i`/`b_i`, arm angles `alpha_1..3` at 0/120/240°) are duplicated as `const` in both headers — keep them in sync if you change the robot geometry. Angles are in **degrees** over the wire and internally converted to radians.

`include/spline_trajectory.h` is a third header-only helper (no Eigen dependency): a natural cubic spline (`CubicSpline`) that interpolates 3D via points parameterised by cumulative chord length, solved with a Thomas-algorithm tridiagonal pass. It is used only by `trajPlan_actionServer` to turn the Goal's via points into a smooth path; `P==1` and coincident-knot cases degrade gracefully (single point / straight line).

## Interface / build gotchas

- `srv/Ikin.srv` and `action/PosTraj.action` are generated via `rosidl_generate_interfaces` in `delta_robot_serial/CMakeLists.txt`. Any target that uses these types must link the typesupport via `rosidl_get_typesupport_target(...)` + `target_link_libraries` (already done for `ikin_server` and `trajPlan_actionServer`).
- Adding a new node means: add the `.cpp`, an `add_executable` + `ament_target_dependencies`, and an `install(TARGETS ... DESTINATION lib/${PROJECT_NAME})` in the CMakeLists.
- The `serial` package must build before `delta_robot_serial`; colcon resolves this from the `<depend>serial</depend>` in `package.xml`.

# Delta Robot ROS 2 Control Stack

A ROS 2 (Jazzy) workspace for controlling a **3-DOF delta robot** over a serial link to an Arduino. Built during the [RWTH Aachen International Academy ROS2 Summer School](https://www.academy.rwth-aachen.de/) (June–July 2026).

The stack includes serial communication, inverse/forward kinematics, a trajectory planning action server with cubic spline interpolation, and a pseudo-Arduino node for hardware-free simulation.

<p align="center">
  <img src="figures/delta_robot_photo.jpg" width="45%" alt="Fully assembled delta robot"/>
</p>
<p align="center">
  <em>fully assembled delta robot.</em>
</p>

---

## Features

- **Closed-loop control**: Cartesian goals → inverse kinematics → serial → Arduino → serial read → forward kinematics → joint state visualization in RViz
- **Multi-point trajectory planning**: pass `n` via points; a natural cubic spline with quintic smoothstep timing generates a smooth, C²-continuous path
- **Hardware-in-the-loop simulation**: a `pseudo_arduino` node creates a virtual serial link via `socat`, so the entire stack runs without hardware
- **Modular launch structure**: clean `{Pseudo, Arduino} × {base, +Traj}` launch matrix

---

## Architecture

```
Action goal (x[], y[], z[])       n Cartesian via points (mm)
  → trajPlan_actionServer         cubic spline + quintic time law
  → /ikin_server service          x, y, z → 3 motor angles (deg)
  → serial write                  "m1, m2, m3\n"
  → Arduino / pseudo_arduino
  → serial read (delta_joint_pub)
  → direct_kinematics             motor angles → full joint state
  → /joint_states topic
  → robot_state_publisher → RViz
```

### Packages

| Package | Role |
|---------|------|
| `delta_robot_serial` | Nodes, custom `srv`/`action`, kinematics headers |
| `delta_robot_description` | URDF, meshes, RViz config, launch files |
| `serial` | Vendored [wjwwood/serial](https://github.com/wjwwood/serial) library |

### Nodes

| Node | Description |
|------|-------------|
| `ikin_server` | Provides the `/ikin_server` service. Computes inverse kinematics per arm (α = 0°, 120°, 240°) using a Weierstrass half-angle substitution. Writes motor angles to serial. Rejects NaN (unreachable) solutions. |
| `delta_joint_pub` | Reads motor angles from serial, runs forward kinematics, publishes `sensor_msgs/JointState` on `/joint_states`. |
| `trajPlan_actionServer` | Action server for `/trajectory_plan`. Fits a natural cubic spline through via points, samples it with a quintic smoothstep time law (`s(τ) = 10τ³ − 15τ⁴ + 6τ⁵`), and streams setpoints through the IK service. |
| `pseudo_arduino` | Simulation-only. Creates a `socat` PTY pair and emulates the Arduino with a 1°/cycle slew rate. |

### Interfaces

**Service** — `srv/Ikin.srv`
```
float64 x, y, z          # Request: Cartesian position (mm)
---
float64 phi_11, phi_21, phi_31  # Response: motor angles (deg)
```

**Action** — `action/PosTraj.action`
```
float64[] x, y, z        # Goal: n via points (mm)
---
float64 x, y, z          # Result: final measured position (mm)
---
float64 x, y, z          # Feedback: current setpoint (mm)
uint32 via_index          # which via point it heads toward
```

---

## Design Decisions

The course stopped at single-target motion: send one Cartesian point, move there, stop. Everything below extends that into smooth multi-point trajectories.

### Via points instead of a single target

The action Goal was widened from three scalars to three parallel arrays (`float64[] x, y, z` in [`action/PosTraj.action`](src/delta_robot_serial/action/PosTraj.action)), so one goal describes a whole route rather than one destination. Feedback gained a `via_index` field alongside the commanded setpoint, so a client can tell which leg of the route is executing, not just where the tool is.

The original behaviour is preserved rather than replaced: a single-element goal has exactly one knot beyond the start, the spline degenerates to a straight line, and the move is the point-to-point one from before. Malformed goals — empty arrays, or `x`/`y`/`z` of unequal length — are rejected up front in `handle_goal` instead of failing partway through execution.

### A cubic spline through the via points, not a chain of moves

Chaining point-to-point moves would make the tool stop dead at every intermediate point. Instead the via points are treated as knots of a **natural cubic spline** ([`include/spline_trajectory.h`](src/delta_robot_serial/include/spline_trajectory.h)), which is C²-continuous and passes *through* every one of them without pausing. The header is self-contained — no Eigen dependency — and solves the tridiagonal system with a Thomas-algorithm pass.

The spline is parameterised by **cumulative chord length** rather than knot index. This keeps the sampling density uniform in space, so a route with one short hop and one long sweep is sampled evenly along its whole length instead of crowding samples into the short leg.

One honest caveat: a cubic spline can overshoot the convex hull of its knots. An intermediate sample can therefore land outside the reachable workspace even when every via point you supplied is comfortably inside it — the IK returns NaN and the goal aborts. Keeping via points away from the workspace boundary avoids this.

### Quintic smoothstep timing, applied once over the whole path

Motion along the spline is timed by a quintic smoothstep, `s(τ) = 10τ³ − 15τ⁴ + 6τ⁵`, rather than a trapezoidal velocity profile. Its first *and* second derivatives vanish at both ends, so the servos see no step change in acceleration when the move starts or finishes. A trapezoidal profile is jerk-discontinuous at its corners, which geared SG90s transmit as an audible jolt.

The time law is applied once across the entire path, not per segment — so the tool accelerates once at the start and decelerates once at the end, gliding through the intermediate via points instead of easing in and out of each. Its peak velocity, `15L/8T`, is also what sets the sample count: enough samples that no single control tick steps further than the servos can follow, even at the fastest point mid-move.

---

## Hardware

- **Microcontroller**: Arduino UNO — firmware in [`firmware/Control_Delta.ino`](firmware/Control_Delta.ino)
- **Actuators**: 3× SG90 servo motors (PWM range 544–1500 µs, constrained to 0–90°)
- **Robot**: 3-DOF delta parallel mechanism
- **Serial protocol**: 115200 baud, host sends `"m1, m2, m3\n"` (deg), Arduino echoes `J:AA,BB,CC\r\n`

Geometry constants: proximal link 50 mm, distal link 93 mm, base offset 28 mm, platform offset 20 mm.

---

## Getting Started

### Prerequisites

- Ubuntu 24.04
- ROS 2 Jazzy
- `colcon` build tools
- `socat` (for simulation mode): `sudo apt install socat`
- ROS 2 packages: `robot_state_publisher`, `joint_state_publisher_gui`, `rviz2`, `rqt_gui`, `xacro`

The ROS dependencies are declared in `delta_robot_description/package.xml`, so the simplest way to install them is from the workspace root:

```bash
rosdep install --from-paths src --ignore-src -r -y
```

Or explicitly:

```bash
sudo apt install ros-jazzy-robot-state-publisher ros-jazzy-joint-state-publisher-gui \
                 ros-jazzy-rviz2 ros-jazzy-rqt-gui ros-jazzy-xacro
```

The `serial` library needs no callout — it is vendored in `src/` and built by `colcon` along with everything else.

### Build

```bash
cd ROS2_Delta_Robot
colcon build
source install/setup.bash    # required in every terminal after building
```

### Run (simulation — no hardware needed)

```bash
ros2 launch delta_robot_description PseudoArduinoTraj.launch
```

Send a trajectory goal with multiple via points:
```bash
ros2 action send_goal /trajectory_plan delta_robot_serial/action/PosTraj \
  "{x: [30,30,-30,-30], y: [0,30,30,0], z: [-110,-112,-112,-110]}" --feedback
```

Call the IK service directly:
```bash
ros2 service call /ikin_server delta_robot_serial/srv/Ikin "{x: 0.0, y: 0.0, z: -110.0}"
```

### Run (real robot)

Flash [`firmware/Control_Delta.ino`](firmware/Control_Delta.ino) to the Arduino first, then **check which port it enumerated on** — the launch files assume `/dev/ttyUSB0`, but a second USB serial device (or a board using a CH340 clone chip) can push it to `ttyUSB1`, `ttyACM0`, and so on:

```bash
ls /dev/ttyUSB* /dev/ttyACM*
```

If it is on `/dev/ttyUSB0` the defaults are correct:

```bash
ros2 launch delta_robot_description ArduinoTraj.launch
```

Otherwise pass the port explicitly:

```bash
ros2 launch delta_robot_description ArduinoTraj.launch serial_port:=/dev/ttyUSB1 baudrate:=115200
```

### Launch files

| Launch file | Description |
|-------------|-------------|
| `PseudoArduino.launch` | Simulated base stack (no trajectory server) |
| `PseudoArduinoTraj.launch` | Simulated stack + trajectory action server |
| `Arduino.launch` | Real robot base stack |
| `ArduinoTraj.launch` | Real robot + trajectory action server |
| `JointStatePublisher.launch` | URDF visualization only (no serial) |

---

## Units

| Quantity | Unit |
|----------|------|
| Action goal/result/feedback `x, y, z` | mm |
| IK service request `x, y, z` | mm |
| IK service response `phi_*` | degrees |
| Serial protocol angles | degrees |
| `/joint_states` prismatic (platform x, y, z) | metres |
| `/joint_states` revolute | radians |

---

## Housekeeping

Because `pseudo_arduino` backgrounds a `socat` process, fully stop a launch before relaunching:

```bash
pkill -f trajPlan_action_server; pkill -f pseudo_arduino; pkill socat
ros2 daemon stop
```

---

## Troubleshooting

### The robot appears in RViz with its links detached

The arms float unattached to the base because no transforms are being published, which means `delta_joint_pub` is not publishing `/joint_states`. Check whether it is still running — if it exited during startup, the launch log will show it, since a dead node does not stop the rest of the stack from coming up:

```bash
ros2 topic hz /joint_states     # should report ~50 Hz
ros2 node list | grep delta_joint_pub
```

In simulation this used to be caused by a startup race: `pseudo_arduino` creates the `socat` PTY pair asynchronously, and `delta_joint_pub` and `ikin_server` could reach the port before `$HOME/socatpty1` existed, then exit immediately. Both now retry the open for ~5 s, so a cold start is reliable. The failure was intermittent — a leftover `socat` from a previous run left the PTYs in place and hid it — so if you are on an older checkout, this is the symptom to look for.

### `Unable to open port ... after 50 attempts`

The port never appeared within the retry window. In simulation, confirm `socat` is installed (`command -v socat`) and that no stale process is holding the PTY pair — see Housekeeping above. On real hardware, check the device actually exists and that you have permission:

```bash
ls /dev/ttyUSB*                    # confirm the port, and pass it as serial_port:=
groups | grep dialout              # if absent: sudo usermod -aG dialout $USER, then re-login
```

All real-robot launch files default to `/dev/ttyUSB0`. If your board enumerated elsewhere, pass the right one with `serial_port:=`.

### The real robot reports positions but never moves

Check that the flashed firmware is current. Earlier versions of [`firmware/Control_Delta.ino`](firmware/Control_Delta.ino) parsed commands and echoed servo positions but never called `servo.write()`, so the arm reported a plausible state while standing still. Re-flash and confirm the servos are on pins 5, 6 and 7 with adequate power — an UNO's 5 V rail cannot drive three SG90s under load, so use a separate supply with a common ground.

---

## License

This project is licensed under the MIT License — see [LICENSE](LICENSE) for details.

## Acknowledgements

Developed during the RWTH Aachen International Academy ROS2 Summer School, July 2026.

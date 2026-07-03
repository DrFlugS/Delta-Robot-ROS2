# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target delta_robot_serial::delta_robot_serial
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${delta_robot_serial_TARGETS}.
if(delta_robot_serial_TARGETS AND NOT TARGET delta_robot_serial::delta_robot_serial)
  add_library(delta_robot_serial::delta_robot_serial INTERFACE IMPORTED)
  set_target_properties(delta_robot_serial::delta_robot_serial PROPERTIES
    INTERFACE_LINK_LIBRARIES "${delta_robot_serial_TARGETS}")
endif()

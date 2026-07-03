cmake_minimum_required(VERSION 3.8)
project(delta_robot_serial)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(serial REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED) 
find_package(rclcpp_action  REQUIRED)
find_package(rclcpp_components  REQUIRED)

# Generate service interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Ikin.srv"
  "action/PosTraj.action"
  DEPENDENCIES std_msgs action_msgs
  LIBRARY_NAME ${PROJECT_NAME}
)

include_directories(include ${Boost_INCLUDE_DIRS} include/Eigen)

# Executables
add_executable(pseudo_arduino src/pseudo_arduino.cpp)
ament_target_dependencies(pseudo_arduino "rclcpp" "serial")
install(TARGETS pseudo_arduino DESTINATION lib/${PROJECT_NAME})

add_executable(delta_joint_pub src/delta_joint_pub.cpp)
ament_target_dependencies(delta_joint_pub "rclcpp" "serial" "sensor_msgs")
install(TARGETS delta_joint_pub DESTINATION lib/${PROJECT_NAME})

add_executable(ikin_server src/ikin_server.cpp)
ament_target_dependencies(ikin_server "rclcpp" "serial" "sensor_msgs")
install(TARGETS ikin_server DESTINATION lib/${PROJECT_NAME})

add_library(trajPlan_actionServer src/trajPlan_actionServer.cpp)
ament_target_dependencies(trajPlan_actionServer "rclcpp" "rclcpp_action" "rclcpp_components" "sensor_msgs")

# Typesupport linking (keep existing line, add this target too)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(ikin_server "${cpp_typesupport_target}")
target_link_libraries(trajPlan_actionServer "${cpp_typesupport_target}")

# Register as component node
rclcpp_components_register_node(trajPlan_actionServer PLUGIN "TrajectoryPlanServer" EXECUTABLE trajPlan_action_server)

# Install the library
install(TARGETS trajPlan_actionServer ARCHIVE DESTINATION lib LIBRARY DESTINATION lib RUNTIME DESTINATION bin)

ament_package()

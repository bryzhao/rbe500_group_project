cmake_minimum_required(VERSION 3.5)
project(rrbot_gazebo)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(controller_manager_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)


add_executable(publisher src/position_publisher.cpp)
ament_target_dependencies(publisher rclcpp std_msgs)

add_executable(switch src/controller_switch.cpp)
ament_target_dependencies(switch rclcpp controller_manager_msgs)

install(TARGETS
  publisher
  switch
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)
install(DIRECTORY worlds
  DESTINATION share/${PROJECT_NAME}
)
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

add_subdirectory(python_src)
# Install Python modules
# ament_python_install_package(${PROJECT_NAME})

# Install Python executables
#install(PROGRAMS
#  python_src/forward_kinematics_node.py
#  python_src/inverse_kinematics_node.py
#  DESTINATION lib/${PROJECT_NAME}
#)

rosidl_generate_interfaces(${PROJECT_NAME}
   "srv/IKService.srv"
   "srv/ControlInput.srv"
    DEPENDENCIES geometry_msgs std_msgs
)

# Export pkg dependencies
ament_export_dependencies(ament_cmake)
ament_export_dependencies(ament_cmake_python)
ament_export_dependencies(rclcpp)
ament_export_dependencies(rclpy)

ament_package()

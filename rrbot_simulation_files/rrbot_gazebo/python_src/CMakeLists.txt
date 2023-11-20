# Install Python executables
install(PROGRAMS
  forward_kinematics_node.py
  inverse_kinematics_node.py
  DESTINATION lib/${PROJECT_NAME}
)
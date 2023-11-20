# Install Python executables
install(PROGRAMS
  forward_kinematics_node.py
  inverse_kinematics_service.py
  inverse_kinematics_client.py
  DESTINATION lib/${PROJECT_NAME}
)
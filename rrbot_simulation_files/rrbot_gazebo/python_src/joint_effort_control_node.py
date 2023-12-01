#!/usr/bin/env python3

"""
Group Assignment 2
RBE500 - Fall 2023

Note: use a command like this to test our effort controller (by suppling reference joint positions):
 > ros2 topic pub --once /position_inputs std_msgs/msg/Float64MultiArray "{data: [1.0, 1.0, 0.5]}"
 > ros2 topic pub /forward_effort_controller/commands std_msgs/msg/Float64MultiArray "{data: [10.0, 10.0, 20.5]}"

 > ros2 service call /joint_input_service rrbot_gazebo/srv/ControlInput "{input_q1: 1.0, input_q2: 2.0, input_q3: 3.0}"
"""

import numpy as np
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState

from rrbot_gazebo.srv import ControlInput

# Globals / tunable gains
Kp1 = 15.0
Kp2 = 20.0
Kp3 = 50.0
Kd1 = 18.5
Kd2 = 11.0
Kd3 = 5.0

np.set_printoptions(precision=3, suppress=True)


class PDController(Node):
    """
    Simple PD effort controller for controlling our SCARA robot in Gazebo.
    """

    def __init__(self):
        super().__init__('joint_effort_control_node')

        # Gazebo publishes to a JointState message, so we'll have our callback listen to this topic
        self._joint_state_subscription = self.create_subscription(
            msg_type=JointState, topic='/joint_states', callback=self.listener_callback, qos_profile=10)
        self._joint_input_service = self.create_service(srv_type=ControlInput,
                                                        callback=self._joint_input_service_callback,
                                                        srv_name="joint_input_service")
        self._forward_effort_publisher = self.create_publisher(msg_type=Float64MultiArray, 
                                                               topic='/forward_effort_controller/commands', 
                                                               qos_profile=10)
        
        self._q1_reference = 0.0
        self._q2_reference = 0.0
        self._q3_reference = 0.0
        
        self.get_logger().info(f"Initializing {self.get_name()} node...")

    def _joint_input_service_callback(self, request, response):

        self.get_logger().info(f"Input reference positions: {request}. Storing these internally...")

        self._q1_reference = request.input_q1
        self._q2_reference = request.input_q2
        self._q3_reference = request.input_q3

        # # Return a successful status, if we've received the service call
        response.status = True
        return response

    def listener_callback(self, msg: JointState) -> None:
        """
        This is the callback that is executed every time we receive a message of JointState on the
        joint_angles topic.
        :param msg: ROS2 message of type JointState
        :return: None
        """
        # Retrieves a float array of q1, q2, q3
        if len(msg.position) != 3:
            print("[WARNING] Callback needs to accept 3 joint angles only.")

        # We receive the joint angles as a list of 3 floats, in degrees. And then we convert those joint angles to
        # radians for the forward kin method.
        joint_angles = msg.position
        joint_velocities = msg.velocity

        e1 = self._q1_reference - joint_angles[0]
        e2 = self._q2_reference - joint_angles[1]
        e3 = self._q3_reference - joint_angles[2]

        # Now, for our velocity errors, our input reference velocity is 0, since we want the robot to stop at our target position.
        e1_dot = 0 - joint_velocities[0]
        e2_dot = 0 - joint_velocities[1]
        e3_dot = 0 - joint_velocities[2]

        # Compute control inputs, e.g. efforts to the actuators
        u1 = Kp1 * e1 + Kd1 * e1_dot
        u2 = Kp2 * e2 + Kd2 * e2_dot
        u3 = Kp3 * e3 + Kd3 * e3_dot

        control_effort = Float64MultiArray()
        control_effort.data = [u1, u2, u3]
        self._forward_effort_publisher.publish(control_effort)

def main(args=None):
    rclpy.init(args=args)
    control_node = PDController()
    rclpy.spin(control_node)

    # Enable graceful shutdown.
    control_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

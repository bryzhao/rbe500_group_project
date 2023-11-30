#!/usr/bin/env python3
#importing necessary packages
import rclpy
import math
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import JointState


class rrbot_controller(Node):

    #initializing subscriber node
    #Comment
    def __init__(self):
        super().__init__('rrbot_controller')
        self._joint_angle_subscription = self.create_subscription(msg_type=JointState, topic='/joint_states', callback=self.listener_callback,100)

        
    def listener_callback(self, msg):
        name1 , pos1, vel1, effort1 = msg.position[0] #This needs to be tweaked to the correct syntax
        name2 , pos2, vel2, effort2 = msg.position[1] #This needs to be tweaked to the correct syntax
        name3 , pos3, vel3, effort3 = msg.position[2] #This needs to be tweaked to the correct syntax
        vel1= msg.velocity[1] #This needs to be tweaked to the correct syntax
        return pos, vel
    
    def compute_controller(pos, vel):
        #Position reference (pos_ref) should come from the IK solver of a set point (X, Y, Z)
        #Kp & Kd need to be different for each joint?
        vel_ref = 0
        e = pos - pos_ref
        e_dot = vel_ref - vel
        u = kp*e + kp*e_dot
    return u

        




#Main function to go through each step
def main(args=None):
    rclpy.init(args=args)
    r_matrix_subscriber = rrbot_controller()
    rclpy.spin(r_matrix_subscriber)
    r_matrix_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
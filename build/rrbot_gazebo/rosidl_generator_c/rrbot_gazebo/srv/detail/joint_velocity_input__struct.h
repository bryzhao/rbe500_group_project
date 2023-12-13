// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrbot_gazebo:srv/JointVelocityInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__STRUCT_H_
#define RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/JointVelocityInput in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__JointVelocityInput_Request
{
  float input_q1_dot;
  float input_q2_dot;
  float input_q3_dot;
} rrbot_gazebo__srv__JointVelocityInput_Request;

// Struct for a sequence of rrbot_gazebo__srv__JointVelocityInput_Request.
typedef struct rrbot_gazebo__srv__JointVelocityInput_Request__Sequence
{
  rrbot_gazebo__srv__JointVelocityInput_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__JointVelocityInput_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/JointVelocityInput in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__JointVelocityInput_Response
{
  bool status;
} rrbot_gazebo__srv__JointVelocityInput_Response;

// Struct for a sequence of rrbot_gazebo__srv__JointVelocityInput_Response.
typedef struct rrbot_gazebo__srv__JointVelocityInput_Response__Sequence
{
  rrbot_gazebo__srv__JointVelocityInput_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__JointVelocityInput_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__STRUCT_H_

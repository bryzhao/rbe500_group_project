// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrbot_gazebo:srv/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__STRUCT_H_
#define RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ControlInput in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__ControlInput_Request
{
  float input_q1;
  float input_q2;
  float input_q3;
} rrbot_gazebo__srv__ControlInput_Request;

// Struct for a sequence of rrbot_gazebo__srv__ControlInput_Request.
typedef struct rrbot_gazebo__srv__ControlInput_Request__Sequence
{
  rrbot_gazebo__srv__ControlInput_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__ControlInput_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ControlInput in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__ControlInput_Response
{
  bool status;
} rrbot_gazebo__srv__ControlInput_Response;

// Struct for a sequence of rrbot_gazebo__srv__ControlInput_Response.
typedef struct rrbot_gazebo__srv__ControlInput_Response__Sequence
{
  rrbot_gazebo__srv__ControlInput_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__ControlInput_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__STRUCT_H_

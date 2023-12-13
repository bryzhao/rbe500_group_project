// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rrbot_gazebo:srv/ControlInput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rrbot_gazebo/srv/detail/control_input__rosidl_typesupport_introspection_c.h"
#include "rrbot_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rrbot_gazebo/srv/detail/control_input__functions.h"
#include "rrbot_gazebo/srv/detail/control_input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrbot_gazebo__srv__ControlInput_Request__init(message_memory);
}

void rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_fini_function(void * message_memory)
{
  rrbot_gazebo__srv__ControlInput_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_member_array[3] = {
  {
    "input_q1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__ControlInput_Request, input_q1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_q2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__ControlInput_Request, input_q2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_q3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__ControlInput_Request, input_q3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_members = {
  "rrbot_gazebo__srv",  // message namespace
  "ControlInput_Request",  // message name
  3,  // number of fields
  sizeof(rrbot_gazebo__srv__ControlInput_Request),
  rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_member_array,  // message members
  rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_type_support_handle = {
  0,
  &rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput_Request)() {
  if (!rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_type_support_handle.typesupport_identifier) {
    rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrbot_gazebo__srv__ControlInput_Request__rosidl_typesupport_introspection_c__ControlInput_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rrbot_gazebo/srv/detail/control_input__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rrbot_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rrbot_gazebo/srv/detail/control_input__functions.h"
// already included above
// #include "rrbot_gazebo/srv/detail/control_input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrbot_gazebo__srv__ControlInput_Response__init(message_memory);
}

void rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_fini_function(void * message_memory)
{
  rrbot_gazebo__srv__ControlInput_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__ControlInput_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_members = {
  "rrbot_gazebo__srv",  // message namespace
  "ControlInput_Response",  // message name
  1,  // number of fields
  sizeof(rrbot_gazebo__srv__ControlInput_Response),
  rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_member_array,  // message members
  rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_type_support_handle = {
  0,
  &rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput_Response)() {
  if (!rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_type_support_handle.typesupport_identifier) {
    rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrbot_gazebo__srv__ControlInput_Response__rosidl_typesupport_introspection_c__ControlInput_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rrbot_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rrbot_gazebo/srv/detail/control_input__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_members = {
  "rrbot_gazebo__srv",  // service namespace
  "ControlInput",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_Request_message_type_support_handle,
  NULL  // response message
  // rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_Response_message_type_support_handle
};

static rosidl_service_type_support_t rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_type_support_handle = {
  0,
  &rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrbot_gazebo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput)() {
  if (!rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_type_support_handle.typesupport_identifier) {
    rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, ControlInput_Response)()->data;
  }

  return &rrbot_gazebo__srv__detail__control_input__rosidl_typesupport_introspection_c__ControlInput_service_type_support_handle;
}

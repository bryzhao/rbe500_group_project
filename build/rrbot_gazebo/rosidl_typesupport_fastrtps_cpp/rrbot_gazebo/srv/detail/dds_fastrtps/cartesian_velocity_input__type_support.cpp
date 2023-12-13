// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rrbot_gazebo:srv/CartesianVelocityInput.idl
// generated code does not contain a copyright notice
#include "rrbot_gazebo/srv/detail/cartesian_velocity_input__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rrbot_gazebo/srv/detail/cartesian_velocity_input__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rrbot_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_serialize(
  const rrbot_gazebo::srv::CartesianVelocityInput_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: input_x_dot
  cdr << ros_message.input_x_dot;
  // Member: input_y_dot
  cdr << ros_message.input_y_dot;
  // Member: input_z_dot
  cdr << ros_message.input_z_dot;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rrbot_gazebo::srv::CartesianVelocityInput_Request & ros_message)
{
  // Member: input_x_dot
  cdr >> ros_message.input_x_dot;

  // Member: input_y_dot
  cdr >> ros_message.input_y_dot;

  // Member: input_z_dot
  cdr >> ros_message.input_z_dot;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
get_serialized_size(
  const rrbot_gazebo::srv::CartesianVelocityInput_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: input_x_dot
  {
    size_t item_size = sizeof(ros_message.input_x_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_y_dot
  {
    size_t item_size = sizeof(ros_message.input_y_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_z_dot
  {
    size_t item_size = sizeof(ros_message.input_z_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
max_serialized_size_CartesianVelocityInput_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: input_x_dot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input_y_dot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input_z_dot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rrbot_gazebo::srv::CartesianVelocityInput_Request;
    is_plain =
      (
      offsetof(DataType, input_z_dot) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CartesianVelocityInput_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::CartesianVelocityInput_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianVelocityInput_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rrbot_gazebo::srv::CartesianVelocityInput_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianVelocityInput_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::CartesianVelocityInput_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianVelocityInput_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CartesianVelocityInput_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CartesianVelocityInput_Request__callbacks = {
  "rrbot_gazebo::srv",
  "CartesianVelocityInput_Request",
  _CartesianVelocityInput_Request__cdr_serialize,
  _CartesianVelocityInput_Request__cdr_deserialize,
  _CartesianVelocityInput_Request__get_serialized_size,
  _CartesianVelocityInput_Request__max_serialized_size
};

static rosidl_message_type_support_t _CartesianVelocityInput_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianVelocityInput_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<rrbot_gazebo::srv::CartesianVelocityInput_Request>()
{
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_CartesianVelocityInput_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, CartesianVelocityInput_Request)() {
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_CartesianVelocityInput_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rrbot_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_serialize(
  const rrbot_gazebo::srv::CartesianVelocityInput_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << (ros_message.status ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rrbot_gazebo::srv::CartesianVelocityInput_Response & ros_message)
{
  // Member: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
get_serialized_size(
  const rrbot_gazebo::srv::CartesianVelocityInput_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
max_serialized_size_CartesianVelocityInput_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rrbot_gazebo::srv::CartesianVelocityInput_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CartesianVelocityInput_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::CartesianVelocityInput_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianVelocityInput_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rrbot_gazebo::srv::CartesianVelocityInput_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianVelocityInput_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::CartesianVelocityInput_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianVelocityInput_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CartesianVelocityInput_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CartesianVelocityInput_Response__callbacks = {
  "rrbot_gazebo::srv",
  "CartesianVelocityInput_Response",
  _CartesianVelocityInput_Response__cdr_serialize,
  _CartesianVelocityInput_Response__cdr_deserialize,
  _CartesianVelocityInput_Response__get_serialized_size,
  _CartesianVelocityInput_Response__max_serialized_size
};

static rosidl_message_type_support_t _CartesianVelocityInput_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianVelocityInput_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<rrbot_gazebo::srv::CartesianVelocityInput_Response>()
{
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_CartesianVelocityInput_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, CartesianVelocityInput_Response)() {
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_CartesianVelocityInput_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace rrbot_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CartesianVelocityInput__callbacks = {
  "rrbot_gazebo::srv",
  "CartesianVelocityInput",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, CartesianVelocityInput_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, CartesianVelocityInput_Response)(),
};

static rosidl_service_type_support_t _CartesianVelocityInput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianVelocityInput__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrbot_gazebo
const rosidl_service_type_support_t *
get_service_type_support_handle<rrbot_gazebo::srv::CartesianVelocityInput>()
{
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_CartesianVelocityInput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, CartesianVelocityInput)() {
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_CartesianVelocityInput__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__TRAITS_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrbot_gazebo/srv/detail/ik_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rrbot_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_x
  {
    out << "input_x: ";
    rosidl_generator_traits::value_to_yaml(msg.input_x, out);
    out << ", ";
  }

  // member: input_y
  {
    out << "input_y: ";
    rosidl_generator_traits::value_to_yaml(msg.input_y, out);
    out << ", ";
  }

  // member: input_z
  {
    out << "input_z: ";
    rosidl_generator_traits::value_to_yaml(msg.input_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_x: ";
    rosidl_generator_traits::value_to_yaml(msg.input_x, out);
    out << "\n";
  }

  // member: input_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_y: ";
    rosidl_generator_traits::value_to_yaml(msg.input_y, out);
    out << "\n";
  }

  // member: input_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_z: ";
    rosidl_generator_traits::value_to_yaml(msg.input_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use rrbot_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrbot_gazebo::srv::IKService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrbot_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrbot_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrbot_gazebo::srv::IKService_Request & msg)
{
  return rrbot_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrbot_gazebo::srv::IKService_Request>()
{
  return "rrbot_gazebo::srv::IKService_Request";
}

template<>
inline const char * name<rrbot_gazebo::srv::IKService_Request>()
{
  return "rrbot_gazebo/srv/IKService_Request";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::IKService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrbot_gazebo::srv::IKService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrbot_gazebo::srv::IKService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrbot_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_x
  {
    out << "joint_x: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_x, out);
    out << ", ";
  }

  // member: joint_y
  {
    out << "joint_y: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_y, out);
    out << ", ";
  }

  // member: joint_z
  {
    out << "joint_z: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_x: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_x, out);
    out << "\n";
  }

  // member: joint_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_y: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_y, out);
    out << "\n";
  }

  // member: joint_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_z: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use rrbot_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrbot_gazebo::srv::IKService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrbot_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrbot_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrbot_gazebo::srv::IKService_Response & msg)
{
  return rrbot_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrbot_gazebo::srv::IKService_Response>()
{
  return "rrbot_gazebo::srv::IKService_Response";
}

template<>
inline const char * name<rrbot_gazebo::srv::IKService_Response>()
{
  return "rrbot_gazebo/srv/IKService_Response";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::IKService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrbot_gazebo::srv::IKService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrbot_gazebo::srv::IKService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrbot_gazebo::srv::IKService>()
{
  return "rrbot_gazebo::srv::IKService";
}

template<>
inline const char * name<rrbot_gazebo::srv::IKService>()
{
  return "rrbot_gazebo/srv/IKService";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::IKService>
  : std::integral_constant<
    bool,
    has_fixed_size<rrbot_gazebo::srv::IKService_Request>::value &&
    has_fixed_size<rrbot_gazebo::srv::IKService_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrbot_gazebo::srv::IKService>
  : std::integral_constant<
    bool,
    has_bounded_size<rrbot_gazebo::srv::IKService_Request>::value &&
    has_bounded_size<rrbot_gazebo::srv::IKService_Response>::value
  >
{
};

template<>
struct is_service<rrbot_gazebo::srv::IKService>
  : std::true_type
{
};

template<>
struct is_service_request<rrbot_gazebo::srv::IKService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrbot_gazebo::srv::IKService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__TRAITS_HPP_

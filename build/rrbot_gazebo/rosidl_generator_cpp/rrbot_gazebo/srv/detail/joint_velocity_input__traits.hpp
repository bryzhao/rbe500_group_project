// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrbot_gazebo:srv/JointVelocityInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__TRAITS_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrbot_gazebo/srv/detail/joint_velocity_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rrbot_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointVelocityInput_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_q1_dot
  {
    out << "input_q1_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q1_dot, out);
    out << ", ";
  }

  // member: input_q2_dot
  {
    out << "input_q2_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q2_dot, out);
    out << ", ";
  }

  // member: input_q3_dot
  {
    out << "input_q3_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q3_dot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointVelocityInput_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_q1_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_q1_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q1_dot, out);
    out << "\n";
  }

  // member: input_q2_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_q2_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q2_dot, out);
    out << "\n";
  }

  // member: input_q3_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_q3_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q3_dot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointVelocityInput_Request & msg, bool use_flow_style = false)
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
  const rrbot_gazebo::srv::JointVelocityInput_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrbot_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrbot_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrbot_gazebo::srv::JointVelocityInput_Request & msg)
{
  return rrbot_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrbot_gazebo::srv::JointVelocityInput_Request>()
{
  return "rrbot_gazebo::srv::JointVelocityInput_Request";
}

template<>
inline const char * name<rrbot_gazebo::srv::JointVelocityInput_Request>()
{
  return "rrbot_gazebo/srv/JointVelocityInput_Request";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::JointVelocityInput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrbot_gazebo::srv::JointVelocityInput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrbot_gazebo::srv::JointVelocityInput_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrbot_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointVelocityInput_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointVelocityInput_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointVelocityInput_Response & msg, bool use_flow_style = false)
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
  const rrbot_gazebo::srv::JointVelocityInput_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrbot_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrbot_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrbot_gazebo::srv::JointVelocityInput_Response & msg)
{
  return rrbot_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrbot_gazebo::srv::JointVelocityInput_Response>()
{
  return "rrbot_gazebo::srv::JointVelocityInput_Response";
}

template<>
inline const char * name<rrbot_gazebo::srv::JointVelocityInput_Response>()
{
  return "rrbot_gazebo/srv/JointVelocityInput_Response";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::JointVelocityInput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrbot_gazebo::srv::JointVelocityInput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrbot_gazebo::srv::JointVelocityInput_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrbot_gazebo::srv::JointVelocityInput>()
{
  return "rrbot_gazebo::srv::JointVelocityInput";
}

template<>
inline const char * name<rrbot_gazebo::srv::JointVelocityInput>()
{
  return "rrbot_gazebo/srv/JointVelocityInput";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::JointVelocityInput>
  : std::integral_constant<
    bool,
    has_fixed_size<rrbot_gazebo::srv::JointVelocityInput_Request>::value &&
    has_fixed_size<rrbot_gazebo::srv::JointVelocityInput_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrbot_gazebo::srv::JointVelocityInput>
  : std::integral_constant<
    bool,
    has_bounded_size<rrbot_gazebo::srv::JointVelocityInput_Request>::value &&
    has_bounded_size<rrbot_gazebo::srv::JointVelocityInput_Response>::value
  >
{
};

template<>
struct is_service<rrbot_gazebo::srv::JointVelocityInput>
  : std::true_type
{
};

template<>
struct is_service_request<rrbot_gazebo::srv::JointVelocityInput_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrbot_gazebo::srv::JointVelocityInput_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__TRAITS_HPP_

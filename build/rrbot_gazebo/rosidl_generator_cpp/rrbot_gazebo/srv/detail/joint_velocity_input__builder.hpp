// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrbot_gazebo:srv/JointVelocityInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__BUILDER_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrbot_gazebo/srv/detail/joint_velocity_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_JointVelocityInput_Request_input_q3_dot
{
public:
  explicit Init_JointVelocityInput_Request_input_q3_dot(::rrbot_gazebo::srv::JointVelocityInput_Request & msg)
  : msg_(msg)
  {}
  ::rrbot_gazebo::srv::JointVelocityInput_Request input_q3_dot(::rrbot_gazebo::srv::JointVelocityInput_Request::_input_q3_dot_type arg)
  {
    msg_.input_q3_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::JointVelocityInput_Request msg_;
};

class Init_JointVelocityInput_Request_input_q2_dot
{
public:
  explicit Init_JointVelocityInput_Request_input_q2_dot(::rrbot_gazebo::srv::JointVelocityInput_Request & msg)
  : msg_(msg)
  {}
  Init_JointVelocityInput_Request_input_q3_dot input_q2_dot(::rrbot_gazebo::srv::JointVelocityInput_Request::_input_q2_dot_type arg)
  {
    msg_.input_q2_dot = std::move(arg);
    return Init_JointVelocityInput_Request_input_q3_dot(msg_);
  }

private:
  ::rrbot_gazebo::srv::JointVelocityInput_Request msg_;
};

class Init_JointVelocityInput_Request_input_q1_dot
{
public:
  Init_JointVelocityInput_Request_input_q1_dot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointVelocityInput_Request_input_q2_dot input_q1_dot(::rrbot_gazebo::srv::JointVelocityInput_Request::_input_q1_dot_type arg)
  {
    msg_.input_q1_dot = std::move(arg);
    return Init_JointVelocityInput_Request_input_q2_dot(msg_);
  }

private:
  ::rrbot_gazebo::srv::JointVelocityInput_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::JointVelocityInput_Request>()
{
  return rrbot_gazebo::srv::builder::Init_JointVelocityInput_Request_input_q1_dot();
}

}  // namespace rrbot_gazebo


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_JointVelocityInput_Response_status
{
public:
  Init_JointVelocityInput_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrbot_gazebo::srv::JointVelocityInput_Response status(::rrbot_gazebo::srv::JointVelocityInput_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::JointVelocityInput_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::JointVelocityInput_Response>()
{
  return rrbot_gazebo::srv::builder::Init_JointVelocityInput_Response_status();
}

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__JOINT_VELOCITY_INPUT__BUILDER_HPP_

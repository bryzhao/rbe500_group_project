// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrbot_gazebo:srv/CartesianVelocityInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__BUILDER_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrbot_gazebo/srv/detail/cartesian_velocity_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_CartesianVelocityInput_Request_input_z_dot
{
public:
  explicit Init_CartesianVelocityInput_Request_input_z_dot(::rrbot_gazebo::srv::CartesianVelocityInput_Request & msg)
  : msg_(msg)
  {}
  ::rrbot_gazebo::srv::CartesianVelocityInput_Request input_z_dot(::rrbot_gazebo::srv::CartesianVelocityInput_Request::_input_z_dot_type arg)
  {
    msg_.input_z_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::CartesianVelocityInput_Request msg_;
};

class Init_CartesianVelocityInput_Request_input_y_dot
{
public:
  explicit Init_CartesianVelocityInput_Request_input_y_dot(::rrbot_gazebo::srv::CartesianVelocityInput_Request & msg)
  : msg_(msg)
  {}
  Init_CartesianVelocityInput_Request_input_z_dot input_y_dot(::rrbot_gazebo::srv::CartesianVelocityInput_Request::_input_y_dot_type arg)
  {
    msg_.input_y_dot = std::move(arg);
    return Init_CartesianVelocityInput_Request_input_z_dot(msg_);
  }

private:
  ::rrbot_gazebo::srv::CartesianVelocityInput_Request msg_;
};

class Init_CartesianVelocityInput_Request_input_x_dot
{
public:
  Init_CartesianVelocityInput_Request_input_x_dot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianVelocityInput_Request_input_y_dot input_x_dot(::rrbot_gazebo::srv::CartesianVelocityInput_Request::_input_x_dot_type arg)
  {
    msg_.input_x_dot = std::move(arg);
    return Init_CartesianVelocityInput_Request_input_y_dot(msg_);
  }

private:
  ::rrbot_gazebo::srv::CartesianVelocityInput_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::CartesianVelocityInput_Request>()
{
  return rrbot_gazebo::srv::builder::Init_CartesianVelocityInput_Request_input_x_dot();
}

}  // namespace rrbot_gazebo


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_CartesianVelocityInput_Response_status
{
public:
  Init_CartesianVelocityInput_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrbot_gazebo::srv::CartesianVelocityInput_Response status(::rrbot_gazebo::srv::CartesianVelocityInput_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::CartesianVelocityInput_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::CartesianVelocityInput_Response>()
{
  return rrbot_gazebo::srv::builder::Init_CartesianVelocityInput_Response_status();
}

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__BUILDER_HPP_

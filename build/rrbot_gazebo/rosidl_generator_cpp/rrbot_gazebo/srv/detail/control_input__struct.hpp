// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrbot_gazebo:srv/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__STRUCT_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrbot_gazebo__srv__ControlInput_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrbot_gazebo__srv__ControlInput_Request __declspec(deprecated)
#endif

namespace rrbot_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlInput_Request_
{
  using Type = ControlInput_Request_<ContainerAllocator>;

  explicit ControlInput_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_q1 = 0.0f;
      this->input_q2 = 0.0f;
      this->input_q3 = 0.0f;
    }
  }

  explicit ControlInput_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_q1 = 0.0f;
      this->input_q2 = 0.0f;
      this->input_q3 = 0.0f;
    }
  }

  // field types and members
  using _input_q1_type =
    float;
  _input_q1_type input_q1;
  using _input_q2_type =
    float;
  _input_q2_type input_q2;
  using _input_q3_type =
    float;
  _input_q3_type input_q3;

  // setters for named parameter idiom
  Type & set__input_q1(
    const float & _arg)
  {
    this->input_q1 = _arg;
    return *this;
  }
  Type & set__input_q2(
    const float & _arg)
  {
    this->input_q2 = _arg;
    return *this;
  }
  Type & set__input_q3(
    const float & _arg)
  {
    this->input_q3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrbot_gazebo__srv__ControlInput_Request
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrbot_gazebo__srv__ControlInput_Request
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlInput_Request_ & other) const
  {
    if (this->input_q1 != other.input_q1) {
      return false;
    }
    if (this->input_q2 != other.input_q2) {
      return false;
    }
    if (this->input_q3 != other.input_q3) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlInput_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlInput_Request_

// alias to use template instance with default allocator
using ControlInput_Request =
  rrbot_gazebo::srv::ControlInput_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrbot_gazebo


#ifndef _WIN32
# define DEPRECATED__rrbot_gazebo__srv__ControlInput_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrbot_gazebo__srv__ControlInput_Response __declspec(deprecated)
#endif

namespace rrbot_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlInput_Response_
{
  using Type = ControlInput_Response_<ContainerAllocator>;

  explicit ControlInput_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ControlInput_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrbot_gazebo__srv__ControlInput_Response
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrbot_gazebo__srv__ControlInput_Response
    std::shared_ptr<rrbot_gazebo::srv::ControlInput_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlInput_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlInput_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlInput_Response_

// alias to use template instance with default allocator
using ControlInput_Response =
  rrbot_gazebo::srv::ControlInput_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rrbot_gazebo
{

namespace srv
{

struct ControlInput
{
  using Request = rrbot_gazebo::srv::ControlInput_Request;
  using Response = rrbot_gazebo::srv::ControlInput_Response;
};

}  // namespace srv

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__STRUCT_HPP_

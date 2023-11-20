// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__STRUCT_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrbot_gazebo__srv__IKService_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrbot_gazebo__srv__IKService_Request __declspec(deprecated)
#endif

namespace rrbot_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKService_Request_
{
  using Type = IKService_Request_<ContainerAllocator>;

  explicit IKService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_x = 0.0f;
      this->input_y = 0.0f;
      this->input_z = 0.0f;
    }
  }

  explicit IKService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_x = 0.0f;
      this->input_y = 0.0f;
      this->input_z = 0.0f;
    }
  }

  // field types and members
  using _input_x_type =
    float;
  _input_x_type input_x;
  using _input_y_type =
    float;
  _input_y_type input_y;
  using _input_z_type =
    float;
  _input_z_type input_z;

  // setters for named parameter idiom
  Type & set__input_x(
    const float & _arg)
  {
    this->input_x = _arg;
    return *this;
  }
  Type & set__input_y(
    const float & _arg)
  {
    this->input_y = _arg;
    return *this;
  }
  Type & set__input_z(
    const float & _arg)
  {
    this->input_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrbot_gazebo::srv::IKService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrbot_gazebo::srv::IKService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::IKService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::IKService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrbot_gazebo__srv__IKService_Request
    std::shared_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrbot_gazebo__srv__IKService_Request
    std::shared_ptr<rrbot_gazebo::srv::IKService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKService_Request_ & other) const
  {
    if (this->input_x != other.input_x) {
      return false;
    }
    if (this->input_y != other.input_y) {
      return false;
    }
    if (this->input_z != other.input_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKService_Request_

// alias to use template instance with default allocator
using IKService_Request =
  rrbot_gazebo::srv::IKService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrbot_gazebo


#ifndef _WIN32
# define DEPRECATED__rrbot_gazebo__srv__IKService_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrbot_gazebo__srv__IKService_Response __declspec(deprecated)
#endif

namespace rrbot_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKService_Response_
{
  using Type = IKService_Response_<ContainerAllocator>;

  explicit IKService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_x = 0.0f;
      this->joint_y = 0.0f;
      this->joint_z = 0.0f;
    }
  }

  explicit IKService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_x = 0.0f;
      this->joint_y = 0.0f;
      this->joint_z = 0.0f;
    }
  }

  // field types and members
  using _joint_x_type =
    float;
  _joint_x_type joint_x;
  using _joint_y_type =
    float;
  _joint_y_type joint_y;
  using _joint_z_type =
    float;
  _joint_z_type joint_z;

  // setters for named parameter idiom
  Type & set__joint_x(
    const float & _arg)
  {
    this->joint_x = _arg;
    return *this;
  }
  Type & set__joint_y(
    const float & _arg)
  {
    this->joint_y = _arg;
    return *this;
  }
  Type & set__joint_z(
    const float & _arg)
  {
    this->joint_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrbot_gazebo::srv::IKService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrbot_gazebo::srv::IKService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::IKService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::IKService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrbot_gazebo__srv__IKService_Response
    std::shared_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrbot_gazebo__srv__IKService_Response
    std::shared_ptr<rrbot_gazebo::srv::IKService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKService_Response_ & other) const
  {
    if (this->joint_x != other.joint_x) {
      return false;
    }
    if (this->joint_y != other.joint_y) {
      return false;
    }
    if (this->joint_z != other.joint_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKService_Response_

// alias to use template instance with default allocator
using IKService_Response =
  rrbot_gazebo::srv::IKService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rrbot_gazebo
{

namespace srv
{

struct IKService
{
  using Request = rrbot_gazebo::srv::IKService_Request;
  using Response = rrbot_gazebo::srv::IKService_Response;
};

}  // namespace srv

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__STRUCT_HPP_

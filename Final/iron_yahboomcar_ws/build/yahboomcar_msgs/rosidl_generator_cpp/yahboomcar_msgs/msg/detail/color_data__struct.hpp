// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yahboomcar_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__yahboomcar_msgs__msg__ColorData __attribute__((deprecated))
#else
# define DEPRECATED__yahboomcar_msgs__msg__ColorData __declspec(deprecated)
#endif

namespace yahboomcar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorData_
{
  using Type = ColorData_<ContainerAllocator>;

  explicit ColorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hue = 0;
      this->saturation = 0;
      this->value = 0;
    }
  }

  explicit ColorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hue = 0;
      this->saturation = 0;
      this->value = 0;
    }
  }

  // field types and members
  using _hue_type =
    uint8_t;
  _hue_type hue;
  using _saturation_type =
    uint8_t;
  _saturation_type saturation;
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__hue(
    const uint8_t & _arg)
  {
    this->hue = _arg;
    return *this;
  }
  Type & set__saturation(
    const uint8_t & _arg)
  {
    this->saturation = _arg;
    return *this;
  }
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yahboomcar_msgs::msg::ColorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const yahboomcar_msgs::msg::ColorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yahboomcar_msgs::msg::ColorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yahboomcar_msgs::msg::ColorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yahboomcar_msgs__msg__ColorData
    std::shared_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yahboomcar_msgs__msg__ColorData
    std::shared_ptr<yahboomcar_msgs::msg::ColorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorData_ & other) const
  {
    if (this->hue != other.hue) {
      return false;
    }
    if (this->saturation != other.saturation) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorData_

// alias to use template instance with default allocator
using ColorData =
  yahboomcar_msgs::msg::ColorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yahboomcar_msgs

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_HPP_

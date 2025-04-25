// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yahboomcar_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__BUILDER_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__BUILDER_HPP_

#include "yahboomcar_msgs/msg/detail/color_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yahboomcar_msgs
{

namespace msg
{

namespace builder
{

class Init_ColorData_value
{
public:
  explicit Init_ColorData_value(::yahboomcar_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  ::yahboomcar_msgs::msg::ColorData value(::yahboomcar_msgs::msg::ColorData::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboomcar_msgs::msg::ColorData msg_;
};

class Init_ColorData_saturation
{
public:
  explicit Init_ColorData_saturation(::yahboomcar_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_value saturation(::yahboomcar_msgs::msg::ColorData::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_ColorData_value(msg_);
  }

private:
  ::yahboomcar_msgs::msg::ColorData msg_;
};

class Init_ColorData_hue
{
public:
  Init_ColorData_hue()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorData_saturation hue(::yahboomcar_msgs::msg::ColorData::_hue_type arg)
  {
    msg_.hue = std::move(arg);
    return Init_ColorData_saturation(msg_);
  }

private:
  ::yahboomcar_msgs::msg::ColorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboomcar_msgs::msg::ColorData>()
{
  return yahboomcar_msgs::msg::builder::Init_ColorData_hue();
}

}  // namespace yahboomcar_msgs

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__BUILDER_HPP_

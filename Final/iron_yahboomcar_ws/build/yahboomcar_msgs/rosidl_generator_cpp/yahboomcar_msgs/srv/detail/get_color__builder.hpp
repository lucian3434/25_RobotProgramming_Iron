// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yahboomcar_msgs:srv/GetColor.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__BUILDER_HPP_
#define YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__BUILDER_HPP_

#include "yahboomcar_msgs/srv/detail/get_color__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yahboomcar_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboomcar_msgs::srv::GetColor_Request>()
{
  return ::yahboomcar_msgs::srv::GetColor_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace yahboomcar_msgs


namespace yahboomcar_msgs
{

namespace srv
{

namespace builder
{

class Init_GetColor_Response_color
{
public:
  Init_GetColor_Response_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yahboomcar_msgs::srv::GetColor_Response color(::yahboomcar_msgs::srv::GetColor_Response::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboomcar_msgs::srv::GetColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboomcar_msgs::srv::GetColor_Response>()
{
  return yahboomcar_msgs::srv::builder::Init_GetColor_Response_color();
}

}  // namespace yahboomcar_msgs

#endif  // YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__BUILDER_HPP_

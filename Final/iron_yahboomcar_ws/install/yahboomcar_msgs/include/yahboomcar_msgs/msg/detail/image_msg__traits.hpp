// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboomcar_msgs:msg/ImageMsg.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__IMAGE_MSG__TRAITS_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__IMAGE_MSG__TRAITS_HPP_

#include "yahboomcar_msgs/msg/detail/image_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::msg::ImageMsg>()
{
  return "yahboomcar_msgs::msg::ImageMsg";
}

template<>
inline const char * name<yahboomcar_msgs::msg::ImageMsg>()
{
  return "yahboomcar_msgs/msg/ImageMsg";
}

template<>
struct has_fixed_size<yahboomcar_msgs::msg::ImageMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboomcar_msgs::msg::ImageMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboomcar_msgs::msg::ImageMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__IMAGE_MSG__TRAITS_HPP_

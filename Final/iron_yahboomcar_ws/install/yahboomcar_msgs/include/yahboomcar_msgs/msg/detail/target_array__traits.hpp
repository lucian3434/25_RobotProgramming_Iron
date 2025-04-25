// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboomcar_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__TRAITS_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__TRAITS_HPP_

#include "yahboomcar_msgs/msg/detail/target_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::msg::TargetArray>()
{
  return "yahboomcar_msgs::msg::TargetArray";
}

template<>
inline const char * name<yahboomcar_msgs::msg::TargetArray>()
{
  return "yahboomcar_msgs/msg/TargetArray";
}

template<>
struct has_fixed_size<yahboomcar_msgs::msg::TargetArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboomcar_msgs::msg::TargetArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboomcar_msgs::msg::TargetArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__TARGET_ARRAY__TRAITS_HPP_

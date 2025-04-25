// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboomcar_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_

#include "yahboomcar_msgs/msg/detail/target__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::msg::Target>()
{
  return "yahboomcar_msgs::msg::Target";
}

template<>
inline const char * name<yahboomcar_msgs::msg::Target>()
{
  return "yahboomcar_msgs/msg/Target";
}

template<>
struct has_fixed_size<yahboomcar_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboomcar_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboomcar_msgs::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_

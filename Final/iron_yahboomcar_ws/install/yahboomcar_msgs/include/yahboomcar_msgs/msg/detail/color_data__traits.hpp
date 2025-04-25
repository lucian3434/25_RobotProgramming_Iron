// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboomcar_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__TRAITS_HPP_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__TRAITS_HPP_

#include "yahboomcar_msgs/msg/detail/color_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::msg::ColorData>()
{
  return "yahboomcar_msgs::msg::ColorData";
}

template<>
inline const char * name<yahboomcar_msgs::msg::ColorData>()
{
  return "yahboomcar_msgs/msg/ColorData";
}

template<>
struct has_fixed_size<yahboomcar_msgs::msg::ColorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yahboomcar_msgs::msg::ColorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yahboomcar_msgs::msg::ColorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__TRAITS_HPP_

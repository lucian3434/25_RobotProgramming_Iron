// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboomcar_msgs:srv/GetColor.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__TRAITS_HPP_
#define YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__TRAITS_HPP_

#include "yahboomcar_msgs/srv/detail/get_color__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::srv::GetColor_Request>()
{
  return "yahboomcar_msgs::srv::GetColor_Request";
}

template<>
inline const char * name<yahboomcar_msgs::srv::GetColor_Request>()
{
  return "yahboomcar_msgs/srv/GetColor_Request";
}

template<>
struct has_fixed_size<yahboomcar_msgs::srv::GetColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yahboomcar_msgs::srv::GetColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yahboomcar_msgs::srv::GetColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::srv::GetColor_Response>()
{
  return "yahboomcar_msgs::srv::GetColor_Response";
}

template<>
inline const char * name<yahboomcar_msgs::srv::GetColor_Response>()
{
  return "yahboomcar_msgs/srv/GetColor_Response";
}

template<>
struct has_fixed_size<yahboomcar_msgs::srv::GetColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboomcar_msgs::srv::GetColor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboomcar_msgs::srv::GetColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboomcar_msgs::srv::GetColor>()
{
  return "yahboomcar_msgs::srv::GetColor";
}

template<>
inline const char * name<yahboomcar_msgs::srv::GetColor>()
{
  return "yahboomcar_msgs/srv/GetColor";
}

template<>
struct has_fixed_size<yahboomcar_msgs::srv::GetColor>
  : std::integral_constant<
    bool,
    has_fixed_size<yahboomcar_msgs::srv::GetColor_Request>::value &&
    has_fixed_size<yahboomcar_msgs::srv::GetColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<yahboomcar_msgs::srv::GetColor>
  : std::integral_constant<
    bool,
    has_bounded_size<yahboomcar_msgs::srv::GetColor_Request>::value &&
    has_bounded_size<yahboomcar_msgs::srv::GetColor_Response>::value
  >
{
};

template<>
struct is_service<yahboomcar_msgs::srv::GetColor>
  : std::true_type
{
};

template<>
struct is_service_request<yahboomcar_msgs::srv::GetColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yahboomcar_msgs::srv::GetColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__TRAITS_HPP_

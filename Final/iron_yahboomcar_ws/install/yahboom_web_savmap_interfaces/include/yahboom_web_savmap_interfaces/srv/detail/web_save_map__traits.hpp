// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yahboom_web_savmap_interfaces:srv/WebSaveMap.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOM_WEB_SAVMAP_INTERFACES__SRV__DETAIL__WEB_SAVE_MAP__TRAITS_HPP_
#define YAHBOOM_WEB_SAVMAP_INTERFACES__SRV__DETAIL__WEB_SAVE_MAP__TRAITS_HPP_

#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>()
{
  return "yahboom_web_savmap_interfaces::srv::WebSaveMap_Request";
}

template<>
inline const char * name<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>()
{
  return "yahboom_web_savmap_interfaces/srv/WebSaveMap_Request";
}

template<>
struct has_fixed_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>()
{
  return "yahboom_web_savmap_interfaces::srv::WebSaveMap_Response";
}

template<>
inline const char * name<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>()
{
  return "yahboom_web_savmap_interfaces/srv/WebSaveMap_Response";
}

template<>
struct has_fixed_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yahboom_web_savmap_interfaces::srv::WebSaveMap>()
{
  return "yahboom_web_savmap_interfaces::srv::WebSaveMap";
}

template<>
inline const char * name<yahboom_web_savmap_interfaces::srv::WebSaveMap>()
{
  return "yahboom_web_savmap_interfaces/srv/WebSaveMap";
}

template<>
struct has_fixed_size<yahboom_web_savmap_interfaces::srv::WebSaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>::value &&
    has_fixed_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<yahboom_web_savmap_interfaces::srv::WebSaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>::value &&
    has_bounded_size<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>::value
  >
{
};

template<>
struct is_service<yahboom_web_savmap_interfaces::srv::WebSaveMap>
  : std::true_type
{
};

template<>
struct is_service_request<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YAHBOOM_WEB_SAVMAP_INTERFACES__SRV__DETAIL__WEB_SAVE_MAP__TRAITS_HPP_

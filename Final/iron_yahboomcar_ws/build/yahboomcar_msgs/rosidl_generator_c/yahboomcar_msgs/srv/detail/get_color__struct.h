// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yahboomcar_msgs:srv/GetColor.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__STRUCT_H_
#define YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetColor in the package yahboomcar_msgs.
typedef struct yahboomcar_msgs__srv__GetColor_Request
{
  uint8_t structure_needs_at_least_one_member;
} yahboomcar_msgs__srv__GetColor_Request;

// Struct for a sequence of yahboomcar_msgs__srv__GetColor_Request.
typedef struct yahboomcar_msgs__srv__GetColor_Request__Sequence
{
  yahboomcar_msgs__srv__GetColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboomcar_msgs__srv__GetColor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetColor in the package yahboomcar_msgs.
typedef struct yahboomcar_msgs__srv__GetColor_Response
{
  rosidl_runtime_c__String color;
} yahboomcar_msgs__srv__GetColor_Response;

// Struct for a sequence of yahboomcar_msgs__srv__GetColor_Response.
typedef struct yahboomcar_msgs__srv__GetColor_Response__Sequence
{
  yahboomcar_msgs__srv__GetColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboomcar_msgs__srv__GetColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YAHBOOMCAR_MSGS__SRV__DETAIL__GET_COLOR__STRUCT_H_

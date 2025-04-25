// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yahboomcar_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_H_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ColorData in the package yahboomcar_msgs.
typedef struct yahboomcar_msgs__msg__ColorData
{
  uint8_t hue;
  uint8_t saturation;
  uint8_t value;
} yahboomcar_msgs__msg__ColorData;

// Struct for a sequence of yahboomcar_msgs__msg__ColorData.
typedef struct yahboomcar_msgs__msg__ColorData__Sequence
{
  yahboomcar_msgs__msg__ColorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yahboomcar_msgs__msg__ColorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_H_

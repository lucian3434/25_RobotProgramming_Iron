// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yahboomcar_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__FUNCTIONS_H_
#define YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yahboomcar_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "yahboomcar_msgs/msg/detail/color_data__struct.h"

/// Initialize msg/ColorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yahboomcar_msgs__msg__ColorData
 * )) before or use
 * yahboomcar_msgs__msg__ColorData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
bool
yahboomcar_msgs__msg__ColorData__init(yahboomcar_msgs__msg__ColorData * msg);

/// Finalize msg/ColorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
void
yahboomcar_msgs__msg__ColorData__fini(yahboomcar_msgs__msg__ColorData * msg);

/// Create msg/ColorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yahboomcar_msgs__msg__ColorData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
yahboomcar_msgs__msg__ColorData *
yahboomcar_msgs__msg__ColorData__create();

/// Destroy msg/ColorData message.
/**
 * It calls
 * yahboomcar_msgs__msg__ColorData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
void
yahboomcar_msgs__msg__ColorData__destroy(yahboomcar_msgs__msg__ColorData * msg);

/// Check for msg/ColorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
bool
yahboomcar_msgs__msg__ColorData__are_equal(const yahboomcar_msgs__msg__ColorData * lhs, const yahboomcar_msgs__msg__ColorData * rhs);

/// Copy a msg/ColorData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
bool
yahboomcar_msgs__msg__ColorData__copy(
  const yahboomcar_msgs__msg__ColorData * input,
  yahboomcar_msgs__msg__ColorData * output);

/// Initialize array of msg/ColorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * yahboomcar_msgs__msg__ColorData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
bool
yahboomcar_msgs__msg__ColorData__Sequence__init(yahboomcar_msgs__msg__ColorData__Sequence * array, size_t size);

/// Finalize array of msg/ColorData messages.
/**
 * It calls
 * yahboomcar_msgs__msg__ColorData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
void
yahboomcar_msgs__msg__ColorData__Sequence__fini(yahboomcar_msgs__msg__ColorData__Sequence * array);

/// Create array of msg/ColorData messages.
/**
 * It allocates the memory for the array and calls
 * yahboomcar_msgs__msg__ColorData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
yahboomcar_msgs__msg__ColorData__Sequence *
yahboomcar_msgs__msg__ColorData__Sequence__create(size_t size);

/// Destroy array of msg/ColorData messages.
/**
 * It calls
 * yahboomcar_msgs__msg__ColorData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
void
yahboomcar_msgs__msg__ColorData__Sequence__destroy(yahboomcar_msgs__msg__ColorData__Sequence * array);

/// Check for msg/ColorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
bool
yahboomcar_msgs__msg__ColorData__Sequence__are_equal(const yahboomcar_msgs__msg__ColorData__Sequence * lhs, const yahboomcar_msgs__msg__ColorData__Sequence * rhs);

/// Copy an array of msg/ColorData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_yahboomcar_msgs
bool
yahboomcar_msgs__msg__ColorData__Sequence__copy(
  const yahboomcar_msgs__msg__ColorData__Sequence * input,
  yahboomcar_msgs__msg__ColorData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YAHBOOMCAR_MSGS__MSG__DETAIL__COLOR_DATA__FUNCTIONS_H_

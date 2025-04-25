// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yahboomcar_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice
#include "yahboomcar_msgs/msg/detail/color_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yahboomcar_msgs__msg__ColorData__init(yahboomcar_msgs__msg__ColorData * msg)
{
  if (!msg) {
    return false;
  }
  // hue
  // saturation
  // value
  return true;
}

void
yahboomcar_msgs__msg__ColorData__fini(yahboomcar_msgs__msg__ColorData * msg)
{
  if (!msg) {
    return;
  }
  // hue
  // saturation
  // value
}

bool
yahboomcar_msgs__msg__ColorData__are_equal(const yahboomcar_msgs__msg__ColorData * lhs, const yahboomcar_msgs__msg__ColorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hue
  if (lhs->hue != rhs->hue) {
    return false;
  }
  // saturation
  if (lhs->saturation != rhs->saturation) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
yahboomcar_msgs__msg__ColorData__copy(
  const yahboomcar_msgs__msg__ColorData * input,
  yahboomcar_msgs__msg__ColorData * output)
{
  if (!input || !output) {
    return false;
  }
  // hue
  output->hue = input->hue;
  // saturation
  output->saturation = input->saturation;
  // value
  output->value = input->value;
  return true;
}

yahboomcar_msgs__msg__ColorData *
yahboomcar_msgs__msg__ColorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboomcar_msgs__msg__ColorData * msg = (yahboomcar_msgs__msg__ColorData *)allocator.allocate(sizeof(yahboomcar_msgs__msg__ColorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboomcar_msgs__msg__ColorData));
  bool success = yahboomcar_msgs__msg__ColorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboomcar_msgs__msg__ColorData__destroy(yahboomcar_msgs__msg__ColorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboomcar_msgs__msg__ColorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboomcar_msgs__msg__ColorData__Sequence__init(yahboomcar_msgs__msg__ColorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboomcar_msgs__msg__ColorData * data = NULL;

  if (size) {
    data = (yahboomcar_msgs__msg__ColorData *)allocator.zero_allocate(size, sizeof(yahboomcar_msgs__msg__ColorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboomcar_msgs__msg__ColorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboomcar_msgs__msg__ColorData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yahboomcar_msgs__msg__ColorData__Sequence__fini(yahboomcar_msgs__msg__ColorData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yahboomcar_msgs__msg__ColorData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yahboomcar_msgs__msg__ColorData__Sequence *
yahboomcar_msgs__msg__ColorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboomcar_msgs__msg__ColorData__Sequence * array = (yahboomcar_msgs__msg__ColorData__Sequence *)allocator.allocate(sizeof(yahboomcar_msgs__msg__ColorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboomcar_msgs__msg__ColorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboomcar_msgs__msg__ColorData__Sequence__destroy(yahboomcar_msgs__msg__ColorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboomcar_msgs__msg__ColorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboomcar_msgs__msg__ColorData__Sequence__are_equal(const yahboomcar_msgs__msg__ColorData__Sequence * lhs, const yahboomcar_msgs__msg__ColorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboomcar_msgs__msg__ColorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboomcar_msgs__msg__ColorData__Sequence__copy(
  const yahboomcar_msgs__msg__ColorData__Sequence * input,
  yahboomcar_msgs__msg__ColorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboomcar_msgs__msg__ColorData);
    yahboomcar_msgs__msg__ColorData * data =
      (yahboomcar_msgs__msg__ColorData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboomcar_msgs__msg__ColorData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          yahboomcar_msgs__msg__ColorData__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboomcar_msgs__msg__ColorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

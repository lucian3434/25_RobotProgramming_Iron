// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yahboomcar_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yahboomcar_msgs/msg/detail/target_array__rosidl_typesupport_introspection_c.h"
#include "yahboomcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yahboomcar_msgs/msg/detail/target_array__functions.h"
#include "yahboomcar_msgs/msg/detail/target_array__struct.h"


// Include directives for member types
// Member `data`
#include "yahboomcar_msgs/msg/target.h"
// Member `data`
#include "yahboomcar_msgs/msg/detail/target__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TargetArray__rosidl_typesupport_introspection_c__TargetArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboomcar_msgs__msg__TargetArray__init(message_memory);
}

void TargetArray__rosidl_typesupport_introspection_c__TargetArray_fini_function(void * message_memory)
{
  yahboomcar_msgs__msg__TargetArray__fini(message_memory);
}

size_t TargetArray__rosidl_typesupport_introspection_c__size_function__Target__data(
  const void * untyped_member)
{
  const yahboomcar_msgs__msg__Target__Sequence * member =
    (const yahboomcar_msgs__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * TargetArray__rosidl_typesupport_introspection_c__get_const_function__Target__data(
  const void * untyped_member, size_t index)
{
  const yahboomcar_msgs__msg__Target__Sequence * member =
    (const yahboomcar_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TargetArray__rosidl_typesupport_introspection_c__get_function__Target__data(
  void * untyped_member, size_t index)
{
  yahboomcar_msgs__msg__Target__Sequence * member =
    (yahboomcar_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TargetArray__rosidl_typesupport_introspection_c__resize_function__Target__data(
  void * untyped_member, size_t size)
{
  yahboomcar_msgs__msg__Target__Sequence * member =
    (yahboomcar_msgs__msg__Target__Sequence *)(untyped_member);
  yahboomcar_msgs__msg__Target__Sequence__fini(member);
  return yahboomcar_msgs__msg__Target__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__msg__TargetArray, data),  // bytes offset in struct
    NULL,  // default value
    TargetArray__rosidl_typesupport_introspection_c__size_function__Target__data,  // size() function pointer
    TargetArray__rosidl_typesupport_introspection_c__get_const_function__Target__data,  // get_const(index) function pointer
    TargetArray__rosidl_typesupport_introspection_c__get_function__Target__data,  // get(index) function pointer
    TargetArray__rosidl_typesupport_introspection_c__resize_function__Target__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_members = {
  "yahboomcar_msgs__msg",  // message namespace
  "TargetArray",  // message name
  1,  // number of fields
  sizeof(yahboomcar_msgs__msg__TargetArray),
  TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array,  // message members
  TargetArray__rosidl_typesupport_introspection_c__TargetArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetArray__rosidl_typesupport_introspection_c__TargetArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle = {
  0,
  &TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboomcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, msg, TargetArray)() {
  TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, msg, Target)();
  if (!TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle.typesupport_identifier) {
    TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

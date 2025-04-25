// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yahboomcar_msgs:msg/ImageMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yahboomcar_msgs/msg/detail/image_msg__rosidl_typesupport_introspection_c.h"
#include "yahboomcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yahboomcar_msgs/msg/detail/image_msg__functions.h"
#include "yahboomcar_msgs/msg/detail/image_msg__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboomcar_msgs__msg__ImageMsg__init(message_memory);
}

void ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_fini_function(void * message_memory)
{
  yahboomcar_msgs__msg__ImageMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_member_array[4] = {
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__msg__ImageMsg, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__msg__ImageMsg, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__msg__ImageMsg, channels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__msg__ImageMsg, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_members = {
  "yahboomcar_msgs__msg",  // message namespace
  "ImageMsg",  // message name
  4,  // number of fields
  sizeof(yahboomcar_msgs__msg__ImageMsg),
  ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_member_array,  // message members
  ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_type_support_handle = {
  0,
  &ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboomcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, msg, ImageMsg)() {
  if (!ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_type_support_handle.typesupport_identifier) {
    ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageMsg__rosidl_typesupport_introspection_c__ImageMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

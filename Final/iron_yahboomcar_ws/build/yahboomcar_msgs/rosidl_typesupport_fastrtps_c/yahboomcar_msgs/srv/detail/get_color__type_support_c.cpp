// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yahboomcar_msgs:srv/GetColor.idl
// generated code does not contain a copyright notice
#include "yahboomcar_msgs/srv/detail/get_color__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yahboomcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yahboomcar_msgs/srv/detail/get_color__struct.h"
#include "yahboomcar_msgs/srv/detail/get_color__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetColor_Request__ros_msg_type = yahboomcar_msgs__srv__GetColor_Request;

static bool _GetColor_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetColor_Request__ros_msg_type * ros_message = static_cast<const _GetColor_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetColor_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetColor_Request__ros_msg_type * ros_message = static_cast<_GetColor_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboomcar_msgs
size_t get_serialized_size_yahboomcar_msgs__srv__GetColor_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetColor_Request__ros_msg_type * ros_message = static_cast<const _GetColor_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetColor_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yahboomcar_msgs__srv__GetColor_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboomcar_msgs
size_t max_serialized_size_yahboomcar_msgs__srv__GetColor_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetColor_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_yahboomcar_msgs__srv__GetColor_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetColor_Request = {
  "yahboomcar_msgs::srv",
  "GetColor_Request",
  _GetColor_Request__cdr_serialize,
  _GetColor_Request__cdr_deserialize,
  _GetColor_Request__get_serialized_size,
  _GetColor_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetColor_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetColor_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboomcar_msgs, srv, GetColor_Request)() {
  return &_GetColor_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "yahboomcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "yahboomcar_msgs/srv/detail/get_color__struct.h"
// already included above
// #include "yahboomcar_msgs/srv/detail/get_color__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // color
#include "rosidl_runtime_c/string_functions.h"  // color

// forward declare type support functions


using _GetColor_Response__ros_msg_type = yahboomcar_msgs__srv__GetColor_Response;

static bool _GetColor_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetColor_Response__ros_msg_type * ros_message = static_cast<const _GetColor_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    const rosidl_runtime_c__String * str = &ros_message->color;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetColor_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetColor_Response__ros_msg_type * ros_message = static_cast<_GetColor_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color.data) {
      rosidl_runtime_c__String__init(&ros_message->color);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboomcar_msgs
size_t get_serialized_size_yahboomcar_msgs__srv__GetColor_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetColor_Response__ros_msg_type * ros_message = static_cast<const _GetColor_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetColor_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yahboomcar_msgs__srv__GetColor_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yahboomcar_msgs
size_t max_serialized_size_yahboomcar_msgs__srv__GetColor_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: color
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetColor_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_yahboomcar_msgs__srv__GetColor_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetColor_Response = {
  "yahboomcar_msgs::srv",
  "GetColor_Response",
  _GetColor_Response__cdr_serialize,
  _GetColor_Response__cdr_deserialize,
  _GetColor_Response__get_serialized_size,
  _GetColor_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetColor_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetColor_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboomcar_msgs, srv, GetColor_Response)() {
  return &_GetColor_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "yahboomcar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yahboomcar_msgs/srv/get_color.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetColor__callbacks = {
  "yahboomcar_msgs::srv",
  "GetColor",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboomcar_msgs, srv, GetColor_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboomcar_msgs, srv, GetColor_Response)(),
};

static rosidl_service_type_support_t GetColor__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetColor__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yahboomcar_msgs, srv, GetColor)() {
  return &GetColor__handle;
}

#if defined(__cplusplus)
}
#endif

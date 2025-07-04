// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yahboom_web_savmap_interfaces:srv/WebSaveMap.idl
// generated code does not contain a copyright notice
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace yahboom_web_savmap_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
cdr_serialize(
  const yahboom_web_savmap_interfaces::srv::WebSaveMap_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mapname
  cdr << ros_message.mapname;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yahboom_web_savmap_interfaces::srv::WebSaveMap_Request & ros_message)
{
  // Member: mapname
  cdr >> ros_message.mapname;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
get_serialized_size(
  const yahboom_web_savmap_interfaces::srv::WebSaveMap_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mapname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mapname.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
max_serialized_size_WebSaveMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: mapname
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

static bool _WebSaveMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yahboom_web_savmap_interfaces::srv::WebSaveMap_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WebSaveMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WebSaveMap_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yahboom_web_savmap_interfaces::srv::WebSaveMap_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WebSaveMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WebSaveMap_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _WebSaveMap_Request__callbacks = {
  "yahboom_web_savmap_interfaces::srv",
  "WebSaveMap_Request",
  _WebSaveMap_Request__cdr_serialize,
  _WebSaveMap_Request__cdr_deserialize,
  _WebSaveMap_Request__get_serialized_size,
  _WebSaveMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _WebSaveMap_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WebSaveMap_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace yahboom_web_savmap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yahboom_web_savmap_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<yahboom_web_savmap_interfaces::srv::WebSaveMap_Request>()
{
  return &yahboom_web_savmap_interfaces::srv::typesupport_fastrtps_cpp::_WebSaveMap_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)() {
  return &yahboom_web_savmap_interfaces::srv::typesupport_fastrtps_cpp::_WebSaveMap_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace yahboom_web_savmap_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
cdr_serialize(
  const yahboom_web_savmap_interfaces::srv::WebSaveMap_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  cdr << ros_message.response;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yahboom_web_savmap_interfaces::srv::WebSaveMap_Response & ros_message)
{
  // Member: response
  cdr >> ros_message.response;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
get_serialized_size(
  const yahboom_web_savmap_interfaces::srv::WebSaveMap_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.response.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yahboom_web_savmap_interfaces
max_serialized_size_WebSaveMap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: response
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

static bool _WebSaveMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yahboom_web_savmap_interfaces::srv::WebSaveMap_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WebSaveMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WebSaveMap_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yahboom_web_savmap_interfaces::srv::WebSaveMap_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WebSaveMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WebSaveMap_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _WebSaveMap_Response__callbacks = {
  "yahboom_web_savmap_interfaces::srv",
  "WebSaveMap_Response",
  _WebSaveMap_Response__cdr_serialize,
  _WebSaveMap_Response__cdr_deserialize,
  _WebSaveMap_Response__get_serialized_size,
  _WebSaveMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _WebSaveMap_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WebSaveMap_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace yahboom_web_savmap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yahboom_web_savmap_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<yahboom_web_savmap_interfaces::srv::WebSaveMap_Response>()
{
  return &yahboom_web_savmap_interfaces::srv::typesupport_fastrtps_cpp::_WebSaveMap_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)() {
  return &yahboom_web_savmap_interfaces::srv::typesupport_fastrtps_cpp::_WebSaveMap_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace yahboom_web_savmap_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _WebSaveMap__callbacks = {
  "yahboom_web_savmap_interfaces::srv",
  "WebSaveMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)(),
};

static rosidl_service_type_support_t _WebSaveMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WebSaveMap__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace yahboom_web_savmap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yahboom_web_savmap_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<yahboom_web_savmap_interfaces::srv::WebSaveMap>()
{
  return &yahboom_web_savmap_interfaces::srv::typesupport_fastrtps_cpp::_WebSaveMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yahboom_web_savmap_interfaces, srv, WebSaveMap)() {
  return &yahboom_web_savmap_interfaces::srv::typesupport_fastrtps_cpp::_WebSaveMap__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yahboom_web_savmap_interfaces:srv/WebSaveMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__rosidl_typesupport_introspection_c.h"
#include "yahboom_web_savmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__functions.h"
#include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__struct.h"


// Include directives for member types
// Member `mapname`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboom_web_savmap_interfaces__srv__WebSaveMap_Request__init(message_memory);
}

void WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_fini_function(void * message_memory)
{
  yahboom_web_savmap_interfaces__srv__WebSaveMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_member_array[1] = {
  {
    "mapname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_web_savmap_interfaces__srv__WebSaveMap_Request, mapname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_members = {
  "yahboom_web_savmap_interfaces__srv",  // message namespace
  "WebSaveMap_Request",  // message name
  1,  // number of fields
  sizeof(yahboom_web_savmap_interfaces__srv__WebSaveMap_Request),
  WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_member_array,  // message members
  WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_type_support_handle = {
  0,
  &WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_web_savmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)() {
  if (!WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_type_support_handle.typesupport_identifier) {
    WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WebSaveMap_Request__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yahboom_web_savmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__functions.h"
// already included above
// #include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__struct.h"


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboom_web_savmap_interfaces__srv__WebSaveMap_Response__init(message_memory);
}

void WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_fini_function(void * message_memory)
{
  yahboom_web_savmap_interfaces__srv__WebSaveMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_web_savmap_interfaces__srv__WebSaveMap_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_members = {
  "yahboom_web_savmap_interfaces__srv",  // message namespace
  "WebSaveMap_Response",  // message name
  1,  // number of fields
  sizeof(yahboom_web_savmap_interfaces__srv__WebSaveMap_Response),
  WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_member_array,  // message members
  WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_type_support_handle = {
  0,
  &WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_web_savmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)() {
  if (!WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_type_support_handle.typesupport_identifier) {
    WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WebSaveMap_Response__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "yahboom_web_savmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "yahboom_web_savmap_interfaces/srv/detail/web_save_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_members = {
  "yahboom_web_savmap_interfaces__srv",  // service namespace
  "WebSaveMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_Request_message_type_support_handle,
  NULL  // response message
  // yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_type_support_handle = {
  0,
  &yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_web_savmap_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap)() {
  if (!yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_type_support_handle.typesupport_identifier) {
    yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_web_savmap_interfaces, srv, WebSaveMap_Response)()->data;
  }

  return &yahboom_web_savmap_interfaces__srv__detail__web_save_map__rosidl_typesupport_introspection_c__WebSaveMap_service_type_support_handle;
}

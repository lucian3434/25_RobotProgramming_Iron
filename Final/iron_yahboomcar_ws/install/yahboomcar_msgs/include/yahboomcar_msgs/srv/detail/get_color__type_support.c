// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yahboomcar_msgs:srv/GetColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yahboomcar_msgs/srv/detail/get_color__rosidl_typesupport_introspection_c.h"
#include "yahboomcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yahboomcar_msgs/srv/detail/get_color__functions.h"
#include "yahboomcar_msgs/srv/detail/get_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboomcar_msgs__srv__GetColor_Request__init(message_memory);
}

void GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_fini_function(void * message_memory)
{
  yahboomcar_msgs__srv__GetColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__srv__GetColor_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_members = {
  "yahboomcar_msgs__srv",  // message namespace
  "GetColor_Request",  // message name
  1,  // number of fields
  sizeof(yahboomcar_msgs__srv__GetColor_Request),
  GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_member_array,  // message members
  GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_type_support_handle = {
  0,
  &GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboomcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor_Request)() {
  if (!GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_type_support_handle.typesupport_identifier) {
    GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetColor_Request__rosidl_typesupport_introspection_c__GetColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yahboomcar_msgs/srv/detail/get_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yahboomcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yahboomcar_msgs/srv/detail/get_color__functions.h"
// already included above
// #include "yahboomcar_msgs/srv/detail/get_color__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboomcar_msgs__srv__GetColor_Response__init(message_memory);
}

void GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_fini_function(void * message_memory)
{
  yahboomcar_msgs__srv__GetColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_member_array[1] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboomcar_msgs__srv__GetColor_Response, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_members = {
  "yahboomcar_msgs__srv",  // message namespace
  "GetColor_Response",  // message name
  1,  // number of fields
  sizeof(yahboomcar_msgs__srv__GetColor_Response),
  GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_member_array,  // message members
  GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_type_support_handle = {
  0,
  &GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboomcar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor_Response)() {
  if (!GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_type_support_handle.typesupport_identifier) {
    GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetColor_Response__rosidl_typesupport_introspection_c__GetColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "yahboomcar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "yahboomcar_msgs/srv/detail/get_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_members = {
  "yahboomcar_msgs__srv",  // service namespace
  "GetColor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_Request_message_type_support_handle,
  NULL  // response message
  // yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_Response_message_type_support_handle
};

static rosidl_service_type_support_t yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_type_support_handle = {
  0,
  &yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboomcar_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor)() {
  if (!yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_type_support_handle.typesupport_identifier) {
    yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboomcar_msgs, srv, GetColor_Response)()->data;
  }

  return &yahboomcar_msgs__srv__detail__get_color__rosidl_typesupport_introspection_c__GetColor_service_type_support_handle;
}

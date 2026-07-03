// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delta_robot_serial/srv/detail/ikin__rosidl_typesupport_introspection_c.h"
#include "delta_robot_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delta_robot_serial/srv/detail/ikin__functions.h"
#include "delta_robot_serial/srv/detail/ikin__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delta_robot_serial__srv__Ikin_Request__init(message_memory);
}

void delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_fini_function(void * message_memory)
{
  delta_robot_serial__srv__Ikin_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_members = {
  "delta_robot_serial__srv",  // message namespace
  "Ikin_Request",  // message name
  3,  // number of fields
  sizeof(delta_robot_serial__srv__Ikin_Request),
  false,  // has_any_key_member_
  delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_member_array,  // message members
  delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_type_support_handle = {
  0,
  &delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_members,
  get_message_typesupport_handle_function,
  &delta_robot_serial__srv__Ikin_Request__get_type_hash,
  &delta_robot_serial__srv__Ikin_Request__get_type_description,
  &delta_robot_serial__srv__Ikin_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delta_robot_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Request)() {
  if (!delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_type_support_handle.typesupport_identifier) {
    delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "delta_robot_serial/srv/detail/ikin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "delta_robot_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "delta_robot_serial/srv/detail/ikin__functions.h"
// already included above
// #include "delta_robot_serial/srv/detail/ikin__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delta_robot_serial__srv__Ikin_Response__init(message_memory);
}

void delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_fini_function(void * message_memory)
{
  delta_robot_serial__srv__Ikin_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_member_array[3] = {
  {
    "phi_11",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Response, phi_11),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phi_21",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Response, phi_21),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phi_31",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Response, phi_31),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_members = {
  "delta_robot_serial__srv",  // message namespace
  "Ikin_Response",  // message name
  3,  // number of fields
  sizeof(delta_robot_serial__srv__Ikin_Response),
  false,  // has_any_key_member_
  delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_member_array,  // message members
  delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle = {
  0,
  &delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_members,
  get_message_typesupport_handle_function,
  &delta_robot_serial__srv__Ikin_Response__get_type_hash,
  &delta_robot_serial__srv__Ikin_Response__get_type_description,
  &delta_robot_serial__srv__Ikin_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delta_robot_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Response)() {
  if (!delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle.typesupport_identifier) {
    delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "delta_robot_serial/srv/detail/ikin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "delta_robot_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "delta_robot_serial/srv/detail/ikin__functions.h"
// already included above
// #include "delta_robot_serial/srv/detail/ikin__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "delta_robot_serial/srv/ikin.h"
// Member `request`
// Member `response`
// already included above
// #include "delta_robot_serial/srv/detail/ikin__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delta_robot_serial__srv__Ikin_Event__init(message_memory);
}

void delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_fini_function(void * message_memory)
{
  delta_robot_serial__srv__Ikin_Event__fini(message_memory);
}

size_t delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__size_function__Ikin_Event__request(
  const void * untyped_member)
{
  const delta_robot_serial__srv__Ikin_Request__Sequence * member =
    (const delta_robot_serial__srv__Ikin_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_const_function__Ikin_Event__request(
  const void * untyped_member, size_t index)
{
  const delta_robot_serial__srv__Ikin_Request__Sequence * member =
    (const delta_robot_serial__srv__Ikin_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_function__Ikin_Event__request(
  void * untyped_member, size_t index)
{
  delta_robot_serial__srv__Ikin_Request__Sequence * member =
    (delta_robot_serial__srv__Ikin_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__fetch_function__Ikin_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const delta_robot_serial__srv__Ikin_Request * item =
    ((const delta_robot_serial__srv__Ikin_Request *)
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_const_function__Ikin_Event__request(untyped_member, index));
  delta_robot_serial__srv__Ikin_Request * value =
    (delta_robot_serial__srv__Ikin_Request *)(untyped_value);
  *value = *item;
}

void delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__assign_function__Ikin_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  delta_robot_serial__srv__Ikin_Request * item =
    ((delta_robot_serial__srv__Ikin_Request *)
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_function__Ikin_Event__request(untyped_member, index));
  const delta_robot_serial__srv__Ikin_Request * value =
    (const delta_robot_serial__srv__Ikin_Request *)(untyped_value);
  *item = *value;
}

bool delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__resize_function__Ikin_Event__request(
  void * untyped_member, size_t size)
{
  delta_robot_serial__srv__Ikin_Request__Sequence * member =
    (delta_robot_serial__srv__Ikin_Request__Sequence *)(untyped_member);
  delta_robot_serial__srv__Ikin_Request__Sequence__fini(member);
  return delta_robot_serial__srv__Ikin_Request__Sequence__init(member, size);
}

size_t delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__size_function__Ikin_Event__response(
  const void * untyped_member)
{
  const delta_robot_serial__srv__Ikin_Response__Sequence * member =
    (const delta_robot_serial__srv__Ikin_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_const_function__Ikin_Event__response(
  const void * untyped_member, size_t index)
{
  const delta_robot_serial__srv__Ikin_Response__Sequence * member =
    (const delta_robot_serial__srv__Ikin_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_function__Ikin_Event__response(
  void * untyped_member, size_t index)
{
  delta_robot_serial__srv__Ikin_Response__Sequence * member =
    (delta_robot_serial__srv__Ikin_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__fetch_function__Ikin_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const delta_robot_serial__srv__Ikin_Response * item =
    ((const delta_robot_serial__srv__Ikin_Response *)
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_const_function__Ikin_Event__response(untyped_member, index));
  delta_robot_serial__srv__Ikin_Response * value =
    (delta_robot_serial__srv__Ikin_Response *)(untyped_value);
  *value = *item;
}

void delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__assign_function__Ikin_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  delta_robot_serial__srv__Ikin_Response * item =
    ((delta_robot_serial__srv__Ikin_Response *)
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_function__Ikin_Event__response(untyped_member, index));
  const delta_robot_serial__srv__Ikin_Response * value =
    (const delta_robot_serial__srv__Ikin_Response *)(untyped_value);
  *item = *value;
}

bool delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__resize_function__Ikin_Event__response(
  void * untyped_member, size_t size)
{
  delta_robot_serial__srv__Ikin_Response__Sequence * member =
    (delta_robot_serial__srv__Ikin_Response__Sequence *)(untyped_member);
  delta_robot_serial__srv__Ikin_Response__Sequence__fini(member);
  return delta_robot_serial__srv__Ikin_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Event, request),  // bytes offset in struct
    NULL,  // default value
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__size_function__Ikin_Event__request,  // size() function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_const_function__Ikin_Event__request,  // get_const(index) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_function__Ikin_Event__request,  // get(index) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__fetch_function__Ikin_Event__request,  // fetch(index, &value) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__assign_function__Ikin_Event__request,  // assign(index, value) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__resize_function__Ikin_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(delta_robot_serial__srv__Ikin_Event, response),  // bytes offset in struct
    NULL,  // default value
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__size_function__Ikin_Event__response,  // size() function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_const_function__Ikin_Event__response,  // get_const(index) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__get_function__Ikin_Event__response,  // get(index) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__fetch_function__Ikin_Event__response,  // fetch(index, &value) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__assign_function__Ikin_Event__response,  // assign(index, value) function pointer
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__resize_function__Ikin_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_members = {
  "delta_robot_serial__srv",  // message namespace
  "Ikin_Event",  // message name
  3,  // number of fields
  sizeof(delta_robot_serial__srv__Ikin_Event),
  false,  // has_any_key_member_
  delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_member_array,  // message members
  delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_type_support_handle = {
  0,
  &delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_members,
  get_message_typesupport_handle_function,
  &delta_robot_serial__srv__Ikin_Event__get_type_hash,
  &delta_robot_serial__srv__Ikin_Event__get_type_description,
  &delta_robot_serial__srv__Ikin_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delta_robot_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Event)() {
  delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Request)();
  delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Response)();
  if (!delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_type_support_handle.typesupport_identifier) {
    delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delta_robot_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "delta_robot_serial/srv/detail/ikin__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_members = {
  "delta_robot_serial__srv",  // service namespace
  "Ikin",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_Request_message_type_support_handle,
  NULL,  // response message
  // delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle
  NULL  // event_message
  // delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle
};


static rosidl_service_type_support_t delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_type_support_handle = {
  0,
  &delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_members,
  get_service_typesupport_handle_function,
  &delta_robot_serial__srv__Ikin_Request__rosidl_typesupport_introspection_c__Ikin_Request_message_type_support_handle,
  &delta_robot_serial__srv__Ikin_Response__rosidl_typesupport_introspection_c__Ikin_Response_message_type_support_handle,
  &delta_robot_serial__srv__Ikin_Event__rosidl_typesupport_introspection_c__Ikin_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delta_robot_serial,
    srv,
    Ikin
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delta_robot_serial,
    srv,
    Ikin
  ),
  &delta_robot_serial__srv__Ikin__get_type_hash,
  &delta_robot_serial__srv__Ikin__get_type_description,
  &delta_robot_serial__srv__Ikin__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delta_robot_serial
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin)(void) {
  if (!delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_type_support_handle.typesupport_identifier) {
    delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, srv, Ikin_Event)()->data;
  }

  return &delta_robot_serial__srv__detail__ikin__rosidl_typesupport_introspection_c__Ikin_service_type_support_handle;
}

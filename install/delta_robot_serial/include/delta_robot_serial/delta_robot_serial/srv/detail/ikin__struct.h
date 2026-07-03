// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/srv/ikin.h"


#ifndef DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__STRUCT_H_
#define DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Ikin in the package delta_robot_serial.
typedef struct delta_robot_serial__srv__Ikin_Request
{
  double x;
  double y;
  double z;
} delta_robot_serial__srv__Ikin_Request;

// Struct for a sequence of delta_robot_serial__srv__Ikin_Request.
typedef struct delta_robot_serial__srv__Ikin_Request__Sequence
{
  delta_robot_serial__srv__Ikin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__srv__Ikin_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Ikin in the package delta_robot_serial.
typedef struct delta_robot_serial__srv__Ikin_Response
{
  double phi_11;
  double phi_21;
  double phi_31;
} delta_robot_serial__srv__Ikin_Response;

// Struct for a sequence of delta_robot_serial__srv__Ikin_Response.
typedef struct delta_robot_serial__srv__Ikin_Response__Sequence
{
  delta_robot_serial__srv__Ikin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__srv__Ikin_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delta_robot_serial__srv__Ikin_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delta_robot_serial__srv__Ikin_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Ikin in the package delta_robot_serial.
typedef struct delta_robot_serial__srv__Ikin_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delta_robot_serial__srv__Ikin_Request__Sequence request;
  delta_robot_serial__srv__Ikin_Response__Sequence response;
} delta_robot_serial__srv__Ikin_Event;

// Struct for a sequence of delta_robot_serial__srv__Ikin_Event.
typedef struct delta_robot_serial__srv__Ikin_Event__Sequence
{
  delta_robot_serial__srv__Ikin_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__srv__Ikin_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__STRUCT_H_

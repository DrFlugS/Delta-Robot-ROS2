// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delta_robot_serial:action/PosTraj.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/action/pos_traj.h"


#ifndef DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__STRUCT_H_
#define DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_Goal
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence z;
} delta_robot_serial__action__PosTraj_Goal;

// Struct for a sequence of delta_robot_serial__action__PosTraj_Goal.
typedef struct delta_robot_serial__action__PosTraj_Goal__Sequence
{
  delta_robot_serial__action__PosTraj_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_Result
{
  double x;
  double y;
  double z;
} delta_robot_serial__action__PosTraj_Result;

// Struct for a sequence of delta_robot_serial__action__PosTraj_Result.
typedef struct delta_robot_serial__action__PosTraj_Result__Sequence
{
  delta_robot_serial__action__PosTraj_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_Feedback
{
  double x;
  double y;
  double z;
  uint32_t via_index;
} delta_robot_serial__action__PosTraj_Feedback;

// Struct for a sequence of delta_robot_serial__action__PosTraj_Feedback.
typedef struct delta_robot_serial__action__PosTraj_Feedback__Sequence
{
  delta_robot_serial__action__PosTraj_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "delta_robot_serial/action/detail/pos_traj__struct.h"

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  delta_robot_serial__action__PosTraj_Goal goal;
} delta_robot_serial__action__PosTraj_SendGoal_Request;

// Struct for a sequence of delta_robot_serial__action__PosTraj_SendGoal_Request.
typedef struct delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence
{
  delta_robot_serial__action__PosTraj_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} delta_robot_serial__action__PosTraj_SendGoal_Response;

// Struct for a sequence of delta_robot_serial__action__PosTraj_SendGoal_Response.
typedef struct delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence
{
  delta_robot_serial__action__PosTraj_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delta_robot_serial__action__PosTraj_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delta_robot_serial__action__PosTraj_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence request;
  delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence response;
} delta_robot_serial__action__PosTraj_SendGoal_Event;

// Struct for a sequence of delta_robot_serial__action__PosTraj_SendGoal_Event.
typedef struct delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence
{
  delta_robot_serial__action__PosTraj_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} delta_robot_serial__action__PosTraj_GetResult_Request;

// Struct for a sequence of delta_robot_serial__action__PosTraj_GetResult_Request.
typedef struct delta_robot_serial__action__PosTraj_GetResult_Request__Sequence
{
  delta_robot_serial__action__PosTraj_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_GetResult_Response
{
  int8_t status;
  delta_robot_serial__action__PosTraj_Result result;
} delta_robot_serial__action__PosTraj_GetResult_Response;

// Struct for a sequence of delta_robot_serial__action__PosTraj_GetResult_Response.
typedef struct delta_robot_serial__action__PosTraj_GetResult_Response__Sequence
{
  delta_robot_serial__action__PosTraj_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  delta_robot_serial__action__PosTraj_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  delta_robot_serial__action__PosTraj_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  delta_robot_serial__action__PosTraj_GetResult_Request__Sequence request;
  delta_robot_serial__action__PosTraj_GetResult_Response__Sequence response;
} delta_robot_serial__action__PosTraj_GetResult_Event;

// Struct for a sequence of delta_robot_serial__action__PosTraj_GetResult_Event.
typedef struct delta_robot_serial__action__PosTraj_GetResult_Event__Sequence
{
  delta_robot_serial__action__PosTraj_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"

/// Struct defined in action/PosTraj in the package delta_robot_serial.
typedef struct delta_robot_serial__action__PosTraj_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  delta_robot_serial__action__PosTraj_Feedback feedback;
} delta_robot_serial__action__PosTraj_FeedbackMessage;

// Struct for a sequence of delta_robot_serial__action__PosTraj_FeedbackMessage.
typedef struct delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence
{
  delta_robot_serial__action__PosTraj_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__STRUCT_H_

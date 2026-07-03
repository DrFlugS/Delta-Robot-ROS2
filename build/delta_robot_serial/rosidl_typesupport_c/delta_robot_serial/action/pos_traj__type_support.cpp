// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from delta_robot_serial:action/PosTraj.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delta_robot_serial/action/detail/pos_traj__struct.h"
#include "delta_robot_serial/action/detail/pos_traj__type_support.h"
#include "delta_robot_serial/action/detail/pos_traj__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_Goal_type_support_ids_t;

static const _PosTraj_Goal_type_support_ids_t _PosTraj_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_Goal_type_support_symbol_names_t _PosTraj_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_Goal)),
  }
};

typedef struct _PosTraj_Goal_type_support_data_t
{
  void * data[2];
} _PosTraj_Goal_type_support_data_t;

static _PosTraj_Goal_type_support_data_t _PosTraj_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_Goal_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_Goal__get_type_hash,
  &delta_robot_serial__action__PosTraj_Goal__get_type_description,
  &delta_robot_serial__action__PosTraj_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_Goal)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_Result_type_support_ids_t;

static const _PosTraj_Result_type_support_ids_t _PosTraj_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_Result_type_support_symbol_names_t _PosTraj_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_Result)),
  }
};

typedef struct _PosTraj_Result_type_support_data_t
{
  void * data[2];
} _PosTraj_Result_type_support_data_t;

static _PosTraj_Result_type_support_data_t _PosTraj_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_Result_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_Result__get_type_hash,
  &delta_robot_serial__action__PosTraj_Result__get_type_description,
  &delta_robot_serial__action__PosTraj_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_Result)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_Feedback_type_support_ids_t;

static const _PosTraj_Feedback_type_support_ids_t _PosTraj_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_Feedback_type_support_symbol_names_t _PosTraj_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_Feedback)),
  }
};

typedef struct _PosTraj_Feedback_type_support_data_t
{
  void * data[2];
} _PosTraj_Feedback_type_support_data_t;

static _PosTraj_Feedback_type_support_data_t _PosTraj_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_Feedback_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_Feedback__get_type_hash,
  &delta_robot_serial__action__PosTraj_Feedback__get_type_description,
  &delta_robot_serial__action__PosTraj_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_Feedback)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_Request_type_support_ids_t;

static const _PosTraj_SendGoal_Request_type_support_ids_t _PosTraj_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_SendGoal_Request_type_support_symbol_names_t _PosTraj_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_SendGoal_Request)),
  }
};

typedef struct _PosTraj_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PosTraj_SendGoal_Request_type_support_data_t;

static _PosTraj_SendGoal_Request_type_support_data_t _PosTraj_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_SendGoal_Request_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_SendGoal_Request__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal_Request__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_SendGoal_Request)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_Response_type_support_ids_t;

static const _PosTraj_SendGoal_Response_type_support_ids_t _PosTraj_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_SendGoal_Response_type_support_symbol_names_t _PosTraj_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_SendGoal_Response)),
  }
};

typedef struct _PosTraj_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PosTraj_SendGoal_Response_type_support_data_t;

static _PosTraj_SendGoal_Response_type_support_data_t _PosTraj_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_SendGoal_Response_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_SendGoal_Response__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal_Response__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_SendGoal_Response)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_Event_type_support_ids_t;

static const _PosTraj_SendGoal_Event_type_support_ids_t _PosTraj_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_SendGoal_Event_type_support_symbol_names_t _PosTraj_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_SendGoal_Event)),
  }
};

typedef struct _PosTraj_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _PosTraj_SendGoal_Event_type_support_data_t;

static _PosTraj_SendGoal_Event_type_support_data_t _PosTraj_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_SendGoal_Event_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_SendGoal_Event__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal_Event__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_SendGoal_Event)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _PosTraj_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_type_support_ids_t;

static const _PosTraj_SendGoal_type_support_ids_t _PosTraj_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_SendGoal_type_support_symbol_names_t _PosTraj_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_SendGoal)),
  }
};

typedef struct _PosTraj_SendGoal_type_support_data_t
{
  void * data[2];
} _PosTraj_SendGoal_type_support_data_t;

static _PosTraj_SendGoal_type_support_data_t _PosTraj_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_SendGoal_service_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PosTraj_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PosTraj_SendGoal_Request_message_type_support_handle,
  &PosTraj_SendGoal_Response_message_type_support_handle,
  &PosTraj_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delta_robot_serial,
    action,
    PosTraj_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delta_robot_serial,
    action,
    PosTraj_SendGoal
  ),
  &delta_robot_serial__action__PosTraj_SendGoal__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_SendGoal)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_Request_type_support_ids_t;

static const _PosTraj_GetResult_Request_type_support_ids_t _PosTraj_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_GetResult_Request_type_support_symbol_names_t _PosTraj_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_GetResult_Request)),
  }
};

typedef struct _PosTraj_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PosTraj_GetResult_Request_type_support_data_t;

static _PosTraj_GetResult_Request_type_support_data_t _PosTraj_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_GetResult_Request_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_GetResult_Request__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult_Request__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_GetResult_Request)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_Response_type_support_ids_t;

static const _PosTraj_GetResult_Response_type_support_ids_t _PosTraj_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_GetResult_Response_type_support_symbol_names_t _PosTraj_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_GetResult_Response)),
  }
};

typedef struct _PosTraj_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PosTraj_GetResult_Response_type_support_data_t;

static _PosTraj_GetResult_Response_type_support_data_t _PosTraj_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_GetResult_Response_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_GetResult_Response__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult_Response__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_GetResult_Response)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_Event_type_support_ids_t;

static const _PosTraj_GetResult_Event_type_support_ids_t _PosTraj_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_GetResult_Event_type_support_symbol_names_t _PosTraj_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_GetResult_Event)),
  }
};

typedef struct _PosTraj_GetResult_Event_type_support_data_t
{
  void * data[2];
} _PosTraj_GetResult_Event_type_support_data_t;

static _PosTraj_GetResult_Event_type_support_data_t _PosTraj_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_GetResult_Event_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_GetResult_Event__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult_Event__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_GetResult_Event)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _PosTraj_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_type_support_ids_t;

static const _PosTraj_GetResult_type_support_ids_t _PosTraj_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_GetResult_type_support_symbol_names_t _PosTraj_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_GetResult)),
  }
};

typedef struct _PosTraj_GetResult_type_support_data_t
{
  void * data[2];
} _PosTraj_GetResult_type_support_data_t;

static _PosTraj_GetResult_type_support_data_t _PosTraj_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_GetResult_service_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PosTraj_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PosTraj_GetResult_Request_message_type_support_handle,
  &PosTraj_GetResult_Response_message_type_support_handle,
  &PosTraj_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delta_robot_serial,
    action,
    PosTraj_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    delta_robot_serial,
    action,
    PosTraj_GetResult
  ),
  &delta_robot_serial__action__PosTraj_GetResult__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_GetResult)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosTraj_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_FeedbackMessage_type_support_ids_t;

static const _PosTraj_FeedbackMessage_type_support_ids_t _PosTraj_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosTraj_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosTraj_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosTraj_FeedbackMessage_type_support_symbol_names_t _PosTraj_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delta_robot_serial, action, PosTraj_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delta_robot_serial, action, PosTraj_FeedbackMessage)),
  }
};

typedef struct _PosTraj_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PosTraj_FeedbackMessage_type_support_data_t;

static _PosTraj_FeedbackMessage_type_support_data_t _PosTraj_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosTraj_FeedbackMessage_message_typesupport_map = {
  2,
  "delta_robot_serial",
  &_PosTraj_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PosTraj_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PosTraj_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosTraj_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_FeedbackMessage__get_type_hash,
  &delta_robot_serial__action__PosTraj_FeedbackMessage__get_type_description,
  &delta_robot_serial__action__PosTraj_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace delta_robot_serial

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, delta_robot_serial, action, PosTraj_FeedbackMessage)() {
  return &::delta_robot_serial::action::rosidl_typesupport_c::PosTraj_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "delta_robot_serial/action/pos_traj.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__type_support.h"

static rosidl_action_type_support_t _delta_robot_serial__action__PosTraj__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &delta_robot_serial__action__PosTraj__get_type_hash,
  &delta_robot_serial__action__PosTraj__get_type_description,
  &delta_robot_serial__action__PosTraj__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, delta_robot_serial, action, PosTraj)()
{
  // Thread-safe by always writing the same values to the static struct
  _delta_robot_serial__action__PosTraj__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, delta_robot_serial, action, PosTraj_SendGoal)();
  _delta_robot_serial__action__PosTraj__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, delta_robot_serial, action, PosTraj_GetResult)();
  _delta_robot_serial__action__PosTraj__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _delta_robot_serial__action__PosTraj__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, delta_robot_serial, action, PosTraj_FeedbackMessage)();
  _delta_robot_serial__action__PosTraj__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_delta_robot_serial__action__PosTraj__typesupport_c;
}

#ifdef __cplusplus
}
#endif

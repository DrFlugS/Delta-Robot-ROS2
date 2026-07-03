// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from delta_robot_serial:action/PosTraj.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "delta_robot_serial/action/detail/pos_traj__functions.h"
#include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_Goal_type_support_ids_t;

static const _PosTraj_Goal_type_support_ids_t _PosTraj_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_Goal__get_type_hash,
  &delta_robot_serial__action__PosTraj_Goal__get_type_description,
  &delta_robot_serial__action__PosTraj_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_Goal>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_Goal)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_Result_type_support_ids_t;

static const _PosTraj_Result_type_support_ids_t _PosTraj_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_Result__get_type_hash,
  &delta_robot_serial__action__PosTraj_Result__get_type_description,
  &delta_robot_serial__action__PosTraj_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_Result>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_Result)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_Feedback_type_support_ids_t;

static const _PosTraj_Feedback_type_support_ids_t _PosTraj_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_Feedback__get_type_hash,
  &delta_robot_serial__action__PosTraj_Feedback__get_type_description,
  &delta_robot_serial__action__PosTraj_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_Feedback>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_Feedback)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_Request_type_support_ids_t;

static const _PosTraj_SendGoal_Request_type_support_ids_t _PosTraj_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_SendGoal_Request__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal_Request__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Request>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_SendGoal_Request)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_Response_type_support_ids_t;

static const _PosTraj_SendGoal_Response_type_support_ids_t _PosTraj_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_SendGoal_Response__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal_Response__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Response>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_SendGoal_Response)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_Event_type_support_ids_t;

static const _PosTraj_SendGoal_Event_type_support_ids_t _PosTraj_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_SendGoal_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_SendGoal_Event__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal_Event__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Event>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_SendGoal_Event)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_SendGoal_type_support_ids_t;

static const _PosTraj_SendGoal_type_support_ids_t _PosTraj_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<delta_robot_serial::action::PosTraj_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<delta_robot_serial::action::PosTraj_SendGoal>,
  &delta_robot_serial__action__PosTraj_SendGoal__get_type_hash,
  &delta_robot_serial__action__PosTraj_SendGoal__get_type_description,
  &delta_robot_serial__action__PosTraj_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<delta_robot_serial::action::PosTraj_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_Request_type_support_ids_t;

static const _PosTraj_GetResult_Request_type_support_ids_t _PosTraj_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_GetResult_Request__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult_Request__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Request>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_GetResult_Request)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_Response_type_support_ids_t;

static const _PosTraj_GetResult_Response_type_support_ids_t _PosTraj_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_GetResult_Response__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult_Response__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Response>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_GetResult_Response)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_Event_type_support_ids_t;

static const _PosTraj_GetResult_Event_type_support_ids_t _PosTraj_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_GetResult_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_GetResult_Event__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult_Event__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Event>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_GetResult_Event)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_GetResult_type_support_ids_t;

static const _PosTraj_GetResult_type_support_ids_t _PosTraj_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<delta_robot_serial::action::PosTraj_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<delta_robot_serial::action::PosTraj_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<delta_robot_serial::action::PosTraj_GetResult>,
  &delta_robot_serial__action__PosTraj_GetResult__get_type_hash,
  &delta_robot_serial__action__PosTraj_GetResult__get_type_description,
  &delta_robot_serial__action__PosTraj_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<delta_robot_serial::action::PosTraj_GetResult>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<delta_robot_serial::action::PosTraj_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PosTraj_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosTraj_FeedbackMessage_type_support_ids_t;

static const _PosTraj_FeedbackMessage_type_support_ids_t _PosTraj_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delta_robot_serial, action, PosTraj_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delta_robot_serial, action, PosTraj_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosTraj_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &delta_robot_serial__action__PosTraj_FeedbackMessage__get_type_hash,
  &delta_robot_serial__action__PosTraj_FeedbackMessage__get_type_description,
  &delta_robot_serial__action__PosTraj_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delta_robot_serial::action::PosTraj_FeedbackMessage>()
{
  return &::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj_FeedbackMessage)() {
  return get_message_type_support_handle<delta_robot_serial::action::PosTraj_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace delta_robot_serial
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PosTraj_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &delta_robot_serial__action__PosTraj__get_type_hash,
  &delta_robot_serial__action__PosTraj__get_type_description,
  &delta_robot_serial__action__PosTraj__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<delta_robot_serial::action::PosTraj>()
{
  using ::delta_robot_serial::action::rosidl_typesupport_cpp::PosTraj_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PosTraj_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::delta_robot_serial::action::PosTraj::Impl::SendGoalService>();
  PosTraj_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::delta_robot_serial::action::PosTraj::Impl::GetResultService>();
  PosTraj_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::delta_robot_serial::action::PosTraj::Impl::CancelGoalService>();
  PosTraj_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::delta_robot_serial::action::PosTraj::Impl::FeedbackMessage>();
  PosTraj_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::delta_robot_serial::action::PosTraj::Impl::GoalStatusMessage>();
  return &PosTraj_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, delta_robot_serial, action, PosTraj)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<delta_robot_serial::action::PosTraj>();
}

#ifdef __cplusplus
}
#endif

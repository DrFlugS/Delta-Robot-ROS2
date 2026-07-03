// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delta_robot_serial:action/PosTraj.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/action/pos_traj.hpp"


#ifndef DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__TRAITS_HPP_
#define DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z
  {
    if (msg.z.size() == 0) {
      out << "z: []";
    } else {
      out << "z: [";
      size_t pending_items = msg.z.size();
      for (auto item : msg.z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_Goal & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_Goal>()
{
  return "delta_robot_serial::action::PosTraj_Goal";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_Goal>()
{
  return "delta_robot_serial/action/PosTraj_Goal";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_Result & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_Result>()
{
  return "delta_robot_serial::action::PosTraj_Result";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_Result>()
{
  return "delta_robot_serial/action/PosTraj_Result";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: via_index
  {
    out << "via_index: ";
    rosidl_generator_traits::value_to_yaml(msg.via_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: via_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "via_index: ";
    rosidl_generator_traits::value_to_yaml(msg.via_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_Feedback & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_Feedback>()
{
  return "delta_robot_serial::action::PosTraj_Feedback";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_Feedback>()
{
  return "delta_robot_serial/action/PosTraj_Feedback";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "delta_robot_serial/action/detail/pos_traj__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_SendGoal_Request & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_SendGoal_Request>()
{
  return "delta_robot_serial::action::PosTraj_SendGoal_Request";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_SendGoal_Request>()
{
  return "delta_robot_serial/action/PosTraj_SendGoal_Request";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<delta_robot_serial::action::PosTraj_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<delta_robot_serial::action::PosTraj_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_SendGoal_Response & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_SendGoal_Response>()
{
  return "delta_robot_serial::action::PosTraj_SendGoal_Response";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_SendGoal_Response>()
{
  return "delta_robot_serial/action/PosTraj_SendGoal_Response";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_SendGoal_Event & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_SendGoal_Event>()
{
  return "delta_robot_serial::action::PosTraj_SendGoal_Event";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_SendGoal_Event>()
{
  return "delta_robot_serial/action/PosTraj_SendGoal_Event";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Request>::value && has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_SendGoal>()
{
  return "delta_robot_serial::action::PosTraj_SendGoal";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_SendGoal>()
{
  return "delta_robot_serial/action/PosTraj_SendGoal";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<delta_robot_serial::action::PosTraj_SendGoal_Request>::value &&
    has_fixed_size<delta_robot_serial::action::PosTraj_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Request>::value &&
    has_bounded_size<delta_robot_serial::action::PosTraj_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<delta_robot_serial::action::PosTraj_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<delta_robot_serial::action::PosTraj_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<delta_robot_serial::action::PosTraj_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_GetResult_Request & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_GetResult_Request>()
{
  return "delta_robot_serial::action::PosTraj_GetResult_Request";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_GetResult_Request>()
{
  return "delta_robot_serial/action/PosTraj_GetResult_Request";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_GetResult_Response & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_GetResult_Response>()
{
  return "delta_robot_serial::action::PosTraj_GetResult_Response";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_GetResult_Response>()
{
  return "delta_robot_serial/action/PosTraj_GetResult_Response";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<delta_robot_serial::action::PosTraj_Result>::value> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<delta_robot_serial::action::PosTraj_Result>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_GetResult_Event & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_GetResult_Event>()
{
  return "delta_robot_serial::action::PosTraj_GetResult_Event";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_GetResult_Event>()
{
  return "delta_robot_serial/action/PosTraj_GetResult_Event";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Request>::value && has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_GetResult>()
{
  return "delta_robot_serial::action::PosTraj_GetResult";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_GetResult>()
{
  return "delta_robot_serial/action/PosTraj_GetResult";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<delta_robot_serial::action::PosTraj_GetResult_Request>::value &&
    has_fixed_size<delta_robot_serial::action::PosTraj_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Request>::value &&
    has_bounded_size<delta_robot_serial::action::PosTraj_GetResult_Response>::value
  >
{
};

template<>
struct is_service<delta_robot_serial::action::PosTraj_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<delta_robot_serial::action::PosTraj_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<delta_robot_serial::action::PosTraj_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__traits.hpp"

namespace delta_robot_serial
{

namespace action
{

inline void to_flow_style_yaml(
  const PosTraj_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosTraj_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosTraj_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::action::PosTraj_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::action::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::action::PosTraj_FeedbackMessage & msg)
{
  return delta_robot_serial::action::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::action::PosTraj_FeedbackMessage>()
{
  return "delta_robot_serial::action::PosTraj_FeedbackMessage";
}

template<>
inline const char * name<delta_robot_serial::action::PosTraj_FeedbackMessage>()
{
  return "delta_robot_serial/action/PosTraj_FeedbackMessage";
}

template<>
struct has_fixed_size<delta_robot_serial::action::PosTraj_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<delta_robot_serial::action::PosTraj_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<delta_robot_serial::action::PosTraj_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<delta_robot_serial::action::PosTraj_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<delta_robot_serial::action::PosTraj_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<delta_robot_serial::action::PosTraj>
  : std::true_type
{
};

template<>
struct is_action_goal<delta_robot_serial::action::PosTraj_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<delta_robot_serial::action::PosTraj_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<delta_robot_serial::action::PosTraj_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__TRAITS_HPP_

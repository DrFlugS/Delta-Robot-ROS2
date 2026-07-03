// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/srv/ikin.hpp"


#ifndef DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__TRAITS_HPP_
#define DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delta_robot_serial/srv/detail/ikin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace delta_robot_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ikin_Request & msg,
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
  const Ikin_Request & msg,
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

inline std::string to_yaml(const Ikin_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::srv::Ikin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::srv::Ikin_Request & msg)
{
  return delta_robot_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::srv::Ikin_Request>()
{
  return "delta_robot_serial::srv::Ikin_Request";
}

template<>
inline const char * name<delta_robot_serial::srv::Ikin_Request>()
{
  return "delta_robot_serial/srv/Ikin_Request";
}

template<>
struct has_fixed_size<delta_robot_serial::srv::Ikin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delta_robot_serial::srv::Ikin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delta_robot_serial::srv::Ikin_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace delta_robot_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ikin_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: phi_11
  {
    out << "phi_11: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_11, out);
    out << ", ";
  }

  // member: phi_21
  {
    out << "phi_21: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_21, out);
    out << ", ";
  }

  // member: phi_31
  {
    out << "phi_31: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_31, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ikin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: phi_11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_11: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_11, out);
    out << "\n";
  }

  // member: phi_21
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_21: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_21, out);
    out << "\n";
  }

  // member: phi_31
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_31: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_31, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ikin_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::srv::Ikin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::srv::Ikin_Response & msg)
{
  return delta_robot_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::srv::Ikin_Response>()
{
  return "delta_robot_serial::srv::Ikin_Response";
}

template<>
inline const char * name<delta_robot_serial::srv::Ikin_Response>()
{
  return "delta_robot_serial/srv/Ikin_Response";
}

template<>
struct has_fixed_size<delta_robot_serial::srv::Ikin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delta_robot_serial::srv::Ikin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delta_robot_serial::srv::Ikin_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace delta_robot_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const Ikin_Event & msg,
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
  const Ikin_Event & msg,
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

inline std::string to_yaml(const Ikin_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace delta_robot_serial

namespace rosidl_generator_traits
{

[[deprecated("use delta_robot_serial::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delta_robot_serial::srv::Ikin_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  delta_robot_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delta_robot_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const delta_robot_serial::srv::Ikin_Event & msg)
{
  return delta_robot_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<delta_robot_serial::srv::Ikin_Event>()
{
  return "delta_robot_serial::srv::Ikin_Event";
}

template<>
inline const char * name<delta_robot_serial::srv::Ikin_Event>()
{
  return "delta_robot_serial/srv/Ikin_Event";
}

template<>
struct has_fixed_size<delta_robot_serial::srv::Ikin_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delta_robot_serial::srv::Ikin_Event>
  : std::integral_constant<bool, has_bounded_size<delta_robot_serial::srv::Ikin_Request>::value && has_bounded_size<delta_robot_serial::srv::Ikin_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<delta_robot_serial::srv::Ikin_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<delta_robot_serial::srv::Ikin>()
{
  return "delta_robot_serial::srv::Ikin";
}

template<>
inline const char * name<delta_robot_serial::srv::Ikin>()
{
  return "delta_robot_serial/srv/Ikin";
}

template<>
struct has_fixed_size<delta_robot_serial::srv::Ikin>
  : std::integral_constant<
    bool,
    has_fixed_size<delta_robot_serial::srv::Ikin_Request>::value &&
    has_fixed_size<delta_robot_serial::srv::Ikin_Response>::value
  >
{
};

template<>
struct has_bounded_size<delta_robot_serial::srv::Ikin>
  : std::integral_constant<
    bool,
    has_bounded_size<delta_robot_serial::srv::Ikin_Request>::value &&
    has_bounded_size<delta_robot_serial::srv::Ikin_Response>::value
  >
{
};

template<>
struct is_service<delta_robot_serial::srv::Ikin>
  : std::true_type
{
};

template<>
struct is_service_request<delta_robot_serial::srv::Ikin_Request>
  : std::true_type
{
};

template<>
struct is_service_response<delta_robot_serial::srv::Ikin_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__TRAITS_HPP_

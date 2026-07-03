// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/srv/ikin.hpp"


#ifndef DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__BUILDER_HPP_
#define DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delta_robot_serial/srv/detail/ikin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delta_robot_serial
{

namespace srv
{

namespace builder
{

class Init_Ikin_Request_z
{
public:
  explicit Init_Ikin_Request_z(::delta_robot_serial::srv::Ikin_Request & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::srv::Ikin_Request z(::delta_robot_serial::srv::Ikin_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Request msg_;
};

class Init_Ikin_Request_y
{
public:
  explicit Init_Ikin_Request_y(::delta_robot_serial::srv::Ikin_Request & msg)
  : msg_(msg)
  {}
  Init_Ikin_Request_z y(::delta_robot_serial::srv::Ikin_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Ikin_Request_z(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Request msg_;
};

class Init_Ikin_Request_x
{
public:
  Init_Ikin_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ikin_Request_y x(::delta_robot_serial::srv::Ikin_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Ikin_Request_y(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::srv::Ikin_Request>()
{
  return delta_robot_serial::srv::builder::Init_Ikin_Request_x();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace srv
{

namespace builder
{

class Init_Ikin_Response_phi_31
{
public:
  explicit Init_Ikin_Response_phi_31(::delta_robot_serial::srv::Ikin_Response & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::srv::Ikin_Response phi_31(::delta_robot_serial::srv::Ikin_Response::_phi_31_type arg)
  {
    msg_.phi_31 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Response msg_;
};

class Init_Ikin_Response_phi_21
{
public:
  explicit Init_Ikin_Response_phi_21(::delta_robot_serial::srv::Ikin_Response & msg)
  : msg_(msg)
  {}
  Init_Ikin_Response_phi_31 phi_21(::delta_robot_serial::srv::Ikin_Response::_phi_21_type arg)
  {
    msg_.phi_21 = std::move(arg);
    return Init_Ikin_Response_phi_31(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Response msg_;
};

class Init_Ikin_Response_phi_11
{
public:
  Init_Ikin_Response_phi_11()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ikin_Response_phi_21 phi_11(::delta_robot_serial::srv::Ikin_Response::_phi_11_type arg)
  {
    msg_.phi_11 = std::move(arg);
    return Init_Ikin_Response_phi_21(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::srv::Ikin_Response>()
{
  return delta_robot_serial::srv::builder::Init_Ikin_Response_phi_11();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace srv
{

namespace builder
{

class Init_Ikin_Event_response
{
public:
  explicit Init_Ikin_Event_response(::delta_robot_serial::srv::Ikin_Event & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::srv::Ikin_Event response(::delta_robot_serial::srv::Ikin_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Event msg_;
};

class Init_Ikin_Event_request
{
public:
  explicit Init_Ikin_Event_request(::delta_robot_serial::srv::Ikin_Event & msg)
  : msg_(msg)
  {}
  Init_Ikin_Event_response request(::delta_robot_serial::srv::Ikin_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Ikin_Event_response(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Event msg_;
};

class Init_Ikin_Event_info
{
public:
  Init_Ikin_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ikin_Event_request info(::delta_robot_serial::srv::Ikin_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Ikin_Event_request(msg_);
  }

private:
  ::delta_robot_serial::srv::Ikin_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::srv::Ikin_Event>()
{
  return delta_robot_serial::srv::builder::Init_Ikin_Event_info();
}

}  // namespace delta_robot_serial

#endif  // DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__BUILDER_HPP_

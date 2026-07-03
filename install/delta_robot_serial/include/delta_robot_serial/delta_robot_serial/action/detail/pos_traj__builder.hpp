// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delta_robot_serial:action/PosTraj.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/action/pos_traj.hpp"


#ifndef DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__BUILDER_HPP_
#define DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delta_robot_serial/action/detail/pos_traj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_Goal_z
{
public:
  explicit Init_PosTraj_Goal_z(::delta_robot_serial::action::PosTraj_Goal & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_Goal z(::delta_robot_serial::action::PosTraj_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Goal msg_;
};

class Init_PosTraj_Goal_y
{
public:
  explicit Init_PosTraj_Goal_y(::delta_robot_serial::action::PosTraj_Goal & msg)
  : msg_(msg)
  {}
  Init_PosTraj_Goal_z y(::delta_robot_serial::action::PosTraj_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosTraj_Goal_z(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Goal msg_;
};

class Init_PosTraj_Goal_x
{
public:
  Init_PosTraj_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_Goal_y x(::delta_robot_serial::action::PosTraj_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosTraj_Goal_y(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_Goal>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_Goal_x();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_Result_z
{
public:
  explicit Init_PosTraj_Result_z(::delta_robot_serial::action::PosTraj_Result & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_Result z(::delta_robot_serial::action::PosTraj_Result::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Result msg_;
};

class Init_PosTraj_Result_y
{
public:
  explicit Init_PosTraj_Result_y(::delta_robot_serial::action::PosTraj_Result & msg)
  : msg_(msg)
  {}
  Init_PosTraj_Result_z y(::delta_robot_serial::action::PosTraj_Result::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosTraj_Result_z(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Result msg_;
};

class Init_PosTraj_Result_x
{
public:
  Init_PosTraj_Result_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_Result_y x(::delta_robot_serial::action::PosTraj_Result::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosTraj_Result_y(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_Result>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_Result_x();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_Feedback_via_index
{
public:
  explicit Init_PosTraj_Feedback_via_index(::delta_robot_serial::action::PosTraj_Feedback & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_Feedback via_index(::delta_robot_serial::action::PosTraj_Feedback::_via_index_type arg)
  {
    msg_.via_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Feedback msg_;
};

class Init_PosTraj_Feedback_z
{
public:
  explicit Init_PosTraj_Feedback_z(::delta_robot_serial::action::PosTraj_Feedback & msg)
  : msg_(msg)
  {}
  Init_PosTraj_Feedback_via_index z(::delta_robot_serial::action::PosTraj_Feedback::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PosTraj_Feedback_via_index(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Feedback msg_;
};

class Init_PosTraj_Feedback_y
{
public:
  explicit Init_PosTraj_Feedback_y(::delta_robot_serial::action::PosTraj_Feedback & msg)
  : msg_(msg)
  {}
  Init_PosTraj_Feedback_z y(::delta_robot_serial::action::PosTraj_Feedback::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosTraj_Feedback_z(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Feedback msg_;
};

class Init_PosTraj_Feedback_x
{
public:
  Init_PosTraj_Feedback_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_Feedback_y x(::delta_robot_serial::action::PosTraj_Feedback::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosTraj_Feedback_y(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_Feedback>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_Feedback_x();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_SendGoal_Request_goal
{
public:
  explicit Init_PosTraj_SendGoal_Request_goal(::delta_robot_serial::action::PosTraj_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_SendGoal_Request goal(::delta_robot_serial::action::PosTraj_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Request msg_;
};

class Init_PosTraj_SendGoal_Request_goal_id
{
public:
  Init_PosTraj_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_SendGoal_Request_goal goal_id(::delta_robot_serial::action::PosTraj_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PosTraj_SendGoal_Request_goal(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_SendGoal_Request>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_SendGoal_Request_goal_id();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_SendGoal_Response_stamp
{
public:
  explicit Init_PosTraj_SendGoal_Response_stamp(::delta_robot_serial::action::PosTraj_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_SendGoal_Response stamp(::delta_robot_serial::action::PosTraj_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Response msg_;
};

class Init_PosTraj_SendGoal_Response_accepted
{
public:
  Init_PosTraj_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_SendGoal_Response_stamp accepted(::delta_robot_serial::action::PosTraj_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PosTraj_SendGoal_Response_stamp(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_SendGoal_Response>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_SendGoal_Response_accepted();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_SendGoal_Event_response
{
public:
  explicit Init_PosTraj_SendGoal_Event_response(::delta_robot_serial::action::PosTraj_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_SendGoal_Event response(::delta_robot_serial::action::PosTraj_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Event msg_;
};

class Init_PosTraj_SendGoal_Event_request
{
public:
  explicit Init_PosTraj_SendGoal_Event_request(::delta_robot_serial::action::PosTraj_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PosTraj_SendGoal_Event_response request(::delta_robot_serial::action::PosTraj_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PosTraj_SendGoal_Event_response(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Event msg_;
};

class Init_PosTraj_SendGoal_Event_info
{
public:
  Init_PosTraj_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_SendGoal_Event_request info(::delta_robot_serial::action::PosTraj_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PosTraj_SendGoal_Event_request(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_SendGoal_Event>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_SendGoal_Event_info();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_GetResult_Request_goal_id
{
public:
  Init_PosTraj_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::delta_robot_serial::action::PosTraj_GetResult_Request goal_id(::delta_robot_serial::action::PosTraj_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_GetResult_Request>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_GetResult_Request_goal_id();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_GetResult_Response_result
{
public:
  explicit Init_PosTraj_GetResult_Response_result(::delta_robot_serial::action::PosTraj_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_GetResult_Response result(::delta_robot_serial::action::PosTraj_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_GetResult_Response msg_;
};

class Init_PosTraj_GetResult_Response_status
{
public:
  Init_PosTraj_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_GetResult_Response_result status(::delta_robot_serial::action::PosTraj_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PosTraj_GetResult_Response_result(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_GetResult_Response>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_GetResult_Response_status();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_GetResult_Event_response
{
public:
  explicit Init_PosTraj_GetResult_Event_response(::delta_robot_serial::action::PosTraj_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_GetResult_Event response(::delta_robot_serial::action::PosTraj_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_GetResult_Event msg_;
};

class Init_PosTraj_GetResult_Event_request
{
public:
  explicit Init_PosTraj_GetResult_Event_request(::delta_robot_serial::action::PosTraj_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PosTraj_GetResult_Event_response request(::delta_robot_serial::action::PosTraj_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PosTraj_GetResult_Event_response(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_GetResult_Event msg_;
};

class Init_PosTraj_GetResult_Event_info
{
public:
  Init_PosTraj_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_GetResult_Event_request info(::delta_robot_serial::action::PosTraj_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PosTraj_GetResult_Event_request(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_GetResult_Event>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_GetResult_Event_info();
}

}  // namespace delta_robot_serial


namespace delta_robot_serial
{

namespace action
{

namespace builder
{

class Init_PosTraj_FeedbackMessage_feedback
{
public:
  explicit Init_PosTraj_FeedbackMessage_feedback(::delta_robot_serial::action::PosTraj_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::delta_robot_serial::action::PosTraj_FeedbackMessage feedback(::delta_robot_serial::action::PosTraj_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_FeedbackMessage msg_;
};

class Init_PosTraj_FeedbackMessage_goal_id
{
public:
  Init_PosTraj_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosTraj_FeedbackMessage_feedback goal_id(::delta_robot_serial::action::PosTraj_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PosTraj_FeedbackMessage_feedback(msg_);
  }

private:
  ::delta_robot_serial::action::PosTraj_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::delta_robot_serial::action::PosTraj_FeedbackMessage>()
{
  return delta_robot_serial::action::builder::Init_PosTraj_FeedbackMessage_goal_id();
}

}  // namespace delta_robot_serial

#endif  // DELTA_ROBOT_SERIAL__ACTION__DETAIL__POS_TRAJ__BUILDER_HPP_

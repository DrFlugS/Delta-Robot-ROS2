// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "delta_robot_serial/srv/ikin.hpp"


#ifndef DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__STRUCT_HPP_
#define DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__delta_robot_serial__srv__Ikin_Request __attribute__((deprecated))
#else
# define DEPRECATED__delta_robot_serial__srv__Ikin_Request __declspec(deprecated)
#endif

namespace delta_robot_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ikin_Request_
{
  using Type = Ikin_Request_<ContainerAllocator>;

  explicit Ikin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit Ikin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delta_robot_serial::srv::Ikin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const delta_robot_serial::srv::Ikin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delta_robot_serial__srv__Ikin_Request
    std::shared_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delta_robot_serial__srv__Ikin_Request
    std::shared_ptr<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ikin_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ikin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ikin_Request_

// alias to use template instance with default allocator
using Ikin_Request =
  delta_robot_serial::srv::Ikin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace delta_robot_serial


#ifndef _WIN32
# define DEPRECATED__delta_robot_serial__srv__Ikin_Response __attribute__((deprecated))
#else
# define DEPRECATED__delta_robot_serial__srv__Ikin_Response __declspec(deprecated)
#endif

namespace delta_robot_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ikin_Response_
{
  using Type = Ikin_Response_<ContainerAllocator>;

  explicit Ikin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->phi_11 = 0.0;
      this->phi_21 = 0.0;
      this->phi_31 = 0.0;
    }
  }

  explicit Ikin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->phi_11 = 0.0;
      this->phi_21 = 0.0;
      this->phi_31 = 0.0;
    }
  }

  // field types and members
  using _phi_11_type =
    double;
  _phi_11_type phi_11;
  using _phi_21_type =
    double;
  _phi_21_type phi_21;
  using _phi_31_type =
    double;
  _phi_31_type phi_31;

  // setters for named parameter idiom
  Type & set__phi_11(
    const double & _arg)
  {
    this->phi_11 = _arg;
    return *this;
  }
  Type & set__phi_21(
    const double & _arg)
  {
    this->phi_21 = _arg;
    return *this;
  }
  Type & set__phi_31(
    const double & _arg)
  {
    this->phi_31 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delta_robot_serial::srv::Ikin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const delta_robot_serial::srv::Ikin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delta_robot_serial__srv__Ikin_Response
    std::shared_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delta_robot_serial__srv__Ikin_Response
    std::shared_ptr<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ikin_Response_ & other) const
  {
    if (this->phi_11 != other.phi_11) {
      return false;
    }
    if (this->phi_21 != other.phi_21) {
      return false;
    }
    if (this->phi_31 != other.phi_31) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ikin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ikin_Response_

// alias to use template instance with default allocator
using Ikin_Response =
  delta_robot_serial::srv::Ikin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace delta_robot_serial


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delta_robot_serial__srv__Ikin_Event __attribute__((deprecated))
#else
# define DEPRECATED__delta_robot_serial__srv__Ikin_Event __declspec(deprecated)
#endif

namespace delta_robot_serial
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Ikin_Event_
{
  using Type = Ikin_Event_<ContainerAllocator>;

  explicit Ikin_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Ikin_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delta_robot_serial::srv::Ikin_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<delta_robot_serial::srv::Ikin_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delta_robot_serial::srv::Ikin_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const delta_robot_serial::srv::Ikin_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delta_robot_serial::srv::Ikin_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delta_robot_serial::srv::Ikin_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delta_robot_serial__srv__Ikin_Event
    std::shared_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delta_robot_serial__srv__Ikin_Event
    std::shared_ptr<delta_robot_serial::srv::Ikin_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ikin_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ikin_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ikin_Event_

// alias to use template instance with default allocator
using Ikin_Event =
  delta_robot_serial::srv::Ikin_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace delta_robot_serial

namespace delta_robot_serial
{

namespace srv
{

struct Ikin
{
  using Request = delta_robot_serial::srv::Ikin_Request;
  using Response = delta_robot_serial::srv::Ikin_Response;
  using Event = delta_robot_serial::srv::Ikin_Event;
};

}  // namespace srv

}  // namespace delta_robot_serial

#endif  // DELTA_ROBOT_SERIAL__SRV__DETAIL__IKIN__STRUCT_HPP_

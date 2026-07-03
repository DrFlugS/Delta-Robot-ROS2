#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__srv__Ikin_Request() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__srv__Ikin_Request__init(msg: *mut Ikin_Request) -> bool;
    fn delta_robot_serial__srv__Ikin_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ikin_Request>, size: usize) -> bool;
    fn delta_robot_serial__srv__Ikin_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ikin_Request>);
    fn delta_robot_serial__srv__Ikin_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ikin_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Ikin_Request>) -> bool;
}

// Corresponds to delta_robot_serial__srv__Ikin_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ikin_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,

}



impl Default for Ikin_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__srv__Ikin_Request__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__srv__Ikin_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ikin_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__srv__Ikin_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__srv__Ikin_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__srv__Ikin_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ikin_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ikin_Request where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/srv/Ikin_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__srv__Ikin_Request() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__srv__Ikin_Response() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__srv__Ikin_Response__init(msg: *mut Ikin_Response) -> bool;
    fn delta_robot_serial__srv__Ikin_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ikin_Response>, size: usize) -> bool;
    fn delta_robot_serial__srv__Ikin_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ikin_Response>);
    fn delta_robot_serial__srv__Ikin_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ikin_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Ikin_Response>) -> bool;
}

// Corresponds to delta_robot_serial__srv__Ikin_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ikin_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phi_11: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub phi_21: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub phi_31: f64,

}



impl Default for Ikin_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__srv__Ikin_Response__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__srv__Ikin_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ikin_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__srv__Ikin_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__srv__Ikin_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__srv__Ikin_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ikin_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ikin_Response where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/srv/Ikin_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__srv__Ikin_Response() }
  }
}






#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__delta_robot_serial__srv__Ikin() -> *const std::ffi::c_void;
}

// Corresponds to delta_robot_serial__srv__Ikin
#[allow(missing_docs, non_camel_case_types)]
pub struct Ikin;

impl rosidl_runtime_rs::Service for Ikin {
    type Request = Ikin_Request;
    type Response = Ikin_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__delta_robot_serial__srv__Ikin() }
    }
}



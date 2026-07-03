
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_Goal() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_Goal__init(msg: *mut PosTraj_Goal) -> bool;
    fn delta_robot_serial__action__PosTraj_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Goal>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Goal>);
    fn delta_robot_serial__action__PosTraj_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Goal>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for PosTraj_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_Goal__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_Goal() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_Result() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_Result__init(msg: *mut PosTraj_Result) -> bool;
    fn delta_robot_serial__action__PosTraj_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Result>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Result>);
    fn delta_robot_serial__action__PosTraj_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Result>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_Result {

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



impl Default for PosTraj_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_Result__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_Result where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_Result() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_Feedback__init(msg: *mut PosTraj_Feedback) -> bool;
    fn delta_robot_serial__action__PosTraj_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Feedback>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Feedback>);
    fn delta_robot_serial__action__PosTraj_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_Feedback>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub via_index: u32,

}



impl Default for PosTraj_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_Feedback__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_Feedback() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_FeedbackMessage__init(msg: *mut PosTraj_FeedbackMessage) -> bool;
    fn delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_FeedbackMessage>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_FeedbackMessage>);
    fn delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_FeedbackMessage>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PosTraj_Feedback,

}



impl Default for PosTraj_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_FeedbackMessage() }
  }
}




#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_SendGoal_Request__init(msg: *mut PosTraj_SendGoal_Request) -> bool;
    fn delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Request>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Request>);
    fn delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Request>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PosTraj_Goal,

}



impl Default for PosTraj_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_SendGoal_Request() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_SendGoal_Response__init(msg: *mut PosTraj_SendGoal_Response) -> bool;
    fn delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Response>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Response>);
    fn delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_SendGoal_Response>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PosTraj_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_SendGoal_Response() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_GetResult_Request__init(msg: *mut PosTraj_GetResult_Request) -> bool;
    fn delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_GetResult_Request>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_GetResult_Request>);
    fn delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_GetResult_Request>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PosTraj_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_GetResult_Request() }
  }
}


#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "delta_robot_serial__rosidl_generator_c")]
extern "C" {
    fn delta_robot_serial__action__PosTraj_GetResult_Response__init(msg: *mut PosTraj_GetResult_Response) -> bool;
    fn delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_GetResult_Response>, size: usize) -> bool;
    fn delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosTraj_GetResult_Response>);
    fn delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosTraj_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PosTraj_GetResult_Response>) -> bool;
}

// Corresponds to delta_robot_serial__action__PosTraj_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosTraj_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PosTraj_Result,

}



impl Default for PosTraj_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !delta_robot_serial__action__PosTraj_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to delta_robot_serial__action__PosTraj_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosTraj_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosTraj_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosTraj_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "delta_robot_serial/action/PosTraj_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__delta_robot_serial__action__PosTraj_GetResult_Response() }
  }
}






#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__delta_robot_serial__action__PosTraj_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to delta_robot_serial__action__PosTraj_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PosTraj_SendGoal;

impl rosidl_runtime_rs::Service for PosTraj_SendGoal {
    type Request = PosTraj_SendGoal_Request;
    type Response = PosTraj_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__delta_robot_serial__action__PosTraj_SendGoal() }
    }
}




#[link(name = "delta_robot_serial__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__delta_robot_serial__action__PosTraj_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to delta_robot_serial__action__PosTraj_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PosTraj_GetResult;

impl rosidl_runtime_rs::Service for PosTraj_GetResult {
    type Request = PosTraj_GetResult_Request;
    type Response = PosTraj_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__delta_robot_serial__action__PosTraj_GetResult() }
    }
}



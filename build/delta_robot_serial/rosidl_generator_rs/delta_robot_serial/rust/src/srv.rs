#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to delta_robot_serial__srv__Ikin_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Ikin_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Ikin_Request {
  type RmwMsg = super::srv::rmw::Ikin_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to delta_robot_serial__srv__Ikin_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Ikin_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Ikin_Response {
  type RmwMsg = super::srv::rmw::Ikin_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phi_11: msg.phi_11,
        phi_21: msg.phi_21,
        phi_31: msg.phi_31,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      phi_11: msg.phi_11,
      phi_21: msg.phi_21,
      phi_31: msg.phi_31,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      phi_11: msg.phi_11,
      phi_21: msg.phi_21,
      phi_31: msg.phi_31,
    }
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



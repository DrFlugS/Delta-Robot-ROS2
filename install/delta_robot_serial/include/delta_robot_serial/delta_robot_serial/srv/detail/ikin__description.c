// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice

#include "delta_robot_serial/srv/detail/ikin__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_delta_robot_serial
const rosidl_type_hash_t *
delta_robot_serial__srv__Ikin__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x1f, 0x88, 0x34, 0xbe, 0x9e, 0x4b, 0x75,
      0x3e, 0x47, 0x48, 0x96, 0x7b, 0x14, 0xd2, 0x59,
      0xa9, 0x97, 0x87, 0x60, 0xd8, 0x80, 0x89, 0x52,
      0x07, 0x72, 0x5c, 0xa8, 0x22, 0xdc, 0x27, 0xbe,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_delta_robot_serial
const rosidl_type_hash_t *
delta_robot_serial__srv__Ikin_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0xe4, 0x1b, 0x89, 0x0e, 0x3b, 0xeb, 0xaa,
      0x9e, 0x21, 0x90, 0x8b, 0xdb, 0x34, 0x59, 0x59,
      0x95, 0xcc, 0x68, 0x9c, 0x42, 0x37, 0xc6, 0x9e,
      0x91, 0x4f, 0xc6, 0xb1, 0xed, 0x4d, 0xb7, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_delta_robot_serial
const rosidl_type_hash_t *
delta_robot_serial__srv__Ikin_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x46, 0xd0, 0x78, 0x61, 0x98, 0x7a, 0xd2,
      0xfd, 0x6e, 0x42, 0x59, 0x07, 0xef, 0x76, 0xb5,
      0x5f, 0x19, 0x33, 0x9f, 0x22, 0xe9, 0x21, 0x70,
      0xb2, 0x2e, 0x98, 0xf2, 0x0a, 0x6a, 0x5c, 0xbd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_delta_robot_serial
const rosidl_type_hash_t *
delta_robot_serial__srv__Ikin_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xdf, 0xb4, 0xd5, 0x4b, 0x79, 0x64, 0x86,
      0xa1, 0x90, 0xf1, 0x68, 0x4c, 0x5f, 0xf4, 0xe4,
      0x20, 0x8b, 0x54, 0x78, 0x18, 0x91, 0x40, 0x14,
      0x42, 0x48, 0x82, 0x9a, 0xf9, 0xc4, 0x88, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char delta_robot_serial__srv__Ikin__TYPE_NAME[] = "delta_robot_serial/srv/Ikin";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char delta_robot_serial__srv__Ikin_Event__TYPE_NAME[] = "delta_robot_serial/srv/Ikin_Event";
static char delta_robot_serial__srv__Ikin_Request__TYPE_NAME[] = "delta_robot_serial/srv/Ikin_Request";
static char delta_robot_serial__srv__Ikin_Response__TYPE_NAME[] = "delta_robot_serial/srv/Ikin_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char delta_robot_serial__srv__Ikin__FIELD_NAME__request_message[] = "request_message";
static char delta_robot_serial__srv__Ikin__FIELD_NAME__response_message[] = "response_message";
static char delta_robot_serial__srv__Ikin__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field delta_robot_serial__srv__Ikin__FIELDS[] = {
  {
    {delta_robot_serial__srv__Ikin__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {delta_robot_serial__srv__Ikin_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {delta_robot_serial__srv__Ikin_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {delta_robot_serial__srv__Ikin_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription delta_robot_serial__srv__Ikin__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delta_robot_serial__srv__Ikin__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delta_robot_serial__srv__Ikin__TYPE_NAME, 27, 27},
      {delta_robot_serial__srv__Ikin__FIELDS, 3, 3},
    },
    {delta_robot_serial__srv__Ikin__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = delta_robot_serial__srv__Ikin_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = delta_robot_serial__srv__Ikin_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = delta_robot_serial__srv__Ikin_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char delta_robot_serial__srv__Ikin_Request__FIELD_NAME__x[] = "x";
static char delta_robot_serial__srv__Ikin_Request__FIELD_NAME__y[] = "y";
static char delta_robot_serial__srv__Ikin_Request__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field delta_robot_serial__srv__Ikin_Request__FIELDS[] = {
  {
    {delta_robot_serial__srv__Ikin_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Request__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delta_robot_serial__srv__Ikin_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delta_robot_serial__srv__Ikin_Request__TYPE_NAME, 35, 35},
      {delta_robot_serial__srv__Ikin_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char delta_robot_serial__srv__Ikin_Response__FIELD_NAME__phi_11[] = "phi_11";
static char delta_robot_serial__srv__Ikin_Response__FIELD_NAME__phi_21[] = "phi_21";
static char delta_robot_serial__srv__Ikin_Response__FIELD_NAME__phi_31[] = "phi_31";

static rosidl_runtime_c__type_description__Field delta_robot_serial__srv__Ikin_Response__FIELDS[] = {
  {
    {delta_robot_serial__srv__Ikin_Response__FIELD_NAME__phi_11, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Response__FIELD_NAME__phi_21, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Response__FIELD_NAME__phi_31, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delta_robot_serial__srv__Ikin_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delta_robot_serial__srv__Ikin_Response__TYPE_NAME, 36, 36},
      {delta_robot_serial__srv__Ikin_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char delta_robot_serial__srv__Ikin_Event__FIELD_NAME__info[] = "info";
static char delta_robot_serial__srv__Ikin_Event__FIELD_NAME__request[] = "request";
static char delta_robot_serial__srv__Ikin_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field delta_robot_serial__srv__Ikin_Event__FIELDS[] = {
  {
    {delta_robot_serial__srv__Ikin_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {delta_robot_serial__srv__Ikin_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {delta_robot_serial__srv__Ikin_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription delta_robot_serial__srv__Ikin_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {delta_robot_serial__srv__Ikin_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
delta_robot_serial__srv__Ikin_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {delta_robot_serial__srv__Ikin_Event__TYPE_NAME, 33, 33},
      {delta_robot_serial__srv__Ikin_Event__FIELDS, 3, 3},
    },
    {delta_robot_serial__srv__Ikin_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = delta_robot_serial__srv__Ikin_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = delta_robot_serial__srv__Ikin_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Request\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "---\n"
  "#Response\n"
  "float64 phi_11\n"
  "float64 phi_21\n"
  "float64 phi_31\n"
  "\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
delta_robot_serial__srv__Ikin__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delta_robot_serial__srv__Ikin__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
delta_robot_serial__srv__Ikin_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delta_robot_serial__srv__Ikin_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
delta_robot_serial__srv__Ikin_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delta_robot_serial__srv__Ikin_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
delta_robot_serial__srv__Ikin_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {delta_robot_serial__srv__Ikin_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delta_robot_serial__srv__Ikin__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delta_robot_serial__srv__Ikin__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *delta_robot_serial__srv__Ikin_Event__get_individual_type_description_source(NULL);
    sources[3] = *delta_robot_serial__srv__Ikin_Request__get_individual_type_description_source(NULL);
    sources[4] = *delta_robot_serial__srv__Ikin_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delta_robot_serial__srv__Ikin_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delta_robot_serial__srv__Ikin_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delta_robot_serial__srv__Ikin_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delta_robot_serial__srv__Ikin_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
delta_robot_serial__srv__Ikin_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *delta_robot_serial__srv__Ikin_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *delta_robot_serial__srv__Ikin_Request__get_individual_type_description_source(NULL);
    sources[3] = *delta_robot_serial__srv__Ikin_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

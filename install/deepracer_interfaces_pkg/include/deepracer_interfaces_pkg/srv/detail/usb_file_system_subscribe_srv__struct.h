// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deepracer_interfaces_pkg:srv/USBFileSystemSubscribeSrv.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__SRV__DETAIL__USB_FILE_SYSTEM_SUBSCRIBE_SRV__STRUCT_H_
#define DEEPRACER_INTERFACES_PKG__SRV__DETAIL__USB_FILE_SYSTEM_SUBSCRIBE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_name'
// Member 'callback_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/USBFileSystemSubscribeSrv in the package deepracer_interfaces_pkg.
typedef struct deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Request
{
  rosidl_runtime_c__String file_name;
  rosidl_runtime_c__String callback_name;
  bool verify_name_exists;
} deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Request;

// Struct for a sequence of deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Request.
typedef struct deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Request__Sequence
{
  deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/USBFileSystemSubscribeSrv in the package deepracer_interfaces_pkg.
typedef struct deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Response
{
  int32_t error;
} deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Response;

// Struct for a sequence of deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Response.
typedef struct deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Response__Sequence
{
  deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deepracer_interfaces_pkg__srv__USBFileSystemSubscribeSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEPRACER_INTERFACES_PKG__SRV__DETAIL__USB_FILE_SYSTEM_SUBSCRIBE_SRV__STRUCT_H_

#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSaveRingBufferRecordingSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSAVERINGBUFFERRECORDINGSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSAVERINGBUFFERRECORDINGSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocSaveRingBufferRecordingSrvRequest.h>
#include <sick_scan/SickLocSaveRingBufferRecordingSrvResponse.h>


namespace sick_scan
{

struct SickLocSaveRingBufferRecordingSrv
{

typedef SickLocSaveRingBufferRecordingSrvRequest Request;
typedef SickLocSaveRingBufferRecordingSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSaveRingBufferRecordingSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrv > {
  static const char* value()
  {
    return "34d0a48be4aeacdb3a2fe4696a1d7393";
  }

  static const char* value(const ::sick_scan::SickLocSaveRingBufferRecordingSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSaveRingBufferRecordingSrv";
  }

  static const char* value(const ::sick_scan::SickLocSaveRingBufferRecordingSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSaveRingBufferRecordingSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrv >
template<>
struct DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSaveRingBufferRecordingSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSaveRingBufferRecordingSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSaveRingBufferRecordingSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrv >
template<>
struct DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSaveRingBufferRecordingSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSaveRingBufferRecordingSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSAVERINGBUFFERRECORDINGSRV_H

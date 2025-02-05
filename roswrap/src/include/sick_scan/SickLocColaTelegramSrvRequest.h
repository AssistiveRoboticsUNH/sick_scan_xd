#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocColaTelegramSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCCOLATELEGRAMSRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCCOLATELEGRAMSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocColaTelegramSrvRequest_
{
  typedef SickLocColaTelegramSrvRequest_<ContainerAllocator> Type;

  SickLocColaTelegramSrvRequest_()
    : cola_ascii_request()
    , wait_response_timeout(0.0)  {
    }
  SickLocColaTelegramSrvRequest_(const ContainerAllocator& _alloc)
    : cola_ascii_request(_alloc)
    , wait_response_timeout(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cola_ascii_request_type;
  _cola_ascii_request_type cola_ascii_request;

   typedef float _wait_response_timeout_type;
  _wait_response_timeout_type wait_response_timeout;





  typedef std::shared_ptr< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocColaTelegramSrvRequest_

typedef ::sick_scan::SickLocColaTelegramSrvRequest_<std::allocator<void> > SickLocColaTelegramSrvRequest;

typedef std::shared_ptr< ::sick_scan::SickLocColaTelegramSrvRequest > SickLocColaTelegramSrvRequestPtr;
typedef std::shared_ptr< ::sick_scan::SickLocColaTelegramSrvRequest const> SickLocColaTelegramSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cola_ascii_request == rhs.cola_ascii_request &&
    lhs.wait_response_timeout == rhs.wait_response_timeout;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "568bb3d36a83d508d37ba8ffb718f400";
  }

  static const char* value(const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x568bb3d36a83d508ULL;
  static const uint64_t static_value2 = 0xd37ba8ffb718f400ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocColaTelegramSrvRequest";
  }

  static const char* value(const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocColaTelegram for sick localization.\n"
"# ROS service SickLocColaTelegram encodes and sends a Cola telegram to the localization controller,\n"
"# receives and encodes the answer from the controller.\n"
"#\n"
"# See Telegram-Listing-v1.1.0.241R.pdf and Technical_information_Telegram_Listing_NAV_LOC_en_IM0076556.pdf\n"
"# for further details about Cola telgrams.\n"
"\n"
"#\n"
"# Request (input)\n"
"#\n"
"\n"
"string  cola_ascii_request       # Cola-ASCII telegram to send to the localization controller, f.e. \"sRN SetAccessMode 3 F4724744\".\n"
"float32 wait_response_timeout    # Timeout for the controller response in secondes. Use 0.0 for Cola requests without controller response.\n"
"# bool send_binary               # Not used (true: send binary telegram, false/default: send ASCII telegram)\n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cola_ascii_request);
      stream.next(m.wait_response_timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocColaTelegramSrvRequest_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::SickLocColaTelegramSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "cola_ascii_request: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cola_ascii_request);
    s << indent << "wait_response_timeout: ";
    Printer<float>::stream(s, indent + "  ", v.wait_response_timeout);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCCOLATELEGRAMSRVREQUEST_H

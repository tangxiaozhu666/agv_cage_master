// Generated by gencpp from file chassis_drive/cmd_liftRequest.msg
// DO NOT EDIT!


#ifndef CHASSIS_DRIVE_MESSAGE_CMD_LIFTREQUEST_H
#define CHASSIS_DRIVE_MESSAGE_CMD_LIFTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chassis_drive
{
template <class ContainerAllocator>
struct cmd_liftRequest_
{
  typedef cmd_liftRequest_<ContainerAllocator> Type;

  cmd_liftRequest_()
    : lift_active(0)  {
    }
  cmd_liftRequest_(const ContainerAllocator& _alloc)
    : lift_active(0)  {
  (void)_alloc;
    }



   typedef uint16_t _lift_active_type;
  _lift_active_type lift_active;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(mode_up)
  #undef mode_up
#endif
#if defined(_WIN32) && defined(mode_down)
  #undef mode_down
#endif

  enum {
    mode_up = 1u,
    mode_down = 0u,
  };


  typedef boost::shared_ptr< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> const> ConstPtr;

}; // struct cmd_liftRequest_

typedef ::chassis_drive::cmd_liftRequest_<std::allocator<void> > cmd_liftRequest;

typedef boost::shared_ptr< ::chassis_drive::cmd_liftRequest > cmd_liftRequestPtr;
typedef boost::shared_ptr< ::chassis_drive::cmd_liftRequest const> cmd_liftRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chassis_drive::cmd_liftRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::chassis_drive::cmd_liftRequest_<ContainerAllocator1> & lhs, const ::chassis_drive::cmd_liftRequest_<ContainerAllocator2> & rhs)
{
  return lhs.lift_active == rhs.lift_active;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::chassis_drive::cmd_liftRequest_<ContainerAllocator1> & lhs, const ::chassis_drive::cmd_liftRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace chassis_drive

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ebadb64f1f7323f82c99c510cfe6f5c";
  }

  static const char* value(const ::chassis_drive::cmd_liftRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ebadb64f1f7323fULL;
  static const uint64_t static_value2 = 0x82c99c510cfe6f5cULL;
};

template<class ContainerAllocator>
struct DataType< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chassis_drive/cmd_liftRequest";
  }

  static const char* value(const ::chassis_drive::cmd_liftRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 lift_active\n"
"uint16 mode_up=1\n"
"uint16 mode_down=0\n"
;
  }

  static const char* value(const ::chassis_drive::cmd_liftRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lift_active);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cmd_liftRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chassis_drive::cmd_liftRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chassis_drive::cmd_liftRequest_<ContainerAllocator>& v)
  {
    s << indent << "lift_active: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.lift_active);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHASSIS_DRIVE_MESSAGE_CMD_LIFTREQUEST_H

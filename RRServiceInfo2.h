#ifndef GODOT_RRServiceInfo2_H
#define GODOT_RRServiceInfo2_H
// #include <boost/thread/mutex.hpp>
// #include <boost/thread.hpp>
// #include <boost/asio/serial_port.hpp>
// #include <boost/enable_shared_from_this.hpp>
#include <RobotRaconteur.h>
#include "core/reference.h" 
#include <boost/multiprecision/cpp_int.hpp>
#include <map>
#include "RRO.h"
extern boost::recursive_mutex global_lock;
using namespace RobotRaconteur;
namespace RR
{
    typedef boost::int128_t NodeID;
    class RRServiceInfo2
    {
        std::string NodeName;
        NodeID Node_ID;
        std::string Name;
        std::string RootObjectType;
        std::vector<std::string> RootObjectImplements;
        std::string ConnectionUrl;
        std::map<std::string,RR_SHARED_PTR<RRO> > Attributes;

        
    };
};

#endif // GODOT_RRServiceInfo2_H
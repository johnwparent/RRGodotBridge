#ifndef GODOT_RRTimeSpec_H
#define GODOT_RRTimeSpec_H
// #include <boost/thread/mutex.hpp>
// #include <boost/thread.hpp>
// #include <boost/asio/serial_port.hpp>
// #include <boost/enable_shared_from_this.hpp>
#include <RobotRaconteur.h>
#include "core/reference.h" 
#include <boost/multiprecision/cpp_int.hpp>
#include <vector>
extern boost::recursive_mutex global_lock;
using namespace RobotRaconteur;
namespace RR
{
    class RRLocalTransport
    {
        LocalTransport();
        void StartServerAsNodeID(const RRNodeID& nodeid);
        void StartServerAsNodeName(const std::string& nodename);
        void StartClientAsNodeName(const std::string& nodename);
        
    };
};

#endif // GODOT_RRLocalTransport
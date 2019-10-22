#ifndef GODOT_RRNodeInfo2_H
#define GODOT_RRNodeInfo2_H
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
    typedef boost::int128_t NodeID;
    class RRNodeInfo2
    {
        std::string NodeName;
        NodeID nodeID;
        std::vector<std::string> ConnectionURL
    };
};

#endif // GODOT_RRNodeInfo2_H
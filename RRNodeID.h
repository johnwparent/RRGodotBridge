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
    class RRNodeID 
    {
        RRNodeID(std::string id);
        RRNodeID(boost::array<uint8_t,16> id);
        RRNodeID(boost::uuids::uuid id);
        std::string ToString();
        boost::array<uint8_t,16> ToByteArray();
        boost::uuids::uuid ToUuidArray();
        bool operator==(const RRNodeID t);
        bool operator!=(const RRNodeID t);
        
    };
};

#endif //GODOT_RRNodeID_H
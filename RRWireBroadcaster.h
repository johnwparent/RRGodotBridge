#ifndef GODOT_RRWireBroadcaster_H
#define GODOT_RRWireBroadcaster_H
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
    template <typename T>
    class RRWireBroadcaster
    {
        RRWireBroadcaster();
        void Init(RR_SHARED_PTR<Pipe<T> > wire);
        void OutValue(T value);
        
    };
};

#endif // GODOT_RRWireBroadcaster_H
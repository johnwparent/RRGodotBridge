#ifndef GODOT_RRPipeBroadcaster_H
#define GODOT_RRPipeBroadcaster_H
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
    class RRPipeBroadcaster
    {
        RRPipeBroadcaster();
        void Init(RR_SHARED_PTR<Pipe<T> >pipe, int32_t backlog=-1);
        void SendPacket(T packet);
        void AsyncSendPacket(T packet, boost::function<void()> handler);
        
    };
};

#endif // GODOT_RRPipeBroadcaster_H
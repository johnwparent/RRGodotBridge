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
    template <typename T>
    class RRWire
    {
        std::string GetMemberName();
        WireConnection<T> Connect();
        void AsyncConnect(boost::function<void (RR SHARED PTR<WireConnection<T> >,
                            RR SHARED PTR<RobotRaconteurException>)> handler,
                            int32 t timeout=RR TIMEOUT HANDLER );

        boost::function<void(RR SHARED PTR<WireConnection<T>>)> GetWireConnectCallback()
        void SetWireConnectCallback(boost::function<void(RR SHARED PTR<WireConnection<T>>)> value);
        
    };
};

#endif // GODOT_RRWire_H
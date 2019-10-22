#ifndef GODOT_RRCallback_H
#define GODOT_RRCallback_H
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
    class RRCallBack 
    {
        T GetFunction();
        void SetFunction(T val);
        T GetClientFunction(uint32_t endpoint);
        T GetClientFunction(RR_SHARED_PTR<RREndpoint> endpoint);
        
    };
}

#endif // GODOT_RRCallback_H
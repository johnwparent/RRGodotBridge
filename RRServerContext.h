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
    class RRServerContext
    {
        static std::string GetCurrentServicePath();
        static RR_SHARED_PTR<RRServerContext> GetCurrentServerContext();
        void ReleaseServicePath(const std::string& path, const std::vector<uint64_t>& endpoints);
        void ReleaseServicePath(const std::string& path);
        boost::signals2::signal<void (RR_SHARED_PTR<RRServerContext>, ServerServiceListenerEventType RR_SHARED_PTR<void>)> ServerServiceListener();
        std::map<std::string, RR_SHARED_PTR<RRO> > GetAttributes();
        
    };
};

#endif // GODOT_RRServerContext_H
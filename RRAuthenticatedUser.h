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
    class RRAuthenticatedUser
    {
        std::string GetUsername();
        std::vector<std::string> > GetPrivileges();
        boost::posix_time::ptime GetLoginTime();
        boost::posix_time::ptime GetLastAccessTime();
    };
};

#endif // GODOT_RRAuthenticatedUser_H
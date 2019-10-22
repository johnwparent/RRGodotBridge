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
    class RRTimeSpec
    {
        int64_t seconds;
        int32_t nanoseconds;
        TimeSpec(int64_t seconds, int32_t nanoseconds);
        bool operator==(const RRTimeSpec& t );
        bool operator!=(const RRTimeSpec& t );
        bool operator>(const RRTimeSpec& t );
        bool operator<(const RRTimeSpec& t );
        bool operator>=(const RRTimeSpec& t );
        bool operator<=(const RRTimeSpec& t );
        bool operator-();
        bool operator+();
        
        void cleanUPNanoSeconds();
        static RRTimeSpec Now();
        
    };
};

#endif // GODOT_RRTimeSpec_H
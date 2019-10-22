#ifndef GODOT_RRO_H
#define GODOT_RRO_H
// #include <boost/thread/mutex.hpp>
// #include <boost/thread.hpp>
// #include <boost/asio/serial_port.hpp>
// #include <boost/enable_shared_from_this.hpp>
#include <RobotRaconteur.h>
#include "core/reference.h" 
#include <boost/multiprecision/cpp_int.hpp>

extern boost::recursive_mutex global_lock;
using namespace RobotRaconteur;
namespace RobotRaconteur
{


    class RRO : public Reference
    {
        GDCLASS(RRO,Reference);
        RobotRaconteur::RRObjectConstPtr obj;
    protected:
        static void _bind_methods();
    };
};


#endif // GODOT_RR_H
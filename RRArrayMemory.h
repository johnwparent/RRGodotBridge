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
    template <typename T>
    class RRArrayMemory
    {
        RRArrayMemory();
        uint64_t Length ();
        void Read(uint64_t memPos, RR_SHARED_PTR<RRArray<T> > buffer, uint64_t count);
        void Write(uint64_t memoryPos, RR_SHARED_PTR<RRArray<T> > buffer, uint64_t bufferPos, uint64_t count);
        
    };
};

#endif // GODOT_RRArrayMemory
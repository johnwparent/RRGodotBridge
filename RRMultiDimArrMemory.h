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
    class RRMultiDimArrayMemory
    {
        MultiDimArrayMemory(RR SHARED PTR<RRMultiDimArray<T> > array);
        uint64_t GetDimCount();
        std::vector<uint64_t> GetDims();
        bool GetComplex();
        void Read(std::vector<uint64_t> memoryPos, RR_SHARED_PTR<RRMultDimArray<T> > buffer, std::vector<uint64_t> bufferpos, std::vector<uint64_t> count);
        void Write(std::vector<uint64_t> memoryPos, RR_SHARED_PTR<RRMultDimArray<T> > buffer, std::vector<uint64_t> bufferpos, std::vector<uint64_t> count);
        
    };
};

#endif // GODOT_RRMultiDimArrayMemory
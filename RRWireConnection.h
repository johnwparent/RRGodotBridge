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
    template<typename T>
    class WireConnection
    {
        uint32_t GetEndpoint();
        T GetInValue();
        T GetOutValue();
        void SetOutValue(T value);
        bool GetInValueValid();
        bool GetOutValueValid();
        TimeSpec GetLastValueReceivedTime();
        TimeSpec GetLastValueSentTime();
        void Close();
        void AsyncClose(boost::function<void(RR_SHARED_PTR<RobotRaconteurException>)> handler, int32_t timeout=RR_TIMEOUT_INFINITE);
        boost::function<void (RR_SHARED_PTR<WireConnection<T> >) > GetWireConnectionClosedCallback();
        void SetWireConnectionClosedCallback(boost::function<void (RR_SHARED_PTR<WireConnection<T>>)>value);
        boost::signals2::signal<void (RR_SHARED_PTR<WireConnection<T> > connection, T value, TimeSpec time)> WireValueChanged();
    };
};

#endif // GODOT_RRWireConnection_H
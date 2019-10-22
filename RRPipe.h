#ifndef GODOT_RRPipe_H
#define GODOT_RRPipe_H
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
    class RRPipe
    {


    public:

        std::string GetMemberName();
        RRPipeEndPoint<T> Connect(int32_t index =-1);
        void AsyncConnect(int32 t index, boost::function<void(RR SHARED PTR<PipeEndpoint<T>
                            >, RR SHARED PTR<RobotRaconteurException> >) handler,
                            int32 t timeout=RR TIMEOUT HANDLER );
        boost::function<void(RR SHARED PTR<PipeEndpoint<T> >)> GetPipeConnectCallback()
                                                                        void SetPipeConnectCallback(boost::function<void(RR SHARED PTR<PipeEndpoint<T>
                                                                                >)> value);
        uint32_t GetEndPoint();
        int32_t GetIndex();
        size_t GetAvailable();
        T RecievePacket();
        T PeekPacket();
        uint SendPacket(T pack);
        void AsyncSendPacket(T packet, boost::function<void(uint32 t,RR SHARED PTR<RobotRaconteurException>)>
                                handler);
        void Close();
        bool GetRequstPacketAck();
        void SetRequstPacketAck(bool value);
        void AsyncClose(boost::function<void(RR SHARED PTR<RobotRaconteurException>)>
                        handler, int32 t timeout=2000);
        



    };
};
#endif // GODOT_RRPipe_H
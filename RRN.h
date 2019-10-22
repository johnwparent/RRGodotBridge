#ifndef GODOT_RR_H
#define GODOT_RR_H
// #include <boost/thread/mutex.hpp>
// #include <boost/thread.hpp>
// #include <boost/asio/serial_port.hpp>
// #include <boost/enable_shared_from_this.hpp>
#include <RobotRaconteur.h>
#include "core/reference.h" 
#include <boost/multiprecision/cpp_int.hpp>
#include "RRTCPTransport.h"
extern boost::recursive_mutex global_lock;
using namespace RobotRaconteur;
namespace RR
{
   typedef int128_t NODEID;

    /// <summary>
    /// A class to wrap the RR node class
    /// </summary>
    class RRN : public Reference
    {
        RobotRaconteur::RRObject obj;
        NODEID nID;
        RR_SHARED_PTR node;
    protected:
        static void _bind_methods();
    public:
        RRN();
        String  GetRobotRaconteurVersion();

        
        int128_t GetNodeID();
        void SetNodeID(const NODEID & val);

        String GetNodeName();
        void SetNodeName(const std::string& val);

        void RegisterTransport(RR_SHARED_PTR<Transport> transport);
        void Shutdown();

        bool IsServiceTypeRegistered(const std::string& name);

        void Sleep(const boost::posix_time::time_duration& dur);
        
    private:
    
    };  

};

#endif // GODOT_RR_H
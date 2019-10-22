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
    class RRTCPTransport
    {
        RRTCPTransport();
        void StartServer(int32_t port);
        void StartServerUsingPortSharer();
        bool IsPortSharerRunning();
        int32_t GetListenPort();
        void EnableNodeDiscoveryListening();
        void DisableNodeDiscoveryListening();
        void EnabledNodeAnnounce();
        void DisableNodeAnnounce();
        double GetDefaultReceiveTimeout();
        void SetDefaultReceiveTimeout(double value);
        double GetDefaultConnectTimeout();
        void SetDefaultConnectTimeout(double value);
        double GetDefaultHeartbeatPeriod();
        void SetDefaultHeartbeatPeriod();
        int32_t GetMaxMessageSize();
        void SetMaxMessageSize(int32_t val);
        void LoadTlsNodeCertificate();
        bool isTlsNodeCertificateLoaded();
        bool GetRequireTls();
        void SetRequireTls(bool value);
        bool IsTransportConnectionSecure(RR_SHARED_PTR<RRObject> a);
        bool IsTransportConnectionSecure(uint32_t e);
        bool IsTransportConnectionSecure(RR_SHARED_PTR<RREndpoint> a);
        bool IsPeerIdentityVerified(RR_SHARED_PTR<RRObject> a);
        bool IsPeerIdentityVerified(uint32_t e);
        bool IsPeerIdentityVerified(RR_SHARED_PTR<RREndpoint> e);
        std::string GetSecurePeerIdentity(RR_SHARED_PTR<RRObject> a);
        std::string GetSecurePeerIdentity(uint32_t e);
        std::string GetSecurePeerIdentity(RR_SHARED_PTR<RREndpoint> e);
        bool GetAcceptWebSockets();
        void SetAcceptWebSockets(bool value);
        std::vector<std::string> GetWebSocketAllowedOrigins();
        void AddWebSocketAllowedOrigin(const std::string& origin);
        void RemoveWebSocketOrigin(const std::string& origin);
                
    };
};

#endif // GODOT_RRTCPTransport
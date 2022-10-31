// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakPeerHelper.hpp"
#include "Social.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RakNetInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETINSTANCE
public:
    class RakNetInstance& operator=(class RakNetInstance const &) = delete;
    RakNetInstance(class RakNetInstance const &) = delete;
    RakNetInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETINSTANCE
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    MCVAPI class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    MCVAPI struct RakNet::RakNetGUID getGUID() const;
    MCVAPI unsigned short getIPv4Port() const;
    MCVAPI unsigned short getIPv6Port() const;
    MCVAPI std::string getLocalIp();
    MCVAPI std::vector<std::string> getLocalIps() const;
    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const;
    MCVAPI unsigned short getPort() const;
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    MCVAPI bool isIPv4Supported() const;
    MCVAPI bool isIPv6Supported() const;
    MCVAPI void onResume();
    MCVAPI void onSuspend();
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    MCVAPI void setupNatPunch(bool);
    MCVAPI void startNatPunchingClient(class Social::GameConnectionInfo);
    MCVAPI ~RakNetInstance();
#endif
    MCAPI RakNetInstance(class RakNetInstance::ConnectionCallbacks &, class RakPeerHelper::IPSupportInterface &);
    MCAPI bool connect(class Social::GameConnectionInfo, class Social::GameConnectionInfo);
    MCAPI void disconnect();
    MCAPI void runEvents();
    MCAPI void tick();

//private:
    MCAPI void _changeNatState(enum class RakNetInstance::NATState, int, std::string const &);
    MCAPI class std::shared_ptr<class RakNetInstance::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const &);
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const &);
    MCAPI void _pingNatService(bool);
    MCAPI void _storeLocalIP();

private:

};
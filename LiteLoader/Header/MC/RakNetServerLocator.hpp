// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"
#include "RakPeerHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RakNetServerLocator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETSERVERLOCATOR
public:
    class RakNetServerLocator& operator=(class RakNetServerLocator const &) = delete;
    RakNetServerLocator(class RakNetServerLocator const &) = delete;
    RakNetServerLocator() = delete;
#endif

public:
    /*0*/ virtual ~RakNetServerLocator();
    /*1*/ virtual void onSuspend();
    /*2*/ virtual void onResume();
    /*3*/ virtual void announceServer(std::string const &, std::string const &, enum class GameType, int, int, bool);
    /*4*/ virtual void stopAnnouncingServer();
    /*5*/ virtual void findServers(int, int);
    /*6*/ virtual void addCustomServer(class AsynchronousIPResolver const &, int);
    /*7*/ virtual void addCustomServer(std::string const &, int);
    /*8*/ virtual void stopFindingServers();
    /*9*/ virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /*10*/ virtual void clearServerList();
    /*11*/ virtual bool isIPv4Supported() const;
    /*12*/ virtual bool isIPv6Supported() const;
    /*13*/ virtual void setHostGUID(class std::function<struct RakNet::RakNetGUID (void)>);
    /*14*/ virtual float getPingTimeForGUID(std::string const &);
    /*15*/ virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETSERVERLOCATOR
#endif
    MCAPI RakNetServerLocator(class RakNetInstance &, class RakPeerHelper::IPSupportInterface &, bool);
    MCAPI void update();

//private:
    MCAPI void _activate();
    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const &, int);
    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const &, int);
    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const &, int);
    MCAPI std::string _getHostGuid(std::string const &, int);
    MCAPI void _getServerOriginalAddress(std::string &, std::string const &);
    MCAPI bool _handleUnconnectedPong(std::string const &, struct RakNet::Packet const *, bool, unsigned __int64);
    MCAPI void _initializeBroadcastAddresses();
    MCAPI void _onPingSend(std::string const &, std::string const &, int);
    MCAPI bool _onPongReceive(float &, struct RakNet::RakNetGUID const &, unsigned int const &, int);
    MCAPI bool _pingServerV4(std::string const &, int);
    MCAPI bool _pingServerV6(std::string const &, int);
    MCAPI void _punchHoles();
    MCAPI bool _updateQueuedPings();
    MCAPI bool _validateServerVersion(std::vector<std::string> const &);

private:

};
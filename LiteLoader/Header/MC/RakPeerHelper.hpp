// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RakPeerHelper {

#define AFTER_EXTRA
public:
    struct IPSupportInterface{
        IPSupportInterface() = delete;
        IPSupportInterface(struct IPSupportInterface&) = delete;
        IPSupportInterface(struct IPSupportInterface&&) = delete;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKPEERHELPER
public:
    class RakPeerHelper& operator=(class RakPeerHelper const &) = delete;
    RakPeerHelper(class RakPeerHelper const &) = delete;
    RakPeerHelper() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKPEERHELPER
#endif
    MCAPI enum class RakNet::StartupResult peerStartup(class RakNet::RakPeerInterface *, struct ConnectionDefinition const &);

//private:
    MCAPI void LogIPSupport();
    MCAPI void _resetToIPv6Only(class gsl::span<struct RakNet::SocketDescriptor, 2>, int &);
    MCAPI enum class RakNet::StartupResult _startupInternal(class gsl::not_null<class RakNet::RakPeerInterface *>, struct ConnectionDefinition const &, struct RakNet::SocketDescriptor *, int &, int);

private:

};
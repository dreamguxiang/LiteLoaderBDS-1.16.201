// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BatchedNetworkPeer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BATCHEDNETWORKPEER
public:
    class BatchedNetworkPeer& operator=(class BatchedNetworkPeer const &) = delete;
    BatchedNetworkPeer(class BatchedNetworkPeer const &) = delete;
    BatchedNetworkPeer() = delete;
#endif

public:
    /*0*/ virtual ~BatchedNetworkPeer();
    /*1*/ virtual void sendPacket(std::string const &, enum class NetworkPeer::Reliability, int, unsigned short, enum class Compressibility);
    /*2*/ virtual enum class NetworkPeer::DataStatus receivePacket(std::string &);
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus();
    /*4*/ virtual void update();
    /*5*/ virtual void flush(class std::function<void (void)> &&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BATCHEDNETWORKPEER
#endif
    MCAPI BatchedNetworkPeer(class std::shared_ptr<class NetworkPeer>, class Scheduler &);

//private:
    MCAPI void _startSendTask();

private:

};
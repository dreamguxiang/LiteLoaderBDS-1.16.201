// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerCommunicationInterface {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMUNICATIONINTERFACE
public:
    class ServerCommunicationInterface& operator=(class ServerCommunicationInterface const &) = delete;
    ServerCommunicationInterface(class ServerCommunicationInterface const &) = delete;
    ServerCommunicationInterface() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMUNICATIONINTERFACE
#endif
    MCAPI void sendBandwidthMetric(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, std::string const &);
    MCAPI void sendServerStarted();
    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const &);

//private:
    MCAPI void communicate(std::string const &, class Json::Value const &);

private:

};
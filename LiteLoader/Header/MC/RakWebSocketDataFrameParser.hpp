// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RakWebSocketDataFrameParser {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAMEPARSER
public:
    class RakWebSocketDataFrameParser& operator=(class RakWebSocketDataFrameParser const &) = delete;
    RakWebSocketDataFrameParser(class RakWebSocketDataFrameParser const &) = delete;
    RakWebSocketDataFrameParser() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKWEBSOCKETDATAFRAMEPARSER
#endif
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> readFrame(class RakNet::BitStream &);
    MCAPI ~RakWebSocketDataFrameParser();

//private:
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> _failReadFrame(std::string const &, enum CloseStatusCode);

private:

};
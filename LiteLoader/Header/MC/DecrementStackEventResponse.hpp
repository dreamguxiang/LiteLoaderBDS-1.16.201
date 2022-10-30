// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DecrementStackEventResponse {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECREMENTSTACKEVENTRESPONSE
public:
    class DecrementStackEventResponse& operator=(class DecrementStackEventResponse const &) = delete;
    DecrementStackEventResponse(class DecrementStackEventResponse const &) = delete;
    DecrementStackEventResponse() = delete;
#endif

public:
    /*0*/ virtual ~DecrementStackEventResponse();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void executeAction(class RenderParams &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DECREMENTSTACKEVENTRESPONSE
#endif
    MCAPI static std::string const NameID;

};
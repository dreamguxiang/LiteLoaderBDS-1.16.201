// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerActorHurtEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORHURTEVENT
public:
    struct ScriptServerActorHurtEvent& operator=(struct ScriptServerActorHurtEvent const &) = delete;
    ScriptServerActorHurtEvent(struct ScriptServerActorHurtEvent const &) = delete;
    ScriptServerActorHurtEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerActorHurtEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTORHURTEVENT
#endif

//private:

};
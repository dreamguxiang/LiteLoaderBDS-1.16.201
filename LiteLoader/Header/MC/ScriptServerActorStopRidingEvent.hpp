// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerActorStopRidingEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORSTOPRIDINGEVENT
public:
    struct ScriptServerActorStopRidingEvent& operator=(struct ScriptServerActorStopRidingEvent const &) = delete;
    ScriptServerActorStopRidingEvent(struct ScriptServerActorStopRidingEvent const &) = delete;
    ScriptServerActorStopRidingEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerActorStopRidingEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTORSTOPRIDINGEVENT
#endif

//private:

};
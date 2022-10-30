// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorAnimationEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONEVENT
public:
    class ActorAnimationEvent& operator=(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent(class ActorAnimationEvent const &) = delete;
    ActorAnimationEvent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONEVENT
#endif
    MCAPI ActorAnimationEvent(class ActorAnimationEvent &&);
    MCAPI ActorAnimationEvent(float, std::string const &, enum CurrentCmdVersion);
    MCAPI void fire(class RenderParams &, class Actor *) const;
    MCAPI class ActorAnimationEvent & operator=(class ActorAnimationEvent &&);
    MCAPI ~ActorAnimationEvent();

};
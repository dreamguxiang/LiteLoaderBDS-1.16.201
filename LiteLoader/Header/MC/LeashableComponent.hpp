// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LeashableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHABLECOMPONENT
public:
    class LeashableComponent& operator=(class LeashableComponent const &) = delete;
    LeashableComponent(class LeashableComponent const &) = delete;
    LeashableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEASHABLECOMPONENT
#endif
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI void leash(class Actor &, class Actor &);
    MCAPI void unleash(class Actor &);

};
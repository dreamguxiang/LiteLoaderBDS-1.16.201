// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BreathableSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLESYSTEM
public:
    class BreathableSystem& operator=(class BreathableSystem const &) = delete;
    BreathableSystem(class BreathableSystem const &) = delete;
    BreathableSystem() = delete;
#endif

public:
    /*0*/ virtual ~BreathableSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREATHABLESYSTEM
#endif

};
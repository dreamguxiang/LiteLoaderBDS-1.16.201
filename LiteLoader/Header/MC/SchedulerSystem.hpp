// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SchedulerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERSYSTEM
public:
    class SchedulerSystem& operator=(class SchedulerSystem const &) = delete;
    SchedulerSystem(class SchedulerSystem const &) = delete;
    SchedulerSystem() = delete;
#endif

public:
    /*0*/ virtual ~SchedulerSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCHEDULERSYSTEM
#endif

};
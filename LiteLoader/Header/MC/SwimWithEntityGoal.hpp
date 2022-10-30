// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SwimWithEntityGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYGOAL
public:
    class SwimWithEntityGoal& operator=(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal() = delete;
#endif

public:
    /*0*/ virtual ~SwimWithEntityGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIMWITHENTITYGOAL
#endif

//private:
    MCAPI bool _setWantedMob();

private:

};
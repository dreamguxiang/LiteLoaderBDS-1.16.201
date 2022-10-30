// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FindMountGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDMOUNTGOAL
public:
    class FindMountGoal& operator=(class FindMountGoal const &) = delete;
    FindMountGoal(class FindMountGoal const &) = delete;
    FindMountGoal() = delete;
#endif

public:
    /*0*/ virtual ~FindMountGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FINDMOUNTGOAL
#endif
    MCAPI bool isInMountRange();

};
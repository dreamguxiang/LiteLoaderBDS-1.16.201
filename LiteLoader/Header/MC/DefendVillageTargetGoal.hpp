// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DefendVillageTargetGoal : public TargetGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDVILLAGETARGETGOAL
public:
    class DefendVillageTargetGoal& operator=(class DefendVillageTargetGoal const &) = delete;
    DefendVillageTargetGoal(class DefendVillageTargetGoal const &) = delete;
    DefendVillageTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~DefendVillageTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFENDVILLAGETARGETGOAL
#endif

};
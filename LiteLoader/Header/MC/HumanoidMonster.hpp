// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HumanoidMonster : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUMANOIDMONSTER
public:
    class HumanoidMonster& operator=(class HumanoidMonster const &) = delete;
    HumanoidMonster(class HumanoidMonster const &) = delete;
    HumanoidMonster() = delete;
#endif

public:
    /*7*/ virtual ~HumanoidMonster();
    /*32*/ virtual void __unk_vfn_32();
    /*40*/ virtual void normalTick();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*241*/ virtual void __unk_vfn_241();
    /*245*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*246*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*289*/ virtual int getItemUseDuration();
    /*294*/ virtual void __unk_vfn_294();
    /*303*/ virtual bool doHurtTarget(class Actor *);
    /*304*/ virtual void __unk_vfn_304();
    /*338*/ virtual void __unk_vfn_338();
    /*354*/ virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUMANOIDMONSTER
#endif

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Strider : public Animal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRIDER
public:
    class Strider& operator=(class Strider const &) = delete;
    Strider(class Strider const &) = delete;
    Strider() = delete;
#endif

public:
    /*7*/ virtual ~Strider();
    /*32*/ virtual void __unk_vfn_32();
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
    /*239*/ virtual bool shouldTryMakeStepSound();
    /*240*/ virtual float getNextStep(float);
    /*241*/ virtual void __unk_vfn_241();
    /*247*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*336*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*338*/ virtual void __unk_vfn_338();
    /*354*/ virtual void __unk_vfn_354();
    /*355*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRIDER
#endif

};
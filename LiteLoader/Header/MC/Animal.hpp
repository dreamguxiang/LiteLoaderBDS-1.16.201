// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Animal : public Mob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMAL
public:
    class Animal& operator=(class Animal const &) = delete;
    Animal(class Animal const &) = delete;
    Animal() = delete;
#endif

public:
    /*7*/ virtual ~Animal();
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
    /*126*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*241*/ virtual void __unk_vfn_241();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void _onSizeUpdated();
    /*260*/ virtual void __unk_vfn_260();
    /*268*/ virtual int getAmbientSoundPostponeTicks();
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*336*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*338*/ virtual void __unk_vfn_338();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMAL
#endif

};
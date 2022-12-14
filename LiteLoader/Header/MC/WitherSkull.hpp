// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Fireball.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WitherSkull : public Fireball {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERSKULL
public:
    class WitherSkull& operator=(class WitherSkull const &) = delete;
    WitherSkull(class WitherSkull const &) = delete;
    WitherSkull() = delete;
#endif

public:
    /*3*/ virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~WitherSkull();
    /*32*/ virtual void __unk_vfn_32();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual bool isPickable();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*96*/ virtual bool isOnFire() const;
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*220*/ virtual bool canDestroyBlock(class Block const &) const;
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*241*/ virtual void __unk_vfn_241();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*261*/ virtual float getInertia();
    /*262*/ virtual void __unk_vfn_262();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WITHERSKULL
    MCVAPI bool shouldBurn();
#endif

};
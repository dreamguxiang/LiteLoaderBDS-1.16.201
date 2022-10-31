// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FishingHook : public Actor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOK
public:
    class FishingHook& operator=(class FishingHook const &) = delete;
    FishingHook(class FishingHook const &) = delete;
    FishingHook() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~FishingHook();
    /*32*/ virtual void __unk_vfn_32();
    /*37*/ virtual void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /*40*/ virtual void normalTick();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*75*/ virtual float getShadowRadius() const;
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*134*/ virtual void handleEntityEvent(enum class ActorEvent, int);
    /*157*/ virtual bool save(class CompoundTag &);
    /*163*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*241*/ virtual void __unk_vfn_241();
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FISHINGHOOK
#endif
    MCAPI class Actor * getOwner();
    MCAPI class Actor * getTarget();
    MCAPI int retrieve();

//protected:
    MCAPI void _fishPosEvent();
    MCAPI void _fishTeaseEvent();
    MCAPI void _fishhookEvent();
    MCAPI int _getServerFishSpeed();
    MCAPI float _getWaterPercentage();
    MCAPI class HitResult _hitCheck();
    MCAPI void _pullCloser(class Actor &, float);
    MCAPI bool _serverHooked();
    MCAPI bool _serverLured();
    MCAPI void _updateGravity();

protected:

};
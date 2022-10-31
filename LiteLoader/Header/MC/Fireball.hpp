// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Fireball : public Actor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBALL
public:
    class Fireball& operator=(class Fireball const &) = delete;
    Fireball(class Fireball const &) = delete;
    Fireball() = delete;
#endif

public:
    /*7*/ virtual ~Fireball();
    /*32*/ virtual void __unk_vfn_32();
    /*37*/ virtual void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /*40*/ virtual void normalTick();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*74*/ virtual float getShadowHeightOffs();
    /*77*/ virtual void __unk_vfn_77();
    /*81*/ virtual float getBrightness(float) const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual bool isPickable();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*123*/ virtual void __unk_vfn_123();
    /*135*/ virtual float getPickRadius();
    /*163*/ virtual struct ActorUniqueID getSourceUniqueID() const;
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
    /*261*/ virtual float getInertia();
    /*262*/ virtual void __unk_vfn_262();
    /*263*/ virtual enum class ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBALL
    MCVAPI bool canMakeStepSound() const;
    MCVAPI void onHit(class HitResult const &);
    MCVAPI bool shouldBurn();
#endif
    MCAPI Fireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);

//private:
    MCAPI void _setPower(class Vec3 const &);

private:

};
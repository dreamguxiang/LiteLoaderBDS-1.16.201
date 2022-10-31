// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Slime : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIME
public:
    class Slime& operator=(class Slime const &) = delete;
    Slime(class Slime const &) = delete;
    Slime() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Slime();
    /*11*/ virtual void remove();
    /*32*/ virtual void __unk_vfn_32();
    /*40*/ virtual void normalTick();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*75*/ virtual float getShadowRadius() const;
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*83*/ virtual void playerTouch(class Player &);
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*105*/ virtual class Actor * findAttackTarget();
    /*123*/ virtual void __unk_vfn_123();
    /*171*/ virtual void __unk_vfn_171();
    /*179*/ virtual void onSynchedDataUpdate(int);
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
    /*281*/ virtual void aiStep();
    /*286*/ virtual bool checkSpawnRules(bool);
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*336*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*338*/ virtual void __unk_vfn_338();
    /*354*/ virtual void __unk_vfn_354();
    /*356*/ virtual bool canDealDamage();
    /*357*/ virtual enum class LevelSoundEvent getSquishSound();
    /*358*/ virtual void setSlimeSize(int);
    /*359*/ virtual bool doPlayJumpSound();
    /*360*/ virtual bool doPlayLandSound();
    /*361*/ virtual void playJumpSound();
    /*362*/ virtual void playLandSound();
    /*363*/ virtual void decreaseSquish();
    /*364*/ virtual std::unique_ptr<class Slime> createChild(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIME
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Slime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI int getSlimeSize() const;

//protected:
    MCAPI void justJumped();
    MCAPI void justLanded();

protected:

};
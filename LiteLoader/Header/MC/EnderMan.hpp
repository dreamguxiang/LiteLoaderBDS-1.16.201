// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EnderMan : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMAN
public:
    class EnderMan& operator=(class EnderMan const &) = delete;
    EnderMan(class EnderMan const &) = delete;
    EnderMan() = delete;
#endif

public:
    /*7*/ virtual ~EnderMan();
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
    /*125*/ virtual bool shouldRender() const;
    /*171*/ virtual void __unk_vfn_171();
    /*184*/ virtual void __unk_vfn_184();
    /*200*/ virtual bool canBeAffectedByArrow(class MobEffectInstance const &) const;
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*241*/ virtual void __unk_vfn_241();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*245*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*246*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*262*/ virtual void resolveDeathLoot(int, class ActorDamageSource const &);
    /*267*/ virtual enum class LevelSoundEvent getAmbientSound();
    /*274*/ virtual bool hurtEffects(class ActorDamageSource const &, int, bool, bool);
    /*281*/ virtual void aiStep();
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*338*/ virtual void __unk_vfn_338();
    /*347*/ virtual void newServerAiStep();
    /*354*/ virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERMAN
#endif
    MCAPI EnderMan(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI class Block const & getCarryingBlock();
    MCAPI void setCarryingBlock(class Block const &);
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;
    MCAPI static class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> mMayTake;

//private:

private:
    MCAPI static bool mMayTakeIsSetup;

};
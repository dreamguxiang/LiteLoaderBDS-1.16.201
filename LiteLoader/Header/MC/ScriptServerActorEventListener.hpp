// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptServerActorEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTOREVENTLISTENER
public:
    class ScriptServerActorEventListener& operator=(class ScriptServerActorEventListener const &) = delete;
    ScriptServerActorEventListener(class ScriptServerActorEventListener const &) = delete;
    ScriptServerActorEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerActorEventListener();
    /*1*/ virtual enum class EventResult onActorAttack(class Actor &, class Actor &, int);
    /*2*/ virtual enum class EventResult onActorHurt(struct ActorHurtEvent const &);
    /*3*/ virtual enum class EventResult onActorMove(class Actor &, class Vec3 const &);
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual enum class EventResult onActorTick(class Actor &);
    /*6*/ virtual enum class EventResult onActorSneakChanged(class Actor &, bool);
    /*7*/ virtual enum class EventResult onActorStartRiding(class Actor &, class Actor &);
    /*8*/ virtual enum class EventResult onActorStopRiding(class Actor &, bool, bool, bool);
    /*9*/ virtual enum class EventResult onActorDeath(class Actor &, class ActorDamageSource const &, enum class ActorType);
    /*10*/ virtual enum class EventResult onActorDefinitionEventTriggered(struct ActorDefinitionEvent const &);
    /*11*/ virtual enum class EventResult onActorUseItem(class Actor &, class ItemInstance const &, enum class ItemUseMethod);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual enum class EventResult onActorCreated(class Actor &);
    /*14*/ virtual enum class EventResult onProjectileHit(struct ProjectileHitEvent const &);
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual enum class EventResult onActorAcquiredItem(class Actor &, class ItemInstance const &, unsigned int, enum class ItemAcquisitionMethod, class Actor *);
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual enum class EventResult onActorDroppedItem(class Actor &, class ItemInstance const &);
    /*20*/ virtual enum class EventResult onActorCarriedItemChanged(class Actor &, class ItemInstance const &, class ItemInstance const &, enum class HandSlot);
    /*21*/ virtual enum class EventResult onActorEquippedArmor(class Actor &, class ItemInstance const &, enum class ArmorSlot);
    /*22*/ virtual enum class EventResult onActorRemoved(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTOREVENTLISTENER
#endif

};
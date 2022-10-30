// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VanillaServerGameplayEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERGAMEPLAYEVENTLISTENER
public:
    class VanillaServerGameplayEventListener& operator=(class VanillaServerGameplayEventListener const &) = delete;
    VanillaServerGameplayEventListener(class VanillaServerGameplayEventListener const &) = delete;
    VanillaServerGameplayEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLASERVERGAMEPLAYEVENTLISTENER
    MCVAPI enum EventResult onActorHurt(struct ActorHurtEvent const &);
    MCVAPI enum EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    MCVAPI enum EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    MCVAPI enum EventResult onPlayerHurt(class Player &, class ActorDamageSource &);
    MCVAPI enum EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    MCVAPI enum EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    MCVAPI enum EventResult onPlayerOpenContainer(class Player &, enum ContainerType, class BlockPos const &, struct ActorUniqueID);
#endif

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RaidBossComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDBOSSCOMPONENT
public:
    class RaidBossComponent& operator=(class RaidBossComponent const &) = delete;
    RaidBossComponent(class RaidBossComponent const &) = delete;
    RaidBossComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAIDBOSSCOMPONENT
#endif
    MCAPI RaidBossComponent(class RaidBossComponent &&);
    MCAPI std::string getName();
    MCAPI bool isWithinRange(class Mob const &);
    MCAPI class RaidBossComponent & operator=(class RaidBossComponent &&);
    MCAPI void removeBossBar(class Actor &);
    MCAPI void sendRegistryMessages(class Actor &);
    MCAPI void updateBossBarStats(class Actor &, class Raid const &);

//private:
    MCAPI void _broadcastBossEvent(enum BossEventUpdateType, class Actor &);
    MCAPI void _sendBossEvent(enum BossEventUpdateType, class Player &);

private:

};
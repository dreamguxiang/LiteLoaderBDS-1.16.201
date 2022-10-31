// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BossComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSCOMPONENT
public:
    class BossComponent& operator=(class BossComponent const &) = delete;
    BossComponent(class BossComponent const &) = delete;
    BossComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSCOMPONENT
#endif
    MCAPI BossComponent(class BossComponent &&);
    MCAPI void addPlayerToParty(class mce::UUID, int);
    MCAPI void broadcastBossEvent(class Actor &, enum class BossEventUpdateType);
    MCAPI class BossComponent & operator=(class BossComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void sendDeathTelemetry(class Actor &);
    MCAPI void unRegisterPlayer(class Actor &, class Player *);

//private:
    MCAPI void _sendBossEvent(class Actor &, enum class BossEventUpdateType, class Player *);

private:

};
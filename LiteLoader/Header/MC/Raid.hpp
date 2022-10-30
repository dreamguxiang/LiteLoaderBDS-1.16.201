// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Raid {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAID
public:
    class Raid& operator=(class Raid const &) = delete;
    Raid(class Raid const &) = delete;
    Raid() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAID
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI float getBossBarFilledFraction() const;
    MCAPI void readAdditionalSaveData(class CompoundTag const &);
    MCAPI void tick();
    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

//private:
    MCAPI void _tickGroupInPlay();

private:

};
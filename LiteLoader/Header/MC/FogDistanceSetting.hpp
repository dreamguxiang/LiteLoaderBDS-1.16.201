// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct FogDistanceSetting {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGDISTANCESETTING
public:
    struct FogDistanceSetting& operator=(struct FogDistanceSetting const &) = delete;
    FogDistanceSetting(struct FogDistanceSetting const &) = delete;
    FogDistanceSetting() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOGDISTANCESETTING
#endif
    MCAPI FogDistanceSetting(class mce::Color const &, float, float, enum FogDistanceSetting::DistanceType);
    MCAPI static struct FogDistanceSetting const ZERO_SETTING;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScaleByAgeSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEBYAGESYSTEM
public:
    class ScaleByAgeSystem& operator=(class ScaleByAgeSystem const &) = delete;
    ScaleByAgeSystem(class ScaleByAgeSystem const &) = delete;
    ScaleByAgeSystem() = delete;
#endif

public:
    /*0*/ virtual ~ScaleByAgeSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCALEBYAGESYSTEM
#endif

};
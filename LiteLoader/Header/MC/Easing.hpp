// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Easing {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EASING
public:
    class Easing& operator=(class Easing const &) = delete;
    Easing(class Easing const &) = delete;
    Easing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EASING
#endif

//private:

private:
    MCAPI static std::vector<class std::function<float (float, float, float)>> mEasingFuncs;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MultiplyValueAmplifier {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLYVALUEAMPLIFIER
public:
    class MultiplyValueAmplifier& operator=(class MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier(class MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier() = delete;
#endif

public:
    /*0*/ virtual ~MultiplyValueAmplifier();
    /*1*/ virtual float getAmount(int, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIPLYVALUEAMPLIFIER
#endif

};
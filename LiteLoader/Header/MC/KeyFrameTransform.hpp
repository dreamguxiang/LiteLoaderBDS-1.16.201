// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class KeyFrameTransform {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORM
public:
    class KeyFrameTransform& operator=(class KeyFrameTransform const &) = delete;
    KeyFrameTransform(class KeyFrameTransform const &) = delete;
    KeyFrameTransform() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KEYFRAMETRANSFORM
#endif
    MCAPI KeyFrameTransform(class KeyFrameTransform &&);
    MCAPI class KeyFrameTransform & operator=(class KeyFrameTransform &&);
    MCAPI bool optimizeAndGetDataValues(class Vec3 &, class Vec3 &);
    MCAPI void set(class ExpressionNode const &);
    MCAPI void set(class ExpressionNode const &, int);
    MCAPI ~KeyFrameTransform();
    MCAPI static void computeCubicPolynomial(class KeyFrameTransform *, class KeyFrameTransform &, class KeyFrameTransform &, class KeyFrameTransform *);

};
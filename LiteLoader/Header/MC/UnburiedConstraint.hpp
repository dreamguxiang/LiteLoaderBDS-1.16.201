// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class UnburiedConstraint {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNBURIEDCONSTRAINT
public:
    class UnburiedConstraint& operator=(class UnburiedConstraint const &) = delete;
    UnburiedConstraint(class UnburiedConstraint const &) = delete;
    UnburiedConstraint() = delete;
#endif

public:
    /*0*/ virtual ~UnburiedConstraint();
    /*1*/ virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum Rotation const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UNBURIEDCONSTRAINT
#endif

};
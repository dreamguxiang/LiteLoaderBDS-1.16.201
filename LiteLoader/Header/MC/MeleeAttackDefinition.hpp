// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MeleeAttackDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEATTACKDEFINITION
public:
    class MeleeAttackDefinition& operator=(class MeleeAttackDefinition const &) = delete;
    MeleeAttackDefinition(class MeleeAttackDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEATTACKDEFINITION
#endif
    MCAPI MeleeAttackDefinition();
    MCAPI void initialize(class EntityContext &, class MeleeAttackGoal &);

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DespawnComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNCOMPONENT
public:
    class DespawnComponent& operator=(class DespawnComponent const &) = delete;
    DespawnComponent(class DespawnComponent const &) = delete;
    DespawnComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DESPAWNCOMPONENT
#endif

//private:
    MCAPI bool _tryStandardDespawnRules(class Actor &) const;

private:

};
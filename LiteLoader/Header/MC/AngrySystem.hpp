// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AngrySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYSYSTEM
public:
    class AngrySystem& operator=(class AngrySystem const &) = delete;
    AngrySystem(class AngrySystem const &) = delete;
    AngrySystem() = delete;
#endif

public:
    /*0*/ virtual ~AngrySystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANGRYSYSTEM
#endif

//private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class ActorComponent, class AngryComponent> &);

private:

};
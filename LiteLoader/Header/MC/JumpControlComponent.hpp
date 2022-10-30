// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class JumpControlComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROLCOMPONENT
public:
    class JumpControlComponent& operator=(class JumpControlComponent const &) = delete;
    JumpControlComponent(class JumpControlComponent const &) = delete;
    JumpControlComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROLCOMPONENT
#endif
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent &&);
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);

};
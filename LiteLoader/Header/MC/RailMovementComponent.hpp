// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RailMovementComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTCOMPONENT
public:
    class RailMovementComponent& operator=(class RailMovementComponent const &) = delete;
    RailMovementComponent(class RailMovementComponent const &) = delete;
    RailMovementComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAILMOVEMENTCOMPONENT
#endif
    MCAPI void moveAlongTrack(class Actor &, class Block const &, class BlockPos const &);

};
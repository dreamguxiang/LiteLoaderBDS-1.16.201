// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IChunkLoadedAction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICHUNKLOADEDACTION
public:
    class IChunkLoadedAction& operator=(class IChunkLoadedAction const &) = delete;
    IChunkLoadedAction(class IChunkLoadedAction const &) = delete;
    IChunkLoadedAction() = delete;
#endif

public:
    /*0*/ virtual ~IChunkLoadedAction();
    /*1*/ virtual void execute(class ServerLevel &, class Dimension &) = 0;
    /*2*/ virtual void serialize(class CompoundTag &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICHUNKLOADEDACTION
#endif
    MCAPI static bool isValidTag(class CompoundTag const &);

};
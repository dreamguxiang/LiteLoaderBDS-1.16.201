// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ContainerScreenContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENCONTEXT
public:
    class ContainerScreenContext& operator=(class ContainerScreenContext const &) = delete;
    ContainerScreenContext() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSCREENCONTEXT
#endif
    MCAPI ContainerScreenContext(class ContainerScreenContext const &);
    MCAPI class Actor * tryGetActor() const;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockComponentFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTFACTORY
public:
    class BlockComponentFactory& operator=(class BlockComponentFactory const &) = delete;
    BlockComponentFactory(class BlockComponentFactory const &) = delete;
    BlockComponentFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTFACTORY
#endif
    MCAPI void initializeFactory(class Experiments const &);

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SpawnFinder {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNFINDER
public:
    class SpawnFinder& operator=(class SpawnFinder const &) = delete;
    SpawnFinder(class SpawnFinder const &) = delete;
    SpawnFinder() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNFINDER
#endif
    MCAPI static class std::optional<class BlockPos> findStandupPosition(class BlockPos const &, class BlockSource const &);
    MCAPI static bool isStandupPosition(class BlockPos const &, class BlockSource const &);

};
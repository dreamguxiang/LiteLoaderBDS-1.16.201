// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RandomScatteredLargeFeature : public StructureFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSCATTEREDLARGEFEATURE
public:
    class RandomScatteredLargeFeature& operator=(class RandomScatteredLargeFeature const &) = delete;
    RandomScatteredLargeFeature(class RandomScatteredLargeFeature const &) = delete;
    RandomScatteredLargeFeature() = delete;
#endif

public:
    /*0*/ virtual ~RandomScatteredLargeFeature();
    /*2*/ virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource &, class BlockPos const &, class BlockPos &);
    /*3*/ virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int);
    /*4*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource &, class Random &, class ChunkPos const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSCATTEREDLARGEFEATURE
#endif
    MCAPI RandomScatteredLargeFeature(unsigned int);
    MCAPI static void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);

};
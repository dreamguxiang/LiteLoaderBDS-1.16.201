// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FlatWorldGenerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLATWORLDGENERATOR
public:
    class FlatWorldGenerator& operator=(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLATWORLDGENERATOR
    MCVAPI bool findNearestFeature(enum class StructureFeatureType, class BlockPos const &, class BlockPos &);
    MCVAPI class BlockPos findSpawnPosition() const;
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    MCVAPI enum class StructureFeatureType getFeatureTypeAt(class BlockPos const &);
    MCVAPI void loadChunk(class LevelChunk &, bool);
    MCVAPI bool postProcess(class ChunkViewSource &);
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    MCAPI FlatWorldGenerator(class Dimension &, unsigned int, class Json::Value const &);

//private:
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &);

private:

};
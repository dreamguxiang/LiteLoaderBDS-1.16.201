// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TheEndGenerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THEENDGENERATOR
public:
    class TheEndGenerator& operator=(class TheEndGenerator const &) = delete;
    TheEndGenerator(class TheEndGenerator const &) = delete;
    TheEndGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THEENDGENERATOR
    MCVAPI bool findNearestFeature(enum StructureFeatureType, class BlockPos const &, class BlockPos &);
    MCVAPI class BlockPos findSpawnPosition() const;
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    MCVAPI enum StructureFeatureType getFeatureTypeAt(class BlockPos const &);
    MCVAPI void loadChunk(class LevelChunk &, bool);
    MCVAPI bool postProcess(class ChunkViewSource &);
    MCVAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    MCAPI TheEndGenerator(class Dimension &, unsigned int);
    MCAPI void buildSurfaces(class BlockVolume &, class ChunkPos const &, class LevelChunk &);

//private:
    MCAPI void getHeights(class std::array<float, 297> &, int, int, int);
    MCAPI float getIslandHeightValue(int, int, int, int);

private:

};
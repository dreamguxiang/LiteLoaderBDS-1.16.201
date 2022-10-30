// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorldGenerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENERATOR
public:
    class WorldGenerator& operator=(class WorldGenerator const &) = delete;
    WorldGenerator(class WorldGenerator const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDGENERATOR
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk &);
    MCVAPI void debugRender();
#endif
    MCAPI WorldGenerator();
    MCAPI class std::optional<class BlockPos> searchForBiome(class std::set<int, struct std::less<int>, class std::allocator<int>> const &, int) const;
    MCAPI static enum StructureFeatureType getFeatureId(std::string const &);
    MCAPI static class gsl::basic_string_span<char const, -1> getFeatureName(enum StructureFeatureType);

};
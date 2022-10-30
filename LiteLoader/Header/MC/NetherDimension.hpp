// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NetherDimension {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERDIMENSION
public:
    class NetherDimension& operator=(class NetherDimension const &) = delete;
    NetherDimension(class NetherDimension const &) = delete;
    NetherDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERDIMENSION
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag &, enum LimboEntitiesVersion);
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum StorageVersion);
    MCVAPI class std::tuple<std::unique_ptr<class ChunkSource>, class WorldGenerator *> createGenerator();
    MCVAPI void fixWallChunk(class ChunkSource &, class LevelChunk &);
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    MCVAPI int getDefaultBiome() const;
    MCVAPI float getMaxFogEnd() const;
    MCVAPI float getMaxFogStart() const;
    MCVAPI float getTimeOfDay(int, float) const;
    MCVAPI void init();
    MCVAPI bool isFoggyAt(int, int) const;
    MCVAPI bool isNaturalDimension() const;
    MCVAPI bool isValidSpawn(int, int) const;
    MCVAPI bool mayRespawnViaBed() const;
    MCVAPI bool showSky() const;
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
    MCVAPI void upgradeLevelChunk(class ChunkSource &, class LevelChunk &);
#endif

};
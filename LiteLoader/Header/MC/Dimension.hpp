// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include "BlockSource.hpp"
#include "LevelListener.hpp"
#include "SavedData.hpp"
#include "Bedrock.hpp"
#include "Brightness.hpp"

const class DimensionHeightRange {
public:
    __int16 mMin;
    __int16 mMax;
};

struct BrightnessPair {
public:
    Brightness sky;
    Brightness block;
};

#include "Weather.hpp"
#include "Seasons.hpp"
#include "CircuitSystem.hpp"
#include "BeardAndShaverStorage.hpp"
#include "LevelChunkGarbageCollector.hpp"
#undef BEFORE_EXTRA

class Dimension : public LevelListener, SavedData, Bedrock::EnableNonOwnerReferences {

#define AFTER_EXTRA
public:
    Level* mLevel;
    DimensionHeightRange mHeightRange;
    __int16 mSeaLevel;
    std::unique_ptr<BlockSource> mBlockSource;
    float mMobsPerChunkSurface[7];
    float mMobsPerChunkUnderground[7];
    BrightnessPair mDefaultBrightness;
    std::unique_ptr<class BaseLightTextureImageBuilder> mLightTextureImageBuilder;
    std::unique_ptr<class DimensionBrightnessRamp> mDimensionBrightnessRamp;
    std::string mName;
    AutomaticID<Dimension, int> mId;
    bool mUltraWarm;
    bool mHasCeiling;
    bool mHasWeather;
    bool mHasSkylight;
    Brightness mSkyDarken;
    std::unique_ptr<class BlockEventDispatcher> mDispatcher;
    std::unique_ptr<class TaskGroup> mTaskGroup;
    std::unique_ptr<class PostprocessingManager> mPostProcessingManager;
    std::unique_ptr<ChunkSource> mChunkSource;
    class WorldGenerator* mWorldGenerator;
    std::unique_ptr<Weather> mWeather;
    std::unique_ptr<Seasons> mSeasons;
    std::unique_ptr<CircuitSystem> mCircuitSystem;
    const int CIRCUIT_TICK_RATE;
    int mCircuitSystemTickRate;
    std::unordered_map<ActorUniqueID, gsl::not_null<class Actor*>> mEntityIdLookup;
    BeardAndShaverStorage mBeardandShaverStorage;
    std::unordered_map<ChunkPos, std::vector<std::unique_ptr<CompoundTag>>> mLimboEntities;
    std::set<ActorUniqueID> mEntitiesToMoveChunks;
    std::unique_ptr<class TickingAreaList> mTickingAreaList;
    LevelChunkGarbageCollector mLevelChunkGarbageCollector;
    std::set<ActorUniqueID> mWitherIDs;
    std::unique_ptr<class RuntimeLightingManager> mRuntimeLightingManager;
    std::unique_ptr<class LevelChunkBuilderData> mLevelChunkBuilderData;
    std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<__int64, std::ratio<1, 1000000000>>> mLastPruneTime;
    std::unique_ptr<class ChunkBuildOrderPolicyBase> mChunkBuildOrderPolicy;
    std::unique_ptr<class VillageManager> mVillageManager;
    std::vector <struct  NetworkIdentifierWithSubId> mTemporaryPlayerIds;
    std::unique_ptr<class ChunkLoadActionList> mChunkLoadActionList;
	
    inline BlockSource& getBlockSourceFromMainChunkSource() const{
        return *mBlockSource.get();
    };
    inline int getHeight(){
        return mHeightRange.mMax;
    };
    inline AutomaticID<class Dimension, int> getDimensionId() const{
        return mId;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSION
public:
    class Dimension& operator=(class Dimension const &) = delete;
    Dimension(class Dimension const &) = delete;
    Dimension() = delete;
#endif

public:

    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
    MCVAPI void deserialize(class CompoundTag const &);
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;
    MCVAPI class DimensionBrightnessRamp const & getBrightnessRamp() const;
    MCVAPI float getClearColorScale();
    MCVAPI short getCloudHeight() const;
    MCVAPI int getDefaultBiome() const;
    MCVAPI class BaseLightTextureImageBuilder * getLightTextureImageBuilder() const;
    MCVAPI float getMaxFogEnd() const;
    MCVAPI float getMaxFogStart() const;
    MCVAPI class BlockPos getSpawnPos() const;
    MCVAPI int getSpawnYPosition() const;
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    MCVAPI float getTimeOfDay(int, float) const;
    MCVAPI bool hasBedrockFog();
    MCVAPI bool hasGround() const;
    MCVAPI void init();
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const &, class Player &) const;
    MCVAPI bool isDay() const;
    MCVAPI bool isEntityRelevantForPlayer(class Player &, class Actor const &) const;
    MCVAPI bool isFoggyAt(int, int) const;
    MCVAPI bool isNaturalDimension() const;
    MCVAPI bool isValidSpawn(int, int) const;
    MCVAPI bool mayRespawnViaBed() const;
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *);
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    MCVAPI void onLevelDestruction(std::string const &);
    MCVAPI void sendBroadcast(class Packet const &, class Player *);
    MCVAPI void serialize(class CompoundTag &) const;
    MCVAPI bool showSky() const;
    MCVAPI void startLeaveGame();
    MCVAPI void tick();
    MCVAPI void tickRedstone();
    MCVAPI ~Dimension();

    MCAPI Dimension(class Level &, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler &, std::string);
    MCAPI void _onNewTickingEntity(class Actor &);
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool);
    MCAPI class Player * fetchNearestAttackablePlayer(class BlockPos, float, class Actor *);
    MCAPI class Player * fetchNearestAttackablePlayer(class Actor &, float);
    MCAPI class Player * fetchNearestPlayer(class Actor &, float);
    MCAPI class Player * fetchNearestPlayer(float, float, float, float, bool);
    MCAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    MCAPI void forEachPlayer(class std::function<bool (class Player &)>);
    MCAPI void forEachPlayer(class std::function<bool (class Player const &)>) const;
    MCAPI float getMoonBrightness() const;
    MCAPI int getMoonPhase() const;
    MCAPI float getTimeOfDay(float) const;
    MCAPI void removeActorByID(struct ActorUniqueID const &);
    MCAPI void sendPacketForEntity(class Actor const &, class Packet const &, class Player const *);
    MCAPI void sendPacketForPosition(class BlockPos const &, class Packet const &, class Player const *);
    MCAPI void transferEntity(class Vec3 const &, std::unique_ptr<class CompoundTag>);
    MCAPI void transferEntityToUnloadedChunk(class Vec3 const &, std::unique_ptr<class CompoundTag>);
    MCAPI void tryGarbageCollectStructures();
    MCAPI class BlockSource * tryGetClosestPublicRegion(class ChunkPos const &) const;
    MCAPI void tryLoadLimboEntities(class ChunkPos const &);
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL;

//protected:
    MCAPI void _completeEntityTransfer(class BlockSource &, std::unique_ptr<class Actor>);

//private:
    MCAPI void _tickEntityChunkMoves();

protected:

private:

};
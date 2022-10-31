// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "BlockActorDataPacket.hpp"
#include "ActorTerrainInterlockData.hpp"
class Container;
class CompoundTag;
class BlockSource;

#undef BEFORE_EXTRA

class __declspec(align(8))  BlockActor {

public:
    int mTickCount;
    const class Block* mBlock;
    float mDestroyTimer;
    Vec3 mDestroyDirection;
    float mDestroyProgress;
    BlockPos mPosition;
    AABB mAABB;
    const BlockActorType mType;
    BlockActorRendererId mRendererId;
    std::string mCustomName;
    std::string mFilteredCustomName;
    int mRepairCost;
    bool mClientSideOnly;
    bool mIsMovable;
    bool mSaveCustomName;
    bool mCanRenderCustomName;
    const float signShadowRadius;
    ActorTerrainInterlockData mTerrainInterlockData;
    bool mChanged;

public:
    LIAPI bool refreshData();
     LIAPI bool refreshData(BlockSource* bs);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool setNbt(CompoundTag* nbt, BlockSource* bs);
    static unsigned int getBlockEntityType(Block* block);

    inline void setChanged(){
        mChanged = 1;
    }
    inline BlockPos const & getPosition() const{
        return mPosition;
    };

    inline enum class BlockActorType getType(){
        return mType;
    }

    inline std::unique_ptr<BlockActorDataPacket> getServerUpdatePacket(BlockSource &bs){
        return _getUpdatePacket(bs);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTOR
public:
    class BlockActor& operator=(class BlockActor const &) = delete;
    BlockActor(class BlockActor const &) = delete;
    BlockActor() = delete;
#endif

public:
    /*0*/ virtual ~BlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*3*/ virtual bool saveItemInstanceData(class CompoundTag &);
    /*4*/ virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /*5*/ virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /*6*/ virtual void onCustomTagLoadDone(class BlockSource &);
    /*7*/ virtual void tick(class BlockSource &);
    /*8*/ virtual bool isFinished();
    /*9*/ virtual void onChanged(class BlockSource &);
    /*10*/ virtual bool isMovable(class BlockSource &);
    /*11*/ virtual bool isCustomNameSaved();
    /*12*/ virtual void onPlace(class BlockSource &);
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void onRemoved(class BlockSource &);
    /*15*/ virtual void triggerEvent(int, int);
    /*16*/ virtual void clearCache();
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual float getShadowRadius(class BlockSource &) const;
    /*19*/ virtual bool hasAlphaLayer() const;
    /*20*/ virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /*21*/ virtual void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /*22*/ virtual std::string const & getCustomName() const;
    /*23*/ virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /*24*/ virtual std::string getName() const;
    /*25*/ virtual void setCustomName(std::string const &);
    /*26*/ virtual std::string getImmersiveReaderText(class BlockSource &);
    /*27*/ virtual int getRepairCost() const;
    /*28*/ virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual float getDeletionDelayTimeSeconds() const;
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /*36*/ virtual bool _playerCanUpdate(class Player const &) const;
    /*37*/ virtual int getOutputSignal();

    MCVAPI class Container * getContainer();
    MCVAPI class Container const * getContainer() const;
    MCVAPI void onChunkLoaded(class LevelChunk &);
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    MCVAPI void onMove();
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);

	
    MCAPI BlockActor(enum class BlockActorType, class BlockPos const &, std::string const &);
    MCAPI static void initBlockEntities();
    MCAPI static class std::shared_ptr<class BlockActor> loadStatic(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI static void setId(enum class BlockActorType, std::string const &);

//protected:
    MCAPI void _resetAABB();

//private:

protected:

private:
    MCAPI static class std::map<enum class BlockActorType, std::string, struct std::less<enum class BlockActorType>, class std::allocator<struct std::pair<enum class BlockActorType const, std::string>>> mClassIdMap;
    MCAPI static class std::map<std::string, enum class BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>> mIdClassMap;

};

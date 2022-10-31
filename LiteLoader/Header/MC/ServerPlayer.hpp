// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Player.hpp"

#define BEFORE_EXTRA
#include "NetworkChunkPublisher.hpp"
#include "InventoryMenu.hpp"
#undef BEFORE_EXTRA

class ServerPlayer : public Player {

#define AFTER_EXTRA
public:
    //NetworkHandler* mNetworkHandler;
    //std::function<void __cdecl(ServerPlayer&)> mOnPlayerLoadedCallback;
    //NetworkChunkPublisher mChunkPublisherView;
    //InventoryMenu mInventoryMenu;
    //ContainerID mContainerCounter;
    //unsigned int mMaxChunkRadius;
    //bool mLoading;
    //bool mIsTeacher;
    //bool mTeleportedThisTick;
    //bool mLocalPlayerInitialized;
    //Tick mPrevShieldBlockingTick;
    //std::unique_ptr<CompoundTag> mLostDataTag;
    //unsigned int mClientViewRadius;
    //unsigned int mClientRequestedRadius;
    //int mRemainingStructureRefreshTicks;
    //StructureFeatureType mCurrentStructureFeature;
    //std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<__int64, std::ratio<1, 1000000000>>> mLastKnownSyncTime;
    //std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<__int64, std::ratio<1, 1000000000>>> mLastKnownDesyncTime;
    //float mCheatingStrikeScore;
    //std::unordered_map<ActorUniqueID, ServerPlayer::NearbyActor> mNearbyActors;
    //std::unique_ptr<ServerMoveInputHandler> mMoveInputHandler;
    //InputMode mCurrentInputMode;
    //ClientPlayMode mPlayMode;
    //PlayerMovementTelemetryData mMovementData;
    //CallbackToken mCloseContainerToken;
    //std::string mLoginUid;
    //Vec3 mLastValidRecvPos;
    //bool mLastRecvOnground;
    //bool mCameraDeparted;
    //bool mThirdPersonPerspective;
    //Vec2 mRotationToCamera;
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYER
public:
    class ServerPlayer& operator=(class ServerPlayer const &) = delete;
    ServerPlayer(class ServerPlayer const &) = delete;
    ServerPlayer() = delete;
#endif

public:
    /*3*/ virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*5*/ virtual void _serverInitItemStackIds();
    /*7*/ virtual ~ServerPlayer();
    /*32*/ virtual void __unk_vfn_32();
    /*40*/ virtual void normalTick();
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*89*/ virtual void __unk_vfn_89();
    /*91*/ virtual void __unk_vfn_91();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*106*/ virtual bool isValidTarget(class Actor *) const;
    /*123*/ virtual void __unk_vfn_123();
    /*134*/ virtual void handleEntityEvent(enum class ActorEvent, int);
    /*145*/ virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /*154*/ virtual void setOffhandSlot(class ItemStack const &);
    /*159*/ virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /*170*/ virtual bool canChangeDimensions() const;
    /*171*/ virtual void __unk_vfn_171();
    /*172*/ virtual void changeDimension(class AutomaticID<class Dimension, int>, bool);
    /*173*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*174*/ virtual void checkFallDamage(float, bool);
    /*176*/ virtual void handleFallDistanceOnServer(float, bool);
    /*184*/ virtual void __unk_vfn_184();
    /*201*/ virtual void onEffectAdded(class MobEffectInstance &);
    /*202*/ virtual void onEffectUpdated(class MobEffectInstance const &);
    /*203*/ virtual void onEffectRemoved(class MobEffectInstance &);
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*235*/ virtual void die(class ActorDamageSource const &);
    /*241*/ virtual void __unk_vfn_241();
    /*249*/ virtual void __unk_vfn_249();
    /*260*/ virtual void __unk_vfn_260();
    /*261*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*281*/ virtual void aiStep();
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*311*/ virtual void hurtArmor(class ActorDamageSource const &, int);
    /*314*/ virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /*315*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*316*/ virtual void sendArmor(class std::bitset<4> const &);
    /*327*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*328*/ virtual void sendInventory(bool);
    /*338*/ virtual void __unk_vfn_338();
    /*354*/ virtual void __unk_vfn_354();
    /*355*/ virtual void prepareRegion(class ChunkSource &);
    /*356*/ virtual void destroyRegion();
    /*357*/ virtual void suspendRegion();
    /*358*/ virtual void resendAllChunks();
    /*361*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*362*/ virtual int tickWorld(struct Tick const &);
    /*363*/ virtual void __unk_vfn_363();
    /*367*/ virtual void checkMovementStats(class Vec3 const &);
    /*368*/ virtual void __unk_vfn_368();
    /*369*/ virtual void __unk_vfn_369();
    /*371*/ virtual void __unk_vfn_371();
    /*373*/ virtual void __unk_vfn_373();
    /*376*/ virtual void setPermissions(enum class CommandPermissionLevel);
    /*379*/ virtual void __unk_vfn_379();
    /*380*/ virtual void __unk_vfn_380();
    /*381*/ virtual void openTrading(struct ActorUniqueID const &, bool);
    /*383*/ virtual void __unk_vfn_383();
    /*384*/ virtual void __unk_vfn_384();
    /*385*/ virtual void openInventory();
    /*386*/ virtual void __unk_vfn_386();
    /*387*/ virtual void __unk_vfn_387();
    /*388*/ virtual void displayTextObjectMessage(class TextObjectRoot const &);
    /*389*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /*390*/ virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /*392*/ virtual void stopSleepInBed(bool, bool);
    /*396*/ virtual void __unk_vfn_396();
    /*397*/ virtual void __unk_vfn_397();
    /*398*/ virtual bool isHostingPlayer() const;
    /*399*/ virtual bool isLoading() const;
    /*400*/ virtual bool isPlayerInitialized() const;
    /*401*/ virtual void __unk_vfn_401();
    /*404*/ virtual void setPlayerGameType(enum class GameType);
    /*407*/ virtual void __unk_vfn_407();
    /*411*/ virtual void setContainerData(class IContainerManager &, int, int);
    /*412*/ virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /*414*/ virtual void refreshContainer(class IContainerManager &);
    /*417*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /*418*/ virtual bool isEntityRelevant(class Actor const &);
    /*419*/ virtual bool isTeacher() const;
    /*420*/ virtual void onSuspension();
    /*421*/ virtual void onLinkedSlotsChanged();
    /*425*/ virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /*426*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /*427*/ virtual void sendNetworkPacket(class Packet &) const;
    /*428*/ virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /*429*/ virtual class MoveInputHandler * getMoveInputHandler();
    /*430*/ virtual enum class InputMode getInputMode() const;
    /*431*/ virtual enum class ClientPlayMode getPlayMode() const;
    /*432*/ virtual void reportMovementTelemetry(enum class MovementEventType);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    MCVAPI void frameUpdate(class FrameUpdateContextBase &);
    MCVAPI void openNpcInteractScreen(class Actor &);
    MCVAPI void openPortfolio();
#endif
    MCAPI ServerPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, unsigned char, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, int, bool);
    MCAPI void checkCheating(class Vec3 const &);
    MCAPI void doDeleteContainerManager(bool);
    MCAPI unsigned int findClientChunkRadius(unsigned int) const;
    MCAPI void handleActorPickRequestOnServer(class Actor const &, bool);
    MCAPI enum class ContainerID openUnmanagedContainer();
    MCAPI bool recoverR5LostInventoryAndXP();
    MCAPI void selectItem(class ItemStack const &);
    MCAPI void setClientChunkRadius(unsigned int);

//private:
    MCAPI void _removeNearbyEntities();
    MCAPI void _scanForNearbyActors();
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void _updateNearbyActors();

private:

};
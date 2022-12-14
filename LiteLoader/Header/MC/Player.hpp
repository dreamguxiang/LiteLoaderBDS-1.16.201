// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ServerPlayer;
class Player;
class NetworkIdentifier;
class Certificate;
class Container;
class CompoundTag;
//#include "UserEntityIdentifierComponent.hpp"
#include "ScorePacketInfo.hpp"
#include "DataItem.hpp"
#include "../I18nAPI.h"
#include "AttributeInstance.hpp"
#include "Abilities.hpp"
#include "NetworkIdentifier.hpp"
#include "SerializedSkin.hpp"
#include "Stopwatch.hpp"
#include "PlayerInventory.hpp"
#include "ItemGroup.hpp"
#include "PlayerUIContainer.hpp"
#include "InventoryTransactionManager.hpp"
#include "Random.hpp"
#include "PlayerRespawnBlockRadiusRandomizer.hpp"

#undef BEFORE_EXTRA
class PlayerRespawnRandomizer {
public:
    Random mRandom;
    unsigned int mSpawnRadius;
    unsigned int mSquaredRadius;
    PlayerRespawnBlockRadiusRandomizer mPrimaryRandomizer;
    PlayerRespawnBlockRadiusRandomizer mSecondaryRandomizer;
    Vec3 mSpawnCenter;
    Vec3 mPrimaryOffset;
    Vec3 mPrimaryScale;
};
static_assert(sizeof(PlayerRespawnRandomizer) == 2608);

class SkinAdjustments {
public:
    unsigned int mAnimOverrideBitmask;
};

class __declspec(align(8)) NameTagInfo {
public:
    std::string mPrefix;
    std::string mPrefixColor;
    std::string mNameColor;
    std::string mSuffixColor;
    std::string mSuffix;
    bool mEnable;
    bool mRenderNameColor;
};

class BedHelper {
private:
    float mNorthDir;
    float mSouthDir;
    float mWestDir;
    float mEastDir;
    float mBedOffsetX;
    float mBedOffsetZ;
    float mMobOffsetWestX;
    float mMobOffsetEastX;
    float mMobOffsetSouthZ;
    float mMobOffsetNorthZ;
};

class __declspec(align(8)) Player : public Mob {

#define AFTER_EXTRA

public:
    class CachedSpawnData {
    public:
        AutomaticID<Dimension, int> mRespawnDimensionId;
        Vec3 mActualRespawnPosition;
        BlockPos mRequestedRespawnPosition;
        bool mHasRespawnPosition;
        BlockPos mSharedSpawnPosition;
        bool mRespawnReady;
        Vec3 mPlayerPos;
        bool mIsForcedRespawn;
        bool mIsAdventure;
        bool mIsFlyingOrNotOverworld;
        bool mPositionLoadedFromSave;
    };
    class PlayerSpawnPoint {
    public:
        BlockPos mSpawnBlockPos;
        BlockPos mPlayerPosition;
        AutomaticID<Dimension, int> mDimension;
    };
	
public:
    int mCastawayTimer;
    bool mAteKelp;
    int mLastBiome;
    std::vector<int> mOceanBiomes;
    bool mCastawaySent;
    bool sailseasSent;
    enum class DimensionState : int {
        Ready = 0x0,
        Pending = 0x1,
        WaitingServerResponse = 0x2,
        WaitingArea = 0x3,
    } mDimensionState;
    bool mServerHasMovementAuthority;
    char mUserType;
    int mScore;
    float mOBob;
    float mBob;
    bool mHandsBusy;
    std::string mName;
    BuildPlatform mBuildPlatform;
    Abilities mAbilities;
    const NetworkIdentifier mOwner;
    std::string mUniqueName;
    std::string mServerId;
    std::string mSelfSignedId;
    std::string mPlatformOfflineId;
    unsigned __int64 mClientRandomId;
    const mce::UUID mClientUUID;
    std::unique_ptr<Certificate> mCertificate;
    std::string mPlatformId;
    ActorUniqueID mPendingRideID;
    ActorUniqueID mPendingLeftShoulderRiderID;
    ActorUniqueID mPendingRightShoulderRiderID;
    ActorUniqueID mInteractTarget;
    Vec3 mInteractTargetPos;
    bool mHasFakeInventory;
    bool mIsRegionSuspended;
    std::shared_ptr<class ChunkViewSource> mChunkSource;
    std::shared_ptr<class ChunkViewSource> mSpawnChunkSource;
    std::unique_ptr<class BlockSource> mOwnedBlockSource;
    bool mUpdateMobs;
    Vec3 mFirstPersonLatestHandOffset;
    Vec3 mCapePosO;
    Vec3 mCapePos;
    float mPaddleForces[2];
    bool mIsPaddling[2];
    float mDistanceSinceTravelledEvent;
    float mDistanceSinceTransformEvent;
    std::shared_ptr<class IContainerManager> mContainerManager;
    std::unique_ptr<class PlayerInventory> mInventory;

    SerializedSkin mSkin;
    std::vector<ItemInstance> mCreativeItemList;
    std::array<std::vector<ItemGroup>, 4> mFilteredCreativeItemList;
    unsigned __int8 mClientSubId;
    std::string mPlatformOnlineId;//getactorrender
    enum class SpawnPositionState : int {
        InitializeSpawnPositionRandomizer = 0x0,
        WaitForClientAck = 0x1,
        DetermineDimension = 0x2,
        ChangeDimension = 0x3,
        WaitForDimension = 0x4,
        ChooseSpawnArea = 0x5,
        CheckLoadedChunk = 0x6,
        ChooseSpawnPosition = 0x7,
        SpawnComplete = 0x8,
    } mSpawnPositionState;
    enum class SpawnPositionSource : int {
        Randomizer = 0x0,
        Respawn = 0x1,
        Teleport = 0x2,
        Static = 0x3,
    } mSpawnPositionSource;//??
    Vec3 mSpawnPositioningTestPosition;
    bool mBlockRespawnUntilClientMessage;
    unsigned int mRespawnChunkBuilderPolicyHandle;
    Player::CachedSpawnData mCachedSpawnData;
    std::unique_ptr<class BlockSource> mSpawnBlockSource;
    bool mHasSeenCredits;
    Stopwatch mRespawnStopwatch_Searching;
    Vec3 mRespawnOriginalPosition;
    AutomaticID<Dimension, int> mRespawnOriginalDimension;
    bool mRespawnReady;
    std::string mRespawnMessage;
    bool mCheckBed;
    ItemStack mItemInUse;
    PlayerInventory::SlotData mItemInUseSlot;
    int mItemInUseDuration;
    __int16 mSleepCounter;
    __int16 mPrevSleepCounter;
    bool mInteractDataDirty;
    ActorUniqueID mPreviousInteractEntity;
    int mPreviousCarriedItem;
    bool mAutoJumping;
    int mEmoteTicks;
    class PacketSender* mPacketSender;
    BlockPos mBounceStartPos;
    const Block* mBounceBlock;
    float mFOVModifier;
    std::shared_ptr<class HudContainerManagerModel> mHudContainerManagerModel;
    std::unique_ptr<class EnderChestContainer> mEnderChestInventory;
    std::vector<ActorUniqueID> mTrackedBossIDs;
    enum class PositionMode : unsigned char {
        Normal = 0x0,
        Respawn = 0x1,
        Teleport = 0x2,
        OnlyHeadRot = 0x3,
    } mPositionMode;
    ActorType mLastHurtBy;
    ItemGroup mCursorSelectedItemGroup;
    PlayerUIContainer mPlayerUIContainer;//4336
    InventoryTransactionManager mTransactionManager;//4592
    std::shared_ptr<class GameMode> mGameMode;//4632
    PlayerRespawnRandomizer mSpawnRandomizer;//4648
    std::unique_ptr<class ItemStackNetManagerBase> mItemStackNetManager;//7256
    float mVRMoveAdjAngle;//7256
    std::shared_ptr<class AnimationComponent> mUIAnimationComponent;  //7264
    std::shared_ptr<class AnimationComponent> mMapAnimationComponent; //7280
    Player::PlayerSpawnPoint mPlayerRespawnPoint; // 7296
    bool mUseUIAnimationComponent; //7324
    bool mUseMapAnimationComponent;//7325
    std::vector<class PlayerListener*> mListeners; //7328
    int mLastLevelUpTime;
    bool mPlayerLevelChanged;
    int mPreviousLevelRequirement;
    Vec3 mRespawnPositionCandidate; // 7364
    bool mPlayerIsSleeping;
    bool mAllPlayersSleeping;
    bool mDestroyingBlock;
    Vec3 mSurvivalViewerPosition;
    std::vector<unsigned int> mOnScreenAnimationTextures;
    int mOnScreenAnimationTicks;
    GameType mPlayerGameType;
    int mEnchantmentSeed;
    unsigned int mChunkRadius;
    int mMapIndex;
    unsigned __int64 mElytraLoop;
    float mElytraVolume;
    float mUnderwaterLightLevel;
    std::unordered_map<std::string, int> mCooldowns;
    __int64 mStartedBlockingTimeStamp;
    __int64 mBlockedUsingShieldTimeStamp;
    __int64 mBlockedUsingDamagedShieldTimeStamp;
    bool mPrevBlockedUsingShield;
    bool mPrevBlockedUsingDamagedShield;
    bool mUsedPotion;
    int mBounceHeight;
    SkinAdjustments mSkinAdjustments;
    SerializedSkin mSerializedSkin;
    int mScanForDolphinTimer;
    bool mR5DataRecoverComplete;
    std::string mDeviceId;//8032
    bool mUsingModSkin;
    bool mFlagClientForBAIReset;
    bool mOverrideHeightToWidth;
    BedHelper mBedHelper;

public:

    LIAPI std::string getName();
    LIAPI std::string getRealName();
    LIAPI std::string getUuid();
    LIAPI std::string getXuid()const;
    LIAPI unsigned char getClientSubId();
    LIAPI string getDeviceTypeName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI std::string getIP();
    LIAPI string getLanguageCode();
    LIAPI string getServerAddress();
    LIAPI NetworkIdentifier* getNetworkIdentifier() const;
    LIAPI Certificate* getCertificate()const;
    LIAPI std::pair<BlockPos, int> getRespawnPosition();
    LIAPI float getAvgPacketLoss();
    LIAPI float getLastPacketLoss();
    LIAPI string getClientId();
    LIAPI int getDeviceType();
    LIAPI bool isOperator();
    LIAPI bool isOP();
    LIAPI int getPlatform();
    LIAPI Container & getInventory();
    LIAPI BlockPos const & getSpawnPosition();
    LIAPI AutomaticID<Dimension, int> getSpawnDimension();
    LIAPI enum class CommandPermissionLevel getPlayerPermissionLevel();
    LIAPI int getPlayerLevel();

    LIAPI int getCurrentExperience();
    LIAPI bool setCurrentExperience(int exp);
    LIAPI size_t getTotalExperience();
    LIAPI bool setTotalExperience(size_t exp);
    LIAPI bool reduceExperience(size_t exp);

    // Experience required to upgrade to level from (level-1)
    LIAPI static int getXpNeededForLevel(int level);

    // Experience required to upgrade to level from level 0
    LIAPI static size_t getTotalXpNeededForLevel(int level);

    /**
     * @brief Translate(localize) a text for the player with provided plugin handle.
     *
     * @param  hPlugin      The plugin handle
     * @param  format       The str to translate and format
     * @param  args         The format arguments
     * @return std::string  The translated str
     */
    template <typename... Args>
    inline std::string trImpl(HMODULE hPlugin, const std::string& format, Args&&... args) {
        return Translation::trlImpl(hPlugin, this->getLanguageCode(), format, std::forward<Args>(args)...);
    }

    /**
     * @brief Translate(localize) a text for the player(convenience func).
     *
     * @param  format       The str to translate and format
     * @param  args         The format arguments
     * @return std::string  The translated str
     */
    template <typename... Args>
    inline std::string tr(const std::string& format, Args&&... args) {
        return trImpl(GetCurrentModule(), format, std::forward<Args>(args)...);
    }

    LIAPI bool sendText(const std::string& text, TextType type = TextType::RAW);
    /**
     * @brief Translate(localize) and send a text to the player(convenience func).
     *
     * @tparam ttype  The text type(default RAW)
     * @tparam Args   ...
     * @param  text   The str to translate and format
     * @param  args   The format arguments
     * @return bool   Success or not
     */
    template <TextType ttype = TextType::RAW, typename... Args>
    inline bool sendText(const std::string& text, Args&&... args) {
        return sendText(this->tr(text, std::forward<Args>(args)...), ttype);
    }
    template <typename... Args>
    inline bool sendFormattedText(const std::string& text, Args&&... args) {
        if constexpr (0 == sizeof...(args)) {
            // Avoid fmt if only one argument
            return sendText(text);
        } else {
            return sendText(fmt::format(text, std::forward<Args>(args)...));
        }
    }

    LIAPI bool kick(const string& msg);
    LIAPI bool crashClient();
    LIAPI bool talkAs(const string& msg);
    LIAPI bool giveItem(ItemStack* item);
    LIAPI int clearItem(string typeName);
    LIAPI bool runcmd(const string& cmd);
    LIAPI bool transferServer(const string& address, unsigned short port);
    LIAPI bool setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder);
    LIAPI bool removeSidebar();
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshAttribute(class Attribute const& attribute);
    LIAPI bool refreshAttributes(std::vector<Attribute const*> const& attributes);
    LIAPI void addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI void removeBossEvent(int64_t uid);
    LIAPI void updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);

    LIAPI int getScore(const string& key);
    LIAPI bool setScore(const string& key, int value);
    LIAPI bool addScore(const string& key, int value);
    LIAPI bool reduceScore(const string& key, int value);
    LIAPI bool deleteScore(const string& key);

    // Form
    LIAPI bool sendSimpleForm(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(Player*, int)> callback) const;
    LIAPI bool sendModalForm(const string& title, const string& content, const string& confirmButton, const string& cancelButton, std::function<void(Player*, bool)> callback) const;
    LIAPI bool sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const;

    // Packet
    LIAPI bool sendTextPacket(string text, TextType Type = TextType::RAW) const;
    LIAPI bool sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) const;
    LIAPI bool sendNotePacket(unsigned int tone);
    LIAPI bool sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimid, string ParticleName, int64_t EntityUniqueID = -1) const;
    /*bad*/ LIAPI bool sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const;
    //LIAPI bool sendAddItemEntityPacket(unsigned long long runtimeID, class Item const& item, int stackSize, short aux, Vec3 pos, vector<std::unique_ptr<DataItem>> dataItems = {}) const;
    LIAPI bool sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec2 rotation, float headYaw, vector<std::unique_ptr<DataItem>> dataItems = {});
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, unsigned int runtimeId, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, const Block& block, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendTransferPacket(const string& address, short port) const;
    LIAPI bool sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const;
    LIAPI bool sendSetScorePacket(char type, const vector<ScorePacketInfo>& data);
    LIAPI bool sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI bool sendCommandRequestPacket(const string& cmd);
    LIAPI bool sendTextTalkPacket(const string& msg);
    LIAPI bool sendTextTalkPacket(const string& msg, Player* target /* = nullptr*/);

    LIAPI bool sendRawFormPacket(unsigned formId, const string& data) const;
    //LIAPI bool sendToastPacket(string title, string msg);

    LIAPI static bool isValid(Player* player);

    // For compatibility
    inline string getDeviceName() {
        return getDeviceTypeName();
    }
    inline std::string* getDeviceId(){
        //AddPlayerPacket::AddPlayerPacket Line58
        return dAccess<std::string*>(this,7872);
    };
    inline bool isFlying(){
        //Actor::onAboveBubbleColumn Line5 ???????????????????????????
        return (dAccess<int>(this,2228) == 1 || !dAccess<bool>(this,2232)) && (dAccess<int>(this, 2324) == 1 || !dAccess<bool>(this, 2328));
    };
    inline bool isHungry(){
        void* Player_HUNGER = dlsym("?HUNGER@Player@@2VAttribute@@B");
        return getAttribute(*(Attribute*)Player_HUNGER).getMaxValue() > getAttribute(*(Attribute*)Player_HUNGER).getCurrentValue();
    }

    LIAPI bool sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const;
    LIAPI bool sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback);
    LIAPI bool sendCustomFormPacket(const std::string& data, std::function<void(string)> callback);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYER
public:
    class Player& operator=(class Player const &) = delete;
    Player(class Player const &) = delete;
    Player() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*3*/ virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /*5*/ virtual void _serverInitItemStackIds();
    /*7*/ virtual ~Player();
    /*11*/ virtual void remove();
    /*17*/ virtual class Vec3 getAttachPos(enum class ActorLocation, float) const;
    /*20*/ virtual void move(class Vec3 const &);
    /*21*/ virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*39*/ virtual std::unique_ptr<class AddActorBasePacket> getAddPacket();
    /*40*/ virtual void normalTick();
    /*42*/ virtual void rideTick();
    /*44*/ virtual float getRidingHeight();
    /*55*/ virtual void __unk_vfn_55();
    /*59*/ virtual std::string getFormattedNameTag() const;
    /*62*/ virtual void __unk_vfn_62();
    /*73*/ virtual float getCameraOffset() const;
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*86*/ virtual bool isImmobile() const;
    /*89*/ virtual void __unk_vfn_89();
    /*90*/ virtual bool isSleeping() const;
    /*91*/ virtual void __unk_vfn_91();
    /*93*/ virtual bool isBlocking() const;
    /*94*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*107*/ virtual bool attack(class Actor &);
    /*109*/ virtual void adjustDamageAmount(int &) const;
    /*121*/ virtual bool isJumping() const;
    /*123*/ virtual void __unk_vfn_123();
    /*126*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*128*/ virtual void actuallyHurt(int, class ActorDamageSource const &, bool);
    /*132*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*133*/ virtual void feed(int);
    /*134*/ virtual void handleEntityEvent(enum class ActorEvent, int);
    /*136*/ virtual class HashedString const & getActorRendererId() const;
    /*144*/ virtual void awardKillScore(class Actor &, int);
    /*145*/ virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /*152*/ virtual class ItemStack const & getCarriedItem() const;
    /*153*/ virtual void setCarriedItem(class ItemStack const &);
    /*154*/ virtual void setOffhandSlot(class ItemStack const &);
    /*155*/ virtual class ItemStack const & getEquippedTotem() const;
    /*156*/ virtual bool consumeTotem();
    /*161*/ virtual enum class ActorType getEntityTypeId() const;
    /*167*/ virtual int getPortalCooldown() const;
    /*168*/ virtual int getPortalWaitTime() const;
    /*171*/ virtual void __unk_vfn_171();
    /*179*/ virtual void onSynchedDataUpdate(int);
    /*180*/ virtual bool canAddRider(class Actor &) const;
    /*182*/ virtual bool canBePulledIntoVehicle() const;
    /*184*/ virtual void __unk_vfn_184();
    /*186*/ virtual void sendMotionPacketIfNeeded();
    /*189*/ virtual void startSwimming();
    /*190*/ virtual void stopSwimming();
    /*192*/ virtual enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /*204*/ virtual class AnimationComponent & getAnimationComponent();
    /*207*/ virtual void useItem(class ItemStackBase &, enum class ItemUseMethod, bool);
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*211*/ virtual float getMapDecorationRotation() const;
    /*214*/ virtual bool isWorldBuilder();
    /*215*/ virtual bool isCreative() const;
    /*216*/ virtual bool isAdventure() const;
    /*217*/ virtual bool add(class ItemStack &);
    /*218*/ virtual bool drop(class ItemStack const &, bool);
    /*222*/ virtual void setSize(float, float);
    /*227*/ virtual void startSpinAttack();
    /*228*/ virtual void stopSpinAttack();
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*235*/ virtual void die(class ActorDamageSource const &);
    /*237*/ virtual class std::shared_ptr<struct IActorMovementProxy> createMovementProxy();
    /*241*/ virtual void __unk_vfn_241();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*245*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*246*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void _onSizeUpdated();
    /*260*/ virtual void __unk_vfn_260();
    /*264*/ virtual void setSleeping(bool);
    /*271*/ virtual float getSpeed() const;
    /*272*/ virtual void setSpeed(float);
    /*277*/ virtual void travel(float, float, float);
    /*278*/ virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    /*281*/ virtual void aiStep();
    /*282*/ virtual void aiStep(struct IMobMovementProxy &) const;
    /*289*/ virtual int getItemUseDuration();
    /*290*/ virtual float getItemUseStartupProgress();
    /*291*/ virtual float getItemUseIntervalProgress();
    /*294*/ virtual void __unk_vfn_294();
    /*304*/ virtual void __unk_vfn_304();
    /*322*/ virtual std::vector<class ItemStack const *> getAllHand() const;
    /*323*/ virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /*325*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /*326*/ virtual void dropEquipmentOnDeath();
    /*327*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*328*/ virtual void sendInventory(bool);
    /*337*/ virtual bool canExistWhenDisallowMob() const;
    /*338*/ virtual void __unk_vfn_338();
    /*343*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*344*/ virtual void jumpFromGround();
    /*345*/ virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /*346*/ virtual void updateAi();
    /*353*/ virtual void updateGliding();
    /*354*/ virtual void __unk_vfn_354();
    /*355*/ virtual void prepareRegion(class ChunkSource &);
    /*356*/ virtual void destroyRegion();
    /*357*/ virtual void suspendRegion();
    /*358*/ virtual void resendAllChunks();
    /*359*/ virtual void _fireWillChangeDimension();
    /*360*/ virtual void _fireDimensionChanged();
    /*361*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*362*/ virtual int tickWorld(struct Tick const &);
    /*363*/ virtual void __unk_vfn_363() = 0;
    /*364*/ virtual std::vector<class ChunkPos> const & getTickingOffsets() const;
    /*365*/ virtual void moveView();
    /*366*/ virtual void setName(std::string const &);
    /*367*/ virtual void checkMovementStats(class Vec3 const &);
    /*368*/ virtual void __unk_vfn_368();
    /*369*/ virtual void __unk_vfn_369();
    /*370*/ virtual void respawn();
    /*371*/ virtual void __unk_vfn_371();
    /*372*/ virtual void resetPos(bool);
    /*373*/ virtual void __unk_vfn_373();
    /*374*/ virtual bool hasResource(int);
    /*375*/ virtual void completeUsingItem();
    /*376*/ virtual void setPermissions(enum class CommandPermissionLevel);
    /*377*/ virtual void startDestroying();
    /*378*/ virtual void stopDestroying();
    /*379*/ virtual void __unk_vfn_379();
    /*380*/ virtual void __unk_vfn_380();
    /*381*/ virtual void openTrading(struct ActorUniqueID const &, bool);
    /*382*/ virtual bool canOpenContainerScreen();
    /*383*/ virtual void __unk_vfn_383();
    /*384*/ virtual void __unk_vfn_384();
    /*385*/ virtual void openInventory();
    /*386*/ virtual void __unk_vfn_386();
    /*387*/ virtual void __unk_vfn_387();
    /*388*/ virtual void displayTextObjectMessage(class TextObjectRoot const &);
    /*389*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /*390*/ virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /*391*/ virtual enum class BedSleepingResult startSleepInBed(class BlockPos const &);
    /*392*/ virtual void stopSleepInBed(bool, bool);
    /*393*/ virtual bool canStartSleepInBed();
    /*394*/ virtual int getSleepTimer() const;
    /*395*/ virtual int getPreviousTickSleepTimer() const;
    /*396*/ virtual void __unk_vfn_396();
    /*397*/ virtual void __unk_vfn_397();
    /*398*/ virtual bool isHostingPlayer() const;
    /*399*/ virtual bool isLoading() const;
    /*400*/ virtual bool isPlayerInitialized() const;
    /*401*/ virtual void __unk_vfn_401();
    /*402*/ virtual void registerTrackedBoss(struct ActorUniqueID);
    /*403*/ virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /*404*/ virtual void setPlayerGameType(enum class GameType);
    /*405*/ virtual void _crit(class Actor &);
    /*406*/ virtual class IMinecraftEventing * getEventing() const;
    /*407*/ virtual void __unk_vfn_407();
    /*408*/ virtual void sendEventPacket(class EventPacket &) const;
    /*409*/ virtual void addExperience(int);
    /*410*/ virtual void addLevels(int);
    /*411*/ virtual void setContainerData(class IContainerManager &, int, int) = 0;
    /*412*/ virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool) = 0;
    /*413*/ virtual void inventoryChanged(class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /*414*/ virtual void refreshContainer(class IContainerManager &) = 0;
    /*415*/ virtual void deleteContainerManager();
    /*416*/ virtual void setFieldOfViewModifier(float);
    /*417*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /*418*/ virtual bool isEntityRelevant(class Actor const &);
    /*419*/ virtual bool isTeacher() const = 0;
    /*420*/ virtual void onSuspension();
    /*421*/ virtual void onLinkedSlotsChanged();
    /*422*/ virtual void startCooldown(class Item const *);
    /*423*/ virtual int getItemCooldownLeft(std::string const &) const;
    /*424*/ virtual bool isItemInCooldown(std::string const &) const;
    /*425*/ virtual void sendInventoryTransaction(class InventoryTransaction const &) const = 0;
    /*426*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /*427*/ virtual void sendNetworkPacket(class Packet &) const;
    /*428*/ virtual class PlayerEventCoordinator & getPlayerEventCoordinator() = 0;
    /*429*/ virtual class MoveInputHandler * getMoveInputHandler() = 0;
    /*430*/ virtual enum class InputMode getInputMode() const = 0;
    /*431*/ virtual enum class ClientPlayMode getPlayMode() const = 0;
    /*432*/ virtual void reportMovementTelemetry(enum class MovementEventType);
    /*433*/ virtual void onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    MCVAPI void displayChatMessage(std::string const &, std::string const &);
    MCVAPI void displayClientMessage(std::string const &);
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI enum class StructureFeatureType getCurrentStructureFeature() const;
    MCVAPI unsigned int getUserId() const;
    MCVAPI bool isAutoJumpEnabled() const;
    MCVAPI bool isCreativeModeAllowed();
    MCVAPI bool isInTrialMode();
    MCVAPI bool isLocalPlayer() const;
    MCVAPI bool isPlayer() const;
    MCVAPI bool isShootable();
    MCVAPI void openBook(int, bool, int, class BlockActor *);
    MCVAPI void openChalkboard(class ChalkboardBlockActor &, bool);
    MCVAPI void openNpcInteractScreen(class Actor &);
    MCVAPI void openPortfolio();
    MCVAPI void openSign(class BlockPos const &);
    MCVAPI void playEmote(std::string const &);
    MCVAPI void resetRot();
    MCVAPI void stopLoading();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Player(class Level &, class PacketSender &, enum class GameType, class NetworkIdentifier const &, unsigned char, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, std::string const &, std::string const &);
    MCAPI bool canBeSeenOnMap() const;
    MCAPI bool canDestroy(class Block const &) const;
    MCAPI bool canUseAbility(enum class AbilitiesIndex) const;
    MCAPI bool canUseOperatorBlocks() const;
    MCAPI void causeFoodExhaustion(float);
    MCAPI bool checkNeedAutoJump(float, float);
    MCAPI void eat(int, float);
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    MCAPI bool forceAllowEating() const;
    MCAPI class Agent * getAgent() const;
    MCAPI class ItemStack const & getCurrentActiveShield() const;
    MCAPI float getDestroyProgress(class Block const &) const;
    MCAPI float getDestroySpeed(class Block const &) const;
    MCAPI int getDirection() const;
    MCAPI class EnderChestContainer * getEnderChestContainer();
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    MCAPI class BlockPos const & getExpectedSpawnPosition() const;
    MCAPI std::string getItemInteractText(class Item const &) const;
    MCAPI class ItemStack const & getSelectedItem() const;
    MCAPI class PlayerInventory & getSupplies();
    MCAPI int getXpNeededForNextLevel() const;
    MCAPI void handleJumpEffects();
    MCAPI bool hasResource(class ItemDescriptor const &);
    MCAPI bool isBouncing() const;
    MCAPI bool isForcedRespawn() const;
    MCAPI bool isHiddenFrom(class Mob &) const;
    MCAPI bool isInCreativeMode() const;
    MCAPI bool isSurvival() const;
    MCAPI void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    MCAPI void recheckSpawnPosition();
    MCAPI void releaseUsingItem();
    MCAPI void resetPlayerLevel();
    MCAPI void setAgent(class Agent *);
    MCAPI void setBedRespawnPosition(class BlockPos const &);
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void setPlayerUIItem(enum class PlayerUISlot, class ItemStack const &);
    MCAPI void setRespawnPositionCandidate();
    MCAPI void setSelectedItem(class ItemStack const &);
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void startGliding();
    MCAPI void startUsingItem(class ItemStack const &, int);
    MCAPI void stopGliding();
    MCAPI void stopUsingItem();
    MCAPI bool take(class Actor &, int, int);
    MCAPI void updateInventoryTransactions();
    MCAPI void updateSkin(class SerializedSkin const &, int);
    MCAPI void updateSpawnChunkView();
    MCAPI void updateTrackedBosses();
    MCAPI void useSelectedItem(enum class ItemUseMethod, bool);
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    MCAPI static class Attribute const EXHAUSTION;
    MCAPI static class Attribute const EXPERIENCE;
    MCAPI static int const GLIDE_STOP_DELAY;
    MCAPI static class Attribute const HUNGER;
    MCAPI static class Attribute const LEVEL;
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    MCAPI static class Attribute const SATURATION;
    MCAPI static void _aiStep(struct IPlayerMovementProxy &);
    MCAPI static void _jumpFromGround(struct IPlayerMovementProxy &);
    MCAPI static void _move(struct IPlayerMovementProxy &, class Vec3 const &);
    MCAPI static void _travel(struct IPlayerMovementProxy &, float, float, float);
    MCAPI static bool checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, class AABB, bool, bool, bool, bool, bool, bool, short);

//protected:
    MCAPI bool _checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, bool, bool, bool, bool, bool) const;
    MCAPI void _chooseSpawnArea();
    MCAPI bool _chooseSpawnPositionWithinArea();
    MCAPI void _preSpawnBuildSpawnDataCache();
    MCAPI void _registerPlayerAttributes();
    MCAPI void _updateInteraction();
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
    MCAPI bool checkBed(class BlockSource *, class Vec3 const *const);
    MCAPI bool checkSpawnBlock(class BlockSource const &) const;
    MCAPI static bool _isDangerousSpawn(class BlockSource &, class AABB const &);

//private:
    MCAPI void _addLevels(int);
    MCAPI void _applyExhaustion(class Vec3 const &);
    MCAPI bool _blockUsingShield(class ActorDamageSource const &, float);
    MCAPI void _ensureSafeSpawnPosition(class Vec3 &);
    MCAPI bool _findFallbackSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, unsigned int);
    MCAPI void _handleCarriedItemInteractText();
    MCAPI bool _isChunkSourceLoaded(class Vec3 const &, class BlockSource const &) const;
    MCAPI void _registerElytraLoopSound();
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const &, class ItemStack const &, class ItemStack const &, enum class ContainerID, int);

protected:

private:

};
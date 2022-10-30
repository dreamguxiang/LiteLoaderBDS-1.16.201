// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "CompassSpriteCalculator.hpp"
#include "ClockSpriteCalculator.hpp"
#include "MovementInterpolator.hpp"
class __declspec(align(8)) Mob : public Actor {

#define AFTER_EXTRA
    // Add Member There
public:
    struct JumpPreventionResult {
        JumpPreventionResult() = delete;
        JumpPreventionResult(JumpPreventionResult const&) = delete;
        JumpPreventionResult(JumpPreventionResult const&&) = delete;
    };
    enum TravelType;

public:
    float mYBodyRot;//1672
    float mYBodyRotO;
    float mYHeadRot;
    float mYHeadRotO;
    int mHurtTime;
    int mHurtDuration;
    float mHurtDir;
    int mAttackTime;
    float mOTilt;
    float mTilt;
    int mLookTime;
    float mFallTime;
    bool mFloatsInLiquid;
    int mJumpTicks;
    Vec3 mElytraRot;
    CompassSpriteCalculator mCompassSpriteCalc;
    ClockSpriteCalculator mClockSpriteCalc;	
    float mXxa;
    float mYya;
    float mZza;
    float mYRotA;
    bool mHasMoveInput;
    float mAttackAnim;
    float mORun;
    float mRun;
    bool mSwinging;
    int mSwingTime;
    int mNoActionTime;
    int mNoJumpDelay;
    float mDefaultLookAngle;
    float mFrictionModifier;
    float mFlyingSpeed;
    float mSwimSpeedMultiplier;
    int mDeathTime;
    int mDeathScore;
    float mAnimStep;
    float mAnimStepO;
    float mLockedBodyYRot;
    float mRiderYRotLimit;
    MovementInterpolator mInterpolation;
    int mLastHurt;
    ActorDamageCause mLastHurtCause;
    unsigned __int64 mLastHurtTimestamp;
    int mDmgSpill;
    int mDmgPartial;
    bool mJumping;
    bool mJumpVelRedux;
    float mPlayerJumpPendingScale;
    bool mAllowStandSliding;
    Vec3 mJumpStartPos;
    float mSpeed;
    float mMovementComponentCurrentSpeed;
    bool mSurfaceMob;
    bool mNaturallySpawned;
    bool mDead;
    std::weak_ptr<class VillageLegacy> mVillageLegacy;
    bool mWantsToBeJockey;
    int mAmbientPlayBackInterval;
    bool mSpawnedXP;
    int mRollCounter;
    ActorUniqueID mLookingAtId;
    ActorUniqueID mLastHurtMobId;
    ActorUniqueID mLastHurtByMobId;
    ActorUniqueID mLastHurtByPlayerId;
    ActorUniqueID mCaravanHead;
    ActorUniqueID mCaravanTail;
    int mLastHurtMobTimestamp;
    int mLastHurtByMobTime;
    int mLastHurtByMobTimestamp;
    float mOAttackAnim;
    int mArrowCount;
    int mRemoveArrowTime;
    int mFallFlyTicks;
    bool mHasBoundOrigin;
    BlockPos mBoundOrigin;
    MobSpawnMethod mSpawnMethod;
    bool mCreateAiOnReload;
    ActorUniqueID mTargetCaptainId;


public:

    LIAPI bool refreshInventory();
    inline bool isGliding(){
        return getStatusFlag(ActorFlags::GLIDING);
    }
    inline bool getDead(){
        //mob::die Line83
        return dAccess<bool>(this,1850);
    };

    inline bool isSprinting() {
        return getStatusFlag(ActorFlags::SPRINTING);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOB
public:
    class Mob& operator=(class Mob const &) = delete;
    Mob(class Mob const &) = delete;
    Mob() = delete;
#endif

public:
    /*0*/ virtual bool hasComponent(class HashedString const &) const;
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*2*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*3*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*6*/ virtual void _doInitialMove();
    /*7*/ virtual ~Mob();
    /*23*/ virtual float getInterpolatedBodyRot(float) const;
    /*24*/ virtual float getInterpolatedHeadRot(float) const;
    /*25*/ virtual float getInterpolatedBodyYaw(float) const;
    /*26*/ virtual float getYawSpeedInDegreesPerSecond() const;
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /*34*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*37*/ virtual void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /*40*/ virtual void normalTick();
    /*41*/ virtual void baseTick();
    /*42*/ virtual void rideTick();
    /*45*/ virtual bool startRiding(class Actor &);
    /*46*/ virtual void addRider(class Actor &);
    /*55*/ virtual void __unk_vfn_55();
    /*62*/ virtual void __unk_vfn_62();
    /*77*/ virtual void __unk_vfn_77();
    /*82*/ virtual void __unk_vfn_82();
    /*86*/ virtual bool isImmobile() const;
    /*88*/ virtual bool isPickable();
    /*89*/ virtual void __unk_vfn_89();
    /*90*/ virtual bool isSleeping() const;
    /*91*/ virtual void __unk_vfn_91();
    /*93*/ virtual bool isBlocking() const;
    /*95*/ virtual bool isAlive() const;
    /*98*/ virtual void __unk_vfn_98();
    /*99*/ virtual bool isSurfaceMob() const;
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*104*/ virtual void setTarget(class Actor *);
    /*107*/ virtual bool attack(class Actor &);
    /*119*/ virtual bool canPowerJump() const;
    /*121*/ virtual bool isJumping() const;
    /*123*/ virtual void __unk_vfn_123();
    /*127*/ virtual enum ActorDamageCause getBlockDamageCause(class Block const &) const;
    /*128*/ virtual void actuallyHurt(int, class ActorDamageSource const &, bool);
    /*129*/ virtual void animateHurt();
    /*130*/ virtual bool doFireHurt(int);
    /*134*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*147*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*148*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*149*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*151*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /*164*/ virtual void setOnFire(int);
    /*171*/ virtual void __unk_vfn_171();
    /*175*/ virtual void causeFallDamage(float);
    /*182*/ virtual bool canBePulledIntoVehicle() const;
    /*183*/ virtual bool inCaravan() const;
    /*184*/ virtual void __unk_vfn_184();
    /*188*/ virtual void stopRiding(bool, bool, bool);
    /*191*/ virtual void buildDebugInfo(std::string &) const;
    /*195*/ virtual int getDeathTime() const;
    /*206*/ virtual void swing();
    /*208*/ virtual void __unk_vfn_208();
    /*209*/ virtual void __unk_vfn_209();
    /*213*/ virtual float getYHeadRot() const;
    /*230*/ virtual void __unk_vfn_230();
    /*233*/ virtual void __unk_vfn_233();
    /*234*/ virtual void kill();
    /*235*/ virtual void die(class ActorDamageSource const &);
    /*237*/ virtual class std::shared_ptr<struct IActorMovementProxy> createMovementProxy();
    /*238*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*241*/ virtual void __unk_vfn_241();
    /*242*/ virtual void outOfWorld();
    /*243*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*245*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*246*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*247*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*249*/ virtual void __unk_vfn_249();
    /*258*/ virtual void _removeRider(struct ActorUniqueID const &, bool, bool, bool);
    /*259*/ virtual void _onSizeUpdated();
    /*260*/ virtual void __unk_vfn_260();
    /*261*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*262*/ virtual void resolveDeathLoot(int, class ActorDamageSource const &);
    /*263*/ virtual void spawnAnim();
    /*264*/ virtual void setSleeping(bool);
    /*265*/ virtual void setSprinting(bool);
    /*266*/ virtual void playAmbientSound();
    /*267*/ virtual enum LevelSoundEvent getAmbientSound();
    /*268*/ virtual int getAmbientSoundPostponeTicks();
    /*269*/ virtual int getAmbientSoundPostponeTicksRange();
    /*270*/ virtual struct TextureUVCoordinateSet const * getItemInHandIcon(class ItemStack const &, int);
    /*271*/ virtual float getSpeed() const;
    /*272*/ virtual void setSpeed(float);
    /*273*/ virtual float getJumpPower() const;
    /*274*/ virtual bool hurtEffects(class ActorDamageSource const &, int, bool, bool);
    /*275*/ virtual int getMeleeWeaponDamageBonus(class Mob *);
    /*276*/ virtual int getMeleeKnockbackBonus();
    /*277*/ virtual void travel(float, float, float);
    /*278*/ virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    /*279*/ virtual void applyFinalFriction(float, bool);
    /*280*/ virtual void updateWalkAnim();
    /*281*/ virtual void aiStep();
    /*282*/ virtual void aiStep(struct IMobMovementProxy &) const;
    /*283*/ virtual void pushActors();
    /*284*/ virtual void lookAt(class Actor *, float, float);
    /*285*/ virtual bool isLookingAtAnEntity();
    /*286*/ virtual bool checkSpawnRules(bool);
    /*287*/ virtual bool checkSpawnObstruction() const;
    /*288*/ virtual float getAttackAnim(float);
    /*289*/ virtual int getItemUseDuration();
    /*290*/ virtual float getItemUseStartupProgress();
    /*291*/ virtual float getItemUseIntervalProgress();
    /*292*/ virtual int getItemuseIntervalAxis();
    /*293*/ virtual int getTimeAlongSwing();
    /*294*/ virtual void __unk_vfn_294();
    /*295*/ virtual float getMaxHeadXRot();
    /*296*/ virtual class Mob * getLastHurtByMob();
    /*297*/ virtual void setLastHurtByMob(class Mob *);
    /*298*/ virtual class Player * getLastHurtByPlayer();
    /*299*/ virtual void setLastHurtByPlayer(class Player *);
    /*300*/ virtual class Mob * getLastHurtMob();
    /*301*/ virtual void setLastHurtMob(class Actor *);
    /*302*/ virtual bool isAlliedTo(class Mob *);
    /*303*/ virtual bool doHurtTarget(class Actor *);
    /*304*/ virtual void __unk_vfn_304();
    /*305*/ virtual void leaveCaravan();
    /*306*/ virtual void joinCaravan(class Mob *);
    /*307*/ virtual bool hasCaravanTail() const;
    /*308*/ virtual struct ActorUniqueID getCaravanHead() const;
    /*309*/ virtual int getArmorValue();
    /*310*/ virtual float getArmorCoverPercentage() const;
    /*311*/ virtual void hurtArmor(class ActorDamageSource const &, int);
    /*312*/ virtual void hurtArmor(class ActorDamageSource const &, int, class std::bitset<4> const &);
    /*313*/ virtual void hurtArmorSlot(class ActorDamageSource const &, int, enum ArmorSlot);
    /*314*/ virtual void setDamagedArmor(enum ArmorSlot, class ItemStack const &);
    /*315*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*316*/ virtual void sendArmor(class std::bitset<4> const &);
    /*317*/ virtual void containerChanged(int);
    /*318*/ virtual void updateEquipment();
    /*319*/ virtual int clearEquipment();
    /*320*/ virtual std::vector<class ItemStack const *> getAllArmor() const;
    /*321*/ virtual std::vector<int> getAllArmorID() const;
    /*322*/ virtual std::vector<class ItemStack const *> getAllHand() const;
    /*323*/ virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /*324*/ virtual int getArmorTypeHash();
    /*325*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /*326*/ virtual void dropEquipmentOnDeath();
    /*327*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*328*/ virtual void sendInventory(bool);
    /*329*/ virtual int getDamageAfterMagicAbsorb(class ActorDamageSource const &, int);
    /*330*/ virtual bool createAIGoals();
    /*331*/ virtual void onBorn(class Actor &, class Actor &);
    /*332*/ virtual bool setItemSlot(enum EquipmentSlot, class ItemStack const &);
    /*333*/ virtual void setTransitioningSitting(bool);
    /*334*/ virtual void attackAnimation(class Actor *, float);
    /*335*/ virtual int getAttackTime();
    /*336*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*337*/ virtual bool canExistWhenDisallowMob() const;
    /*338*/ virtual void __unk_vfn_338();
    /*339*/ virtual void ascendLadder();
    /*340*/ virtual void ascendScaffolding();
    /*341*/ virtual void descendScaffolding();
    /*342*/ virtual void dropContainer();
    /*343*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*344*/ virtual void jumpFromGround();
    /*345*/ virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /*346*/ virtual void updateAi();
    /*347*/ virtual void newServerAiStep();
    /*348*/ virtual void _serverAiMobStep();
    /*349*/ virtual int getDamageAfterEnchantReduction(class ActorDamageSource const &, int);
    /*350*/ virtual int getDamageAfterArmorAbsorb(class ActorDamageSource const &, int);
    /*351*/ virtual void dropBags();
    /*352*/ virtual void tickDeath();
    /*353*/ virtual void updateGliding();
    /*354*/ virtual void __unk_vfn_354();
    /*355*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOB
    MCVAPI bool _allowAscendingScaffolding() const;
    MCVAPI void ate();
    MCVAPI bool canBeControlledByRider();
    MCVAPI bool isShootable();
    MCVAPI void renderDebugServerState(class Options const &);
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Mob(class Level &);
    MCAPI Mob(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI float calcMoveRelativeSpeed(enum TravelType);
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const &);
    MCAPI void emitJumpPreventedEvent(class BlockPos const &);
    MCAPI void frostWalk();
    MCAPI int getCaravanSize() const;
    MCAPI class Mob * getFirstCaravanHead();
    MCAPI class ItemStack const & getItemSlot(enum EquipmentSlot) const;
    MCAPI float getJumpMultiplier();
    MCAPI struct Mob::JumpPreventionResult getJumpPrevention();
    MCAPI enum TravelType getTravelType();
    MCAPI void onPlayerJump(int);
    MCAPI void resetAttributes();
    MCAPI void sendArmorSlot(enum ArmorSlot);
    MCAPI void setEatCounter(int);
    MCAPI void setIsPregnant(bool);
    MCAPI void setSpeedModifier(float);
    MCAPI bool shouldApplyWaterGravity();
    MCAPI static float const FRICTION_CONSTANT;
    MCAPI static float const FRICTION_CONSTANT_MODIFIED;
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;
    MCAPI static int const TOTAL_ROLL_STEPS;
    MCAPI static void _aiStep(struct IMobMovementProxy &);
    MCAPI static float _calcMoveRelativeSpeed(struct IMobMovementProxy &, enum TravelType);
    MCAPI static void _travel(struct IMobMovementProxy &, float, float, float);
    MCAPI static void _updateMobTravel(struct IMobMovementProxy &);
    MCAPI static float calculateJumpImpulse(struct IMobMovementProxy const &);
    MCAPI static struct Mob::JumpPreventionResult getJumpPrevention(struct IMobMovementProxy const &);
    MCAPI static enum TravelType getTravelType(struct IMobMovementProxy &);

//protected:
    MCAPI void _doSoulSpeedParticleEffect();
    MCAPI void _doSprintParticleEffect();
    MCAPI void _endJump();
    MCAPI void _registerMobAttributes();
    MCAPI void calculateAmbientSoundTime(int);
    MCAPI int getCurrentSwingDuration();
    MCAPI void processSoulSpeed();
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;
    MCAPI void tickEffects();
    MCAPI void updateAttackAnim();
    MCAPI bool updateGlidingDurability();
    MCAPI static void _jumpFromGround(struct IMobMovementProxy &);

//private:
    MCAPI bool _initHardCodedComponents();
    MCAPI bool _isHeadInWater();
    MCAPI void _loadArmor(class ListTag const *);
    MCAPI void _verifyAttributes();
    MCAPI static bool _tryApplyingLevitation(struct IMobMovementProxy const &, class Vec3 &);

protected:

private:

};

//static_assert(offsetof(Mob, mJumping) == 1920);
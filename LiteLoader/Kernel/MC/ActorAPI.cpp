#include <Global.h>
#include <MC/Actor.hpp>
#include <MC/ActorDamageSource.hpp>
#include <MC/Block.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/BlockSource.hpp>
#include <MC/CommandUtils.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/HashedString.hpp>
//#include <MC/HitDetection.hpp>
#include <MC/HitResult.hpp>
#include <MC/Level.hpp>
#include <MC/LevelChunk.hpp>
#include <MC/Material.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/ListTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/SimpleContainer.hpp>
#include <MC/TeleportCommand.hpp>
#include <MC/TeleportTarget.hpp>
//#include <MC/UserEntityIdentifierComponent.hpp>
//#include <MC/OnFireSystem.hpp>
//#include <MC/ClipDefaults.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
#include <MC/ActorDamageSource.hpp>

// class UserEntityIdentifierComponent;

// UserEntityIdentifierComponent* Actor::getUserEntityIdentifierComponent() const {
//     return SymCall("??$tryGetComponent@VUserEntityIdentifierComponent@@@Actor@@QEAAPEAVUserEntityIdentifierComponent@@XZ", UserEntityIdentifierComponent*, Actor*)((Actor*)this);
// }

MCINLINE Vec3 Actor::getFeetPosition() const {
    return CommandUtils::getFeetPos(this);
}

 BlockSource* Actor::getBlockSource() const {
     return Level::getBlockSource((Actor*)this);
 }

bool Actor::isPlayer(bool allowSimulatedPlayer) const {
    if (!this)
        return false;
    try {
        if (*(void**)this == dlsym("??_7ServerPlayer@@6B@"))
            return true;
        return false;
    } catch (...) { return false; }
}

 bool Actor::isItemActor() const {
     return hasCategory((ActorCategory)1024);
 }

bool Actor::isOnGround() const {
     return mOnGround;
 }

 std::string Actor::getTypeName() const {
//     return getActorIdentifier().getCanonicalName();
     //以下根据EntityTypeToLocString的逻辑写的
    int actorTypeId = (int)this->getEntityTypeId();
    //以下函数原型std::string EntityTypeToString(int actorTypeId,int rules)
    return SymCall("?EntityTypeToString@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorType@@W4ActorTypeNamespaceRules@@@Z",
               std::string, int, int)(actorTypeId,0);
 }
 
 bool Actor::hurtEntity(float damage,ActorDamageCause damageCause) {
     auto ads = new ActorDamageSource(damageCause);
     auto res = ((Mob*)this)->_hurt(*ads, damage, true, false);
     ads->~ActorDamageSource();
     delete ads;
     return res;
 }


Vec2 Actor::getDirection() const {
     return mRot; // IDA: Actor::getRotation()
 }

BlockPos Actor::getBlockPos() {
    return getPosition().add(0, -1.0, 0).toBlockPos();
}

BlockInstance Actor::getBlockStandingOn() const {
    return Level::getBlockInstance(getBlockPosCurrentlyStandingOn(nullptr), getDimensionId());
}

ActorUniqueID Actor::getActorUniqueId() const {
    __try {
        return getUniqueID();
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return {0};
    }
}

// static_assert(sizeof(TeleportRotationData) == 32);
 bool Actor::teleport(Vec3 to, int dimID) {
     if (!this->isAlive())
         return false;
     TeleportCommand::teleport(*this,to,nullptr,dimID,getRotation().x, getRotation().y,15,this->getUniqueID());
     return true;
 }

 bool Actor::teleport(Vec3 to, int dimID, float x, float y) {
     TeleportCommand::teleport(*this,to,nullptr,dimID,x,y,15,this->getUniqueID());
     return true;
 }

SimpleContainer & Actor::getHandContainer(){
    //ScriptHandContainerComponent::hasComponent actor
    return *mHand;
}

ItemStack* Actor::getHandSlot() {
    if (isPlayer())
        return (ItemStack*)&((Player*)this)->getSelectedItem();
    return (ItemStack*)&getHandContainer().getItem(0);
}

SimpleContainer & Actor::getArmorContainer(){
    return *mArmor;
}

bool Actor::rename(const string& name) {
    setNameTag(name);
    return refreshActorData();
}

std::unique_ptr<CompoundTag> Actor::getNbt() {
    return CompoundTag::fromActor(this);
}

bool Actor::setNbt(CompoundTag* nbt) {
    return nbt->setActor(this);
}

bool Actor::refreshActorData() {
    _sendDirtyActorData();
    return true;
}

// bool Actor::setOnFire(int num, bool isEffect) {
//     if (isEffect)
//         OnFireSystem::setOnFire(*this, num);
//     else
//         OnFireSystem::setOnFireNoEffects(*this, num);
//     return true;
// }

// bool Actor::stopFire() {
//     OnFireSystem::stopFire(*this);
//     return true;
// }


Vec3 Actor::getCameraPos() const {
    auto& pos = this->getPos();
    if (this->isSneaking()) {
        pos.add(0, -0.125, 0);
    } else {
        pos.add(0, ((Player*)this)->getCameraOffset(), 0);
    }
    return pos;
}

 Tick* Actor::getLastTick() const {
     auto bs = getBlockSource();
     if (!bs)
         return nullptr;
     auto bpos = getPos().toBlockPos();
     LevelChunk* lc = bs->getChunkAt(bpos);
     if (!lc)
         return nullptr;
     return (Tick*)&lc->getLastTick();
 }
//enum ActorLocation;
 BlockInstance Actor::getBlockFromViewVector(FaceID& face, bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) const {
     auto& bs = getRegionConst();
     auto pos = getCameraPos();
     auto viewVec = getViewVector(1.0f);
     auto viewPos = pos + (viewVec * maxDistance);
     auto player = isPlayer() ? (Player*)this : nullptr;
     int maxDisManhattan = (int)((maxDistance + 1) * 2);
     HitResult result = const_cast<BlockSource&>(bs).clip(pos, viewPos, includeLiquid, solidOnly, maxDisManhattan, ignoreBorderBlocks, fullOnly);
     if (result.isHit() || (includeLiquid && result.isHitLiquid())) {
         BlockPos bpos{};
         if (includeLiquid && result.isHitLiquid()) {
             bpos = result.getLiquidPos();
             face = result.getLiquidFacing();
         } else {
             bpos = result.getBlockPos();
             face = result.getFacing();
         }
         // auto block = const_cast<Block*>(&bs.getBlock(bpos));
         return Level::getBlockInstance(bpos, bs.getDimensionId());
     }
     return BlockInstance::Null;
 }

// BlockInstance Actor::getBlockFromViewVector(bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) const {
//     FaceID face = FaceID::Unknown;
//     return getBlockFromViewVector(face, includeLiquid, solidOnly, maxDistance, ignoreBorderBlocks, fullOnly);
// }

 namespace HitDetection {
 void searchActors(class Vec3 const& a1, float a2, class Vec3 const& a3, class AABB const& a4, class Actor* a5, class Player* a6, float& a7, class Actor*& a8, class Vec3& a9, bool a10) {
 }
}; 

 Actor* Actor::getActorFromViewVector(float maxDistance) {
     auto& bs = getRegion();
     auto pos = getCameraPos();
     auto viewVec = getViewVector(1.0f);
     auto aabb = *(AABB*)&getAABB();
     auto player = isPlayer() ? (Player*)this : nullptr;
     Actor* result = nullptr;
     float distance = 0.0f;
     Vec3 resultPos{};
     HitDetection::searchActors(viewVec, maxDistance, pos, aabb, this, (Player*)this, distance, result, resultPos, player);
     return result;
 }

// bool Actor::addEffect(MobEffect::EffectType type, int tick, int level, bool ambient, bool showParticles, bool showAnimation) {
//     MobEffectInstance ins = MobEffectInstance((unsigned int)type, tick, -1,-1,-1,level, ambient, showParticles, showAnimation);
//     ins.applyEffects(this);
//     return true;
// };

std::vector<std::string> Actor::getAllTags() {
    try {
        auto nbt = getNbt();
        auto& list = ((ListTag*)nbt->getListTag("Tags"))->value();

        vector<string> res;
        for (auto& tag : list) {
            res.emplace_back(tag->asStringTag()->get());
        }
        return res;
    } catch (...) {
        return {};
    }
}

bool Actor::hasTag(const string& tag) {
    auto tags = getAllTags();
    return std::find(tags.begin(), tags.end(), tag) != tags.end();
}

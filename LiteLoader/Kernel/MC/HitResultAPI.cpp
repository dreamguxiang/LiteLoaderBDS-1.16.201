#include <MC/HitResult.hpp>

FaceID HitResult::getFacing() {
    return mFacing;
}
Vec3 HitResult::getPos() {
    return mPos;
}
bool HitResult::isHitLiquid() {
    return mIsHitLiquid;
}
// LIAPI bool HitResult::isEntity() {
//     return getHitResultType() == HitResultType::ENTITY;
// }
// LIAPI bool HitResult::isTile() {
//     return getHitResultType() == HitResultType::TILE;
// }
BlockPos HitResult::getBlockPos() {
    return mBlock;
}
BlockPos HitResult::getLiquidPos() {
    return mLiquid;
}
FaceID HitResult::getLiquidFacing() {
    return mLiquidFacing;
}
// LIAPI Vec3 HitResult::getLiquidHitPos();
// LIAPI HitResultType HitResult::getHitResultType() {
//     return dAccess<HitResultType>(this, 24);
// }

// static_assert(offsetof(HitResult, endBpos) == 32);
// static_assert(offsetof(HitResult, unk64) == 64);
// static_assert(offsetof(HitResult, unk81) == 81);
// static_assert(offsetof(HitResult, indirectHit) == 108);
// static_assert(sizeof(HitResult) == 112);
 #include <MC/CommandOrigin.hpp>
 #include <MC/Actor.hpp>
#include "MC/CompoundTag.hpp"

 ServerPlayer* CommandOrigin::getPlayer() const {
     Actor* origin = getEntity();
     return origin->isPlayer() ? (ServerPlayer*)origin : nullptr;
 }
// CompoundTag CommandOrigin::serialize_1() const {
//     CompoundTag tag;
//     tag.putByte("OriginType",getOriginType());
//     return tag;
// };
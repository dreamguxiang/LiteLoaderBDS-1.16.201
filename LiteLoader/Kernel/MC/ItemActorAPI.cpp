#include "Global.h"
#include <MC/ItemActor.hpp>

ItemStack* ItemActor::getItemStack() {
    return (ItemStack*)((uintptr_t)this + 1568); // IDA Player::take Line127
}

int ItemActor::getDespawnTime() {
    return dAccess<int, 433>(this); // ItemActor::NormalTick Line258
}

bool ItemActor::setDespawnTime(int a1) {
    dAccess<int, 433>(this) = a1;
    return true;
}

int ItemActor::getLatestSpawnTime() {
    return dAccess<int, 428>(this);
}
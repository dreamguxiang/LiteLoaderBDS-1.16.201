#include "Global.h"
#include <MC/ItemActor.hpp>

ItemStack* ItemActor::getItemStack() {
    return &mItem;
}

int ItemActor::getDespawnTime() {
    return mLifeTime;
}

bool ItemActor::setDespawnTime(int a1) {
    mLifeTime = a1;
    return true;
}

int ItemActor::getLatestSpawnTime() {
    return mAge;
}
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTCOMPONENT
public:
    class LootComponent& operator=(class LootComponent const &) = delete;
    LootComponent(class LootComponent const &) = delete;
    LootComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTCOMPONENT
#endif
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int) const;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootPoolEntry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTPOOLENTRY
public:
    class LootPoolEntry& operator=(class LootPoolEntry const &) = delete;
    LootPoolEntry(class LootPoolEntry const &) = delete;
    LootPoolEntry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTPOOLENTRY
#endif
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value);

};
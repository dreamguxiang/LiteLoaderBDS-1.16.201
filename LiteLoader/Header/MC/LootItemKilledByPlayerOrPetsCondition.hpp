// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemKilledByPlayerOrPetsCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYPLAYERORPETSCONDITION
public:
    class LootItemKilledByPlayerOrPetsCondition& operator=(class LootItemKilledByPlayerOrPetsCondition const &) = delete;
    LootItemKilledByPlayerOrPetsCondition(class LootItemKilledByPlayerOrPetsCondition const &) = delete;
    LootItemKilledByPlayerOrPetsCondition() = delete;
#endif

public:
    /*0*/ virtual ~LootItemKilledByPlayerOrPetsCondition();
    /*1*/ virtual bool applies(class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMKILLEDBYPLAYERORPETSCONDITION
#endif

};
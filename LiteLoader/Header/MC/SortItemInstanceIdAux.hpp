// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SortItemInstanceIdAux {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SORTITEMINSTANCEIDAUX
public:
    class SortItemInstanceIdAux& operator=(class SortItemInstanceIdAux const &) = delete;
    SortItemInstanceIdAux(class SortItemInstanceIdAux const &) = delete;
    SortItemInstanceIdAux() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SORTITEMINSTANCEIDAUX
#endif
    MCAPI bool operator()(class ItemInstance const &, class ItemInstance const &) const;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TridentChannelingEnchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTCHANNELINGENCHANT
public:
    class TridentChannelingEnchant& operator=(class TridentChannelingEnchant const &) = delete;
    TridentChannelingEnchant(class TridentChannelingEnchant const &) = delete;
    TridentChannelingEnchant() = delete;
#endif

public:
    /*0*/ virtual ~TridentChannelingEnchant();
    /*1*/ virtual bool isCompatibleWith(enum Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual int getMaxLevel() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIDENTCHANNELINGENCHANT
#endif

};
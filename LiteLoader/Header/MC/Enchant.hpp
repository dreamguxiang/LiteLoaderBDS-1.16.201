// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Enchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANT
public:
    class Enchant& operator=(class Enchant const &) = delete;
    Enchant(class Enchant const &) = delete;
    Enchant() = delete;
#endif

public:
    /*0*/ virtual ~Enchant();
    /*1*/ virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual int getMinLevel() const;
    /*5*/ virtual int getMaxLevel() const;
    /*6*/ virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /*7*/ virtual float getDamageBonus(int, class Actor const &) const;
    /*8*/ virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual bool isTreasureOnly() const;
    /*13*/ virtual bool isDiscoverable() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANT
    MCVAPI bool isMeleeDamageEnchant() const;
    MCVAPI bool isProtectionEnchant() const;
#endif
    MCAPI Enchant(enum class Enchant::Type, enum class Enchant::Frequency, std::string const &, std::string const &, int, int, bool);
    MCAPI bool isAvailable() const;
    MCAPI static void initEnchants();
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;

};
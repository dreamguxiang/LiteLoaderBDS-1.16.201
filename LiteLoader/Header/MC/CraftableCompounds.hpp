// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CraftableCompounds {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTABLECOMPOUNDS
public:
    class CraftableCompounds& operator=(class CraftableCompounds const &) = delete;
#endif

public:
    /*0*/ virtual ~CraftableCompounds();
    /*1*/ virtual void _registerCompound(std::vector<class ItemStack> const &, class ItemStack const &, enum class LabTableReactionType, enum class CompoundContainerType);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTABLECOMPOUNDS
#endif
    MCAPI CraftableCompounds();
    MCAPI CraftableCompounds(class CraftableCompounds const &);
    MCAPI class ItemStack const & getCompound(std::vector<class ItemStack> const &);
    MCAPI enum class LabTableReactionType getReaction(std::vector<class ItemStack> const &);
    MCAPI void registerCompounds();

//protected:
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const &);
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, enum class CompoundType, enum class LabTableReactionType, enum class CompoundContainerType, int);
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const &, class ItemStack const &, enum class LabTableReactionType, enum class CompoundContainerType);

protected:

};
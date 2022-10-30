// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MapLockingRecipe : public Recipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPLOCKINGRECIPE
public:
    class MapLockingRecipe& operator=(class MapLockingRecipe const &) = delete;
    MapLockingRecipe(class MapLockingRecipe const &) = delete;
    MapLockingRecipe() = delete;
#endif

public:
    /*0*/ virtual ~MapLockingRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPLOCKINGRECIPE
#endif
    MCAPI MapLockingRecipe(std::string, class mce::UUID const &);
    MCAPI static class mce::UUID const CartographyTableID;

};
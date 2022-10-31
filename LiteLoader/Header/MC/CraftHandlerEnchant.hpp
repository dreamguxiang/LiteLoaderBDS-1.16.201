// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CraftHandlerEnchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERENCHANT
public:
    class CraftHandlerEnchant& operator=(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant(class CraftHandlerEnchant const &) = delete;
    CraftHandlerEnchant() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerEnchant();
    /*1*/ virtual void endRequestBatch();
    /*2*/ virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /*3*/ virtual void _postCraftRequest(bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERENCHANT
#endif

//private:
    MCAPI class EnchantingContainerManagerModel & _getEnchantingModel() const;
    MCAPI enum class ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 9> const &);

private:

};
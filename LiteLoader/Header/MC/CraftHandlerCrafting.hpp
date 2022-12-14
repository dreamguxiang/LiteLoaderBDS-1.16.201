// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CraftHandlerCrafting {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERCRAFTING
public:
    class CraftHandlerCrafting& operator=(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting(class CraftHandlerCrafting const &) = delete;
    CraftHandlerCrafting() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerCrafting();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERCRAFTING
#endif

//private:
    MCAPI enum class ItemStackNetResult _handleCraftCreative(class ItemStackRequestActionCraft<class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0>, 11> const &);
    MCAPI enum class ItemStackNetResult _handleCraftOutput(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 9> const &);

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftRecipeOptional {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
public:
    class ItemStackRequestActionCraftRecipeOptional& operator=(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
    ItemStackRequestActionCraftRecipeOptional(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
    ItemStackRequestActionCraftRecipeOptional() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestActionCraftRecipeOptional();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual int getFilteredStringIndex() const;
    /*3*/ virtual void _write(class BinaryStream &) const;
    /*4*/ virtual bool _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
#endif

};
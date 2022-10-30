// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemInstance : public ItemStackBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /*0*/ virtual ~ItemInstance();
    /*1*/ virtual void reinit(class Item const &, int, int);
    /*2*/ virtual void reinit(class BlockLegacy const &, int);
    /*3*/ virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMINSTANCE
#endif
    MCAPI ItemInstance(class ItemInstance const &);
    MCAPI ItemInstance(class ItemStackBase const &);
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    MCAPI ItemInstance(class BlockLegacy const &, int);
    MCAPI ItemInstance();
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
    MCAPI static class ItemInstance const EMPTY_ITEM;
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

};
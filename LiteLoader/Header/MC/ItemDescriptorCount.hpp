// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemDescriptorCount {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTORCOUNT
public:
    class ItemDescriptorCount& operator=(class ItemDescriptorCount const &) = delete;
    ItemDescriptorCount() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTORCOUNT
#endif
    MCAPI ItemDescriptorCount(class BlockLegacy const &, unsigned short);
    MCAPI ItemDescriptorCount(class gsl::basic_string_span<char const, -1>, int, unsigned short);
    MCAPI ItemDescriptorCount(class Block const &, unsigned short);
    MCAPI ItemDescriptorCount(class ItemDescriptorCount const &);

};
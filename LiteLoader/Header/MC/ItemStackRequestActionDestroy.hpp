// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionDestroy : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONDESTROY
public:
    class ItemStackRequestActionDestroy& operator=(class ItemStackRequestActionDestroy const &) = delete;
    ItemStackRequestActionDestroy(class ItemStackRequestActionDestroy const &) = delete;
    ItemStackRequestActionDestroy() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestActionDestroy();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void _write(class BinaryStream &) const;
    /*4*/ virtual bool _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONDESTROY
#endif

};
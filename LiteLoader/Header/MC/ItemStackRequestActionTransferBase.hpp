// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTRANSFERBASE
public:
    class ItemStackRequestActionTransferBase& operator=(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase(class ItemStackRequestActionTransferBase const &) = delete;
    ItemStackRequestActionTransferBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONTRANSFERBASE
    MCVAPI bool _read(class ReadOnlyBinaryStream &);
    MCVAPI void _write(class BinaryStream &) const;
    MCVAPI ~ItemStackRequestActionTransferBase();
#endif

};
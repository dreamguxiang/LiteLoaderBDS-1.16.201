// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PlayerListEntry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTENTRY
public:
    class PlayerListEntry& operator=(class PlayerListEntry const &) = delete;
    PlayerListEntry(class PlayerListEntry const &) = delete;
    PlayerListEntry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERLISTENTRY
#endif
    MCAPI PlayerListEntry(class PlayerListEntry &&);
    MCAPI class PlayerListEntry clone() const;
    MCAPI bool read(class ReadOnlyBinaryStream &);
    MCAPI void write(class BinaryStream &) const;
    MCAPI ~PlayerListEntry();

};
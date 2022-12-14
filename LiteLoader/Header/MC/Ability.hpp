// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Ability {

#define AFTER_EXTRA
public:
    char filler[12];
    enum class Type : unsigned char {
        Invalid = 0x0,
        Unset = 0x1,
        Bool = 0x2,
        Float = 0x3,
    };

    enum class Options : unsigned char{
        None = 0x0,
        NoSave = 0x1,
        CommandExposed = 0x2,
        PermissionsInterfaceExposed = 0x4,
        WorldbuilderOverrides = 0x8,
    };

	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITY
public:
    class Ability& operator=(class Ability const &) = delete;
    Ability(class Ability const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABILITY
#endif
    MCAPI Ability();

};




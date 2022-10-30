// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Abilities {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABILITIES
#endif
    MCAPI Abilities(class Abilities const &);
    MCAPI Abilities();
    MCAPI void addSaveData(class CompoundTag &) const;
    MCAPI bool loadSaveData(class CompoundTag const &);
    MCAPI class Abilities & operator=(class Abilities const &);
    MCAPI void setPlayerPermissions(enum PlayerPermissionLevel);
    MCAPI ~Abilities();

//private:
    MCAPI void _registerAbilities();

private:
    MCAPI static class std::array<char const *, 18> ABILITY_NAMES;
    MCAPI static std::string const TAG;

};
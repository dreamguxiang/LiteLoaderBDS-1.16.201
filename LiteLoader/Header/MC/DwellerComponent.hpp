// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DwellerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERCOMPONENT
public:
    class DwellerComponent& operator=(class DwellerComponent const &) = delete;
    DwellerComponent(class DwellerComponent const &) = delete;
    DwellerComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DWELLERCOMPONENT
#endif
    MCAPI DwellerComponent(class DwellerComponent &&);
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor &);
    MCAPI class BlockPos getVillageCenter(class Actor const &) const;
    MCAPI bool hasPreferredProfession(class Actor const &) const;
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void onDeath(class Actor &, class ActorDamageSource const &);
    MCAPI void onRemove(class Actor &);
    MCAPI class DwellerComponent & operator=(class DwellerComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setDwellingUniqueID(class Actor &, class mce::UUID);
    MCAPI void setLastHurtByMob(class Actor &, class Mob *);
    MCAPI bool tryToFixupRole(class Actor const &, class Village *);

//private:
    MCAPI enum class DwellerRole _getRole(std::string const &) const;
    MCAPI enum class DwellerComponent::DwellingType _getType(std::string const &) const;
    MCAPI bool _isLockedInToProfession(class Actor const &) const;

private:
    MCAPI static class std::unordered_map<std::string, enum class DwellerRole, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerRole>>> const DWELLING_ROLES;
    MCAPI static class std::unordered_map<std::string, enum class DwellerComponent::DwellingType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerComponent::DwellingType>>> const DWELLING_TYPES;

};
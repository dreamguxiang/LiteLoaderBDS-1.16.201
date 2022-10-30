// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FogCommandComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGCOMMANDCOMPONENT
public:
    class FogCommandComponent& operator=(class FogCommandComponent const &) = delete;
    FogCommandComponent(class FogCommandComponent const &) = delete;
    FogCommandComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOGCOMMANDCOMPONENT
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI std::vector<std::string> getFogSettingsStack() const;
    MCAPI bool pushFogSetting(std::string const &, std::string const &);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI bool removeFogSettings(std::string const &);

};
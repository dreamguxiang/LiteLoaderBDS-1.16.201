// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScreenCapabilitiesRepo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENCAPABILITIESREPO
public:
    class ScreenCapabilitiesRepo& operator=(class ScreenCapabilitiesRepo const &) = delete;
    ScreenCapabilitiesRepo(class ScreenCapabilitiesRepo const &) = delete;
    ScreenCapabilitiesRepo() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENCAPABILITIESREPO
#endif
    MCAPI std::unique_ptr<class IScreenCapabilities> get(std::string const &) const;

};
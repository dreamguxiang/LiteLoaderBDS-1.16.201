// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorldTemplatePackManifest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKMANIFEST
public:
    class WorldTemplatePackManifest& operator=(class WorldTemplatePackManifest const &) = delete;
    WorldTemplatePackManifest(class WorldTemplatePackManifest const &) = delete;
    WorldTemplatePackManifest() = delete;
#endif

public:
    /*0*/ virtual ~WorldTemplatePackManifest();
    /*1*/ virtual std::unique_ptr<class PackManifest> clone() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEPACKMANIFEST
#endif

};
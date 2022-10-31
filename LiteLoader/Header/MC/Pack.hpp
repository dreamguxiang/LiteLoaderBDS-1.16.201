// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Pack {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACK
public:
    class Pack& operator=(class Pack const &) = delete;
    Pack(class Pack const &) = delete;
    Pack() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACK
#endif
    MCAPI Pack(std::unique_ptr<class PackManifest>, std::unique_ptr<class PackAccessStrategy>, std::unique_ptr<class SubpackInfoCollection>, std::unique_ptr<class PackMetadata>);
    MCAPI void move(class Pack &&);
    MCAPI void notifyDeleted();
    MCAPI static std::unique_ptr<class Pack> createPack(class ResourceLocation const &, enum class PackType, enum class PackOrigin, class PackManifestFactory &, class IContentKeyProvider const &, class PackSourceReport *);
    MCAPI static std::unique_ptr<class PackMetadata> createPackMetadata(enum class PackType, class PackManifest &, class PackAccessStrategy const &, class PackReport &);

//private:

private:
    MCAPI static class Core::PathBuffer<std::string> const EDUCATION_METADATA_FILE;

};
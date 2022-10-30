// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"
#include "FileUploadManager.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ResourcePackFileUploadManager : public FileUploadManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKFILEUPLOADMANAGER
public:
    class ResourcePackFileUploadManager& operator=(class ResourcePackFileUploadManager const &) = delete;
    ResourcePackFileUploadManager(class ResourcePackFileUploadManager const &) = delete;
    ResourcePackFileUploadManager() = delete;
#endif

public:
    /*0*/ virtual ~ResourcePackFileUploadManager();
    /*2*/ virtual void uploadFileToRealmStorage(std::string const &, class Core::Path const &, std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKFILEUPLOADMANAGER
#endif
    MCAPI void uploadResourcePack(std::string const &, class ResourceLocation const &, bool, bool, enum PackType, bool);

//private:
    MCAPI void _uploadPackToRealmStorage(std::string const &, class Core::Path const &, std::string const &);
    MCAPI void _uploadResourcePackFolder(std::string const &, class ResourceLocation const &, class Core::Path const &, bool, class Json::Value const &);

private:

};
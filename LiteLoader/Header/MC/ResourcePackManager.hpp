// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ResourcePackManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKMANAGER
public:
    class ResourcePackManager& operator=(class ResourcePackManager const &) = delete;
    ResourcePackManager(class ResourcePackManager const &) = delete;
    ResourcePackManager() = delete;
#endif

public:
    /*0*/ virtual ~ResourcePackManager();
    /*1*/ virtual bool load(class ResourceLocation const &, std::string &) const;
    /*2*/ virtual bool load(class ResourceLocation const &, std::string &, std::vector<std::string> const &) const;
    /*3*/ virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /*4*/ virtual std::vector<struct ResourcePath> loadAllVersionsOf(class ResourceLocation const &) const;
    /*5*/ virtual bool isInStreamableLocation(class ResourceLocation const &) const;
    /*6*/ virtual bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*7*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /*8*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*9*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /*10*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /*11*/ virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*12*/ virtual bool hasCapability(class gsl::basic_string_span<char const, -1>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKMANAGER
#endif
    MCAPI ResourcePackManager(class std::function<class Core::PathBuffer<std::string> (void)>, class ContentTierManager const &, bool);
    MCAPI int composeFullStack(class ResourcePackStack &, class ResourcePackStack const &, class ResourcePackStack const &, class ResourcePackStack const &) const;
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(class PackInstance const &, std::string const &) const;
    MCAPI class ResourcePackStack const & getStack(enum class ResourcePackStackType) const;
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum class ResourcePackStackType, bool);

//private:
    MCAPI void _calculateMinEngineVersionFromFullStack();
    MCAPI void _composeFullStack();
    MCAPI void _getResourcesOfGroup(class PackInstance const &, std::string const &, std::vector<class Core::PathBuffer<std::string>> &) const;
    MCAPI void _updateLanguageSubpacks();

private:

};
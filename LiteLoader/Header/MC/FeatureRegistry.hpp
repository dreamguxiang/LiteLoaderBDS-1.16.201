// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FeatureRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY
public:
    class FeatureRegistry& operator=(class FeatureRegistry const &) = delete;
    FeatureRegistry(class FeatureRegistry const &) = delete;
    FeatureRegistry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATUREREGISTRY
#endif
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider &, class ResourcePackManager const &, class Experiments const &);
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const &) const;
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const &);
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const &);
    MCAPI ~FeatureRegistry();

//private:
    MCAPI std::string const _featureNamespaceFromInput(std::string const &);
    MCAPI void _registerFeature(std::string const &, std::unique_ptr<class IFeature>);
    MCAPI void _setupFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, std::string const &);

private:

};
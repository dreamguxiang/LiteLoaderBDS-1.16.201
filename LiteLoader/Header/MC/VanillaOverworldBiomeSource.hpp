// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LayerBiomeSource.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VanillaOverworldBiomeSource : public LayerBiomeSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAOVERWORLDBIOMESOURCE
public:
    class VanillaOverworldBiomeSource& operator=(class VanillaOverworldBiomeSource const &) = delete;
    VanillaOverworldBiomeSource(class VanillaOverworldBiomeSource const &) = delete;
    VanillaOverworldBiomeSource() = delete;
#endif

public:
    /*0*/ virtual ~VanillaOverworldBiomeSource();
    /*2*/ virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /*3*/ virtual bool containsOnly(int, int, int, class gsl::span<int const, -1>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAOVERWORLDBIOMESOURCE
#endif
    MCAPI VanillaOverworldBiomeSource(class std::shared_ptr<class Layer<class Biome *> const>, class std::shared_ptr<class Layer<class Biome *> const>);

};
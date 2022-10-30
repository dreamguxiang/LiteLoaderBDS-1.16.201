// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EndPodiumFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPODIUMFEATURE
public:
    class EndPodiumFeature& operator=(class EndPodiumFeature const &) = delete;
    EndPodiumFeature(class EndPodiumFeature const &) = delete;
    EndPodiumFeature() = delete;
#endif

public:
    /*0*/ virtual ~EndPodiumFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDPODIUMFEATURE
#endif
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
    MCAPI static class BlockPos const END_PODIUM_LOCATION;

};
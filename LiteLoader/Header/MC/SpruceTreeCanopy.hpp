// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SpruceTreeCanopy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPRUCETREECANOPY
public:
    class SpruceTreeCanopy& operator=(class SpruceTreeCanopy const &) = delete;
    SpruceTreeCanopy(class SpruceTreeCanopy const &) = delete;
    SpruceTreeCanopy() = delete;
#endif

public:
    /*0*/ virtual ~SpruceTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPRUCETREECANOPY
#endif

};
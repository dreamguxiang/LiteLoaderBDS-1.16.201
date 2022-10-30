// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AcaciaTreeTrunk {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACACIATREETRUNK
public:
    class AcaciaTreeTrunk& operator=(class AcaciaTreeTrunk const &) = delete;
    AcaciaTreeTrunk(class AcaciaTreeTrunk const &) = delete;
    AcaciaTreeTrunk() = delete;
#endif

public:
    /*0*/ virtual ~AcaciaTreeTrunk();
    /*1*/ virtual class std::optional<class BlockPos> placeTrunk(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACACIATREETRUNK
#endif

//private:
    MCAPI void _placeLeaningBranches(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &, class Random &, class RenderParams &, int, int, int, struct TreeHelper::TreeParams const &) const;
    MCAPI void _placeVerticalBranches(class IBlockWorldGenAPI &, class BlockPos const &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &) const;

private:

};
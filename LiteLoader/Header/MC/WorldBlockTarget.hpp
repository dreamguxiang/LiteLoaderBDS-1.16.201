// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorldBlockTarget {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDBLOCKTARGET
public:
    class WorldBlockTarget& operator=(class WorldBlockTarget const &) = delete;
    WorldBlockTarget(class WorldBlockTarget const &) = delete;
    WorldBlockTarget() = delete;
#endif

public:
    /*0*/ virtual ~WorldBlockTarget();
    /*1*/ virtual class Block const & getBlock(class BlockPos const &) const;
    /*2*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /*3*/ virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /*4*/ virtual bool apply() const;
    /*5*/ virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /*6*/ virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /*7*/ virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /*8*/ virtual short getMaxHeight() const;
    /*9*/ virtual short getMinHeight() const;
    /*10*/ virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /*11*/ virtual short getHeightmap(int, int);
    /*12*/ virtual bool isLegacyLevel();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDBLOCKTARGET
#endif

};
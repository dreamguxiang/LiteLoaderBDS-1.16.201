// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacyStructureSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSTRUCTURESETTINGS
#endif
    MCAPI LegacyStructureSettings(class LegacyStructureSettings const &);
    MCAPI LegacyStructureSettings();
    MCAPI class Block const & getSwappedBlock(class BlockPalette const &, class Block const &) const;
    MCAPI class LegacyStructureSettings & operator=(class LegacyStructureSettings const &);
    MCAPI void updateBoundingBoxFromChunkPos();
    MCAPI ~LegacyStructureSettings();
    MCAPI static float const INTEGRITY_MAX;

};
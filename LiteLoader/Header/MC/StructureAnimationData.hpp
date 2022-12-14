// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureAnimationData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONDATA
public:
    class StructureAnimationData& operator=(class StructureAnimationData const &) = delete;
    StructureAnimationData(class StructureAnimationData const &) = delete;
    StructureAnimationData() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREANIMATIONDATA
#endif
    MCAPI StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const &, class StructureSettings const &, unsigned char, class BlockPos const &);
    MCAPI StructureAnimationData(class StructureAnimationData &&);
    MCAPI class CompoundTag & serialize(class CompoundTag &);
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);
    MCAPI ~StructureAnimationData();
    MCAPI static class StructureAnimationData load(std::string const &, class CompoundTag const &);

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureTemplateFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEFEATURE
public:
    class StructureTemplateFeature& operator=(class StructureTemplateFeature const &) = delete;
    StructureTemplateFeature(class StructureTemplateFeature const &) = delete;
    StructureTemplateFeature() = delete;
#endif

public:
    /*0*/ virtual ~StructureTemplateFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATEFEATURE
#endif

};
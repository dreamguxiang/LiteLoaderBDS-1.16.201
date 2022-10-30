// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LiquidBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LiquidBlockDynamic : public LiquidBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCKDYNAMIC
public:
    class LiquidBlockDynamic& operator=(class LiquidBlockDynamic const &) = delete;
    LiquidBlockDynamic(class LiquidBlockDynamic const &) = delete;
    LiquidBlockDynamic() = delete;
#endif

public:
    /*0*/ virtual ~LiquidBlockDynamic();
    /*16*/ virtual void __unk_vfn_16();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*45*/ virtual void __unk_vfn_45();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*65*/ virtual void __unk_vfn_65();
    /*79*/ virtual void __unk_vfn_79();
    /*87*/ virtual void __unk_vfn_87();
    /*93*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*146*/ virtual void __unk_vfn_146();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCKDYNAMIC
#endif
    MCAPI class std::array<bool, 4> getSpread(class BlockSource &, class BlockPos const &) const;

//private:
    MCAPI bool _canSpreadTo(class BlockSource &, class BlockPos const &, class BlockPos const &, unsigned char) const;
    MCAPI int _getSlopeDistance(class BlockSource &, class BlockPos const &, int, int) const;
    MCAPI bool _isWaterBlocking(class BlockSource &, class BlockPos const &, class BlockPos const &, unsigned char) const;
    MCAPI bool _tick(class BlockSource &, class BlockPos const &, class Random &, bool) const;
    MCAPI void _trySpreadTo(class BlockSource &, class BlockPos const &, int, class BlockPos const &, unsigned char) const;

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HoneyBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HONEYBLOCK
public:
    class HoneyBlock& operator=(class HoneyBlock const &) = delete;
    HoneyBlock(class HoneyBlock const &) = delete;
    HoneyBlock() = delete;
#endif

public:
    /*0*/ virtual ~HoneyBlock();
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class BlockSource &, class BlockPos const &, class Actor *) const;
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
    /*124*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*146*/ virtual void __unk_vfn_146();
    /*154*/ virtual void onStandOn(class Actor &, class BlockPos const &) const;
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*159*/ virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /*163*/ virtual void __unk_vfn_163();
    /*169*/ virtual int getExtraRenderLayers() const;
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HONEYBLOCK
#endif

};
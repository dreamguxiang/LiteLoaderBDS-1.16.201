// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RedStoneOreBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONEOREBLOCK
public:
    class RedStoneOreBlock& operator=(class RedStoneOreBlock const &) = delete;
    RedStoneOreBlock(class RedStoneOreBlock const &) = delete;
    RedStoneOreBlock() = delete;
#endif

public:
    /*0*/ virtual ~RedStoneOreBlock();
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
    /*82*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*83*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*91*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*94*/ virtual int getExperienceDrop(class Random &) const;
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*133*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*146*/ virtual void __unk_vfn_146();
    /*147*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*154*/ virtual void onStandOn(class Actor &, class BlockPos const &) const;
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*165*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REDSTONEOREBLOCK
#endif

//private:
    MCAPI void _interact(class BlockSource &, class BlockPos const &) const;
    MCAPI void _poofParticles(class BlockSource &, class BlockPos const &) const;

private:

};
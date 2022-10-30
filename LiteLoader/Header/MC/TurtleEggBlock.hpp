// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TurtleEggBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TURTLEEGGBLOCK
public:
    class TurtleEggBlock& operator=(class TurtleEggBlock const &) = delete;
    TurtleEggBlock(class TurtleEggBlock const &) = delete;
    TurtleEggBlock() = delete;
#endif

public:
    /*0*/ virtual ~TurtleEggBlock();
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
    /*46*/ virtual bool canContainLiquid() const;
    /*48*/ virtual void __unk_vfn_48();
    /*52*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*55*/ virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /*58*/ virtual void __unk_vfn_58();
    /*65*/ virtual void __unk_vfn_65();
    /*72*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*78*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*82*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*83*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*93*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*114*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*115*/ virtual bool isAuxValueRelevantForPicking() const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*146*/ virtual void __unk_vfn_146();
    /*147*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*165*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TURTLEEGGBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif

//private:
    MCAPI void _decreaseEggs(class BlockSource &, class BlockPos const &, unsigned int, bool) const;
    MCAPI void _destroyEgg(class BlockSource &, class BlockPos const &, class Actor &, int, bool) const;

private:

};
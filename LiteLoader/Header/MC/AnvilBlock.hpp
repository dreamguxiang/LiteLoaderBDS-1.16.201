// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AnvilBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILBLOCK
public:
    class AnvilBlock& operator=(class AnvilBlock const &) = delete;
    AnvilBlock(class AnvilBlock const &) = delete;
    AnvilBlock() = delete;
#endif

public:
    /*0*/ virtual ~AnvilBlock();
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
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
    /*58*/ virtual void __unk_vfn_58();
    /*65*/ virtual void __unk_vfn_65();
    /*76*/ virtual bool breaksFallingBlocks(class Block const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*83*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*114*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*115*/ virtual bool isAuxValueRelevantForPicking() const;
    /*127*/ virtual int getVariant(class Block const &) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*133*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*146*/ virtual void __unk_vfn_146();
    /*147*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*163*/ virtual void __unk_vfn_163();
    /*165*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*174*/ virtual void __unk_vfn_174();
    /*178*/ virtual class mce::Color getDustColor(class Block const &) const;
    /*179*/ virtual std::string getDustParticleName(class Block const &) const;
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /*182*/ virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /*183*/ virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANVILBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool falling() const;
    MCVAPI bool isCraftingBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif

};
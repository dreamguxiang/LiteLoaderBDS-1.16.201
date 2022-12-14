// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StairBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STAIRBLOCK
public:
    class StairBlock& operator=(class StairBlock const &) = delete;
    StairBlock(class StairBlock const &) = delete;
    StairBlock() = delete;
#endif

public:
    /*0*/ virtual ~StairBlock();
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class Actor *) const;
    /*12*/ virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*15*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /*16*/ virtual void __unk_vfn_16();
    /*20*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
    /*63*/ virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*65*/ virtual void __unk_vfn_65();
    /*70*/ virtual bool mayPick() const;
    /*71*/ virtual bool mayPick(class BlockSource &, class Block const &, bool) const;
    /*72*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*77*/ virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*82*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*83*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*91*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*92*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*127*/ virtual int getVariant(class Block const &) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*133*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*146*/ virtual void __unk_vfn_146();
    /*152*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*153*/ virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*154*/ virtual void onStandOn(class Actor &, class BlockPos const &) const;
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*164*/ virtual class HitResult clip(class BlockSource &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*165*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STAIRBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isStairBlock() const;
#endif
    MCAPI StairBlock(std::string const &, int, class BlockLegacy const &, int);
    MCAPI bool setInnerPieceShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    MCAPI bool setStepShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;

};
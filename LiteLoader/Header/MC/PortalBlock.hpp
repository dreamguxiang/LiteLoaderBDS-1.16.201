// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PortalBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALBLOCK
public:
    class PortalBlock& operator=(class PortalBlock const &) = delete;
    PortalBlock(class PortalBlock const &) = delete;
    PortalBlock() = delete;
#endif

public:
    /*0*/ virtual ~PortalBlock();
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*16*/ virtual void __unk_vfn_16();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual bool isWaterBlocking() const;
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
    /*71*/ virtual bool mayPick(class BlockSource &, class Block const &, bool) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*82*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*93*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*123*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*133*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*146*/ virtual void __unk_vfn_146();
    /*152*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PORTALBLOCK
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI bool trySpawnPortal(class BlockSource &, class BlockPos const &) const;

};
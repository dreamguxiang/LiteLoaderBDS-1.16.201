// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BaseRailBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASERAILBLOCK
public:
    class BaseRailBlock& operator=(class BaseRailBlock const &) = delete;
    BaseRailBlock(class BaseRailBlock const &) = delete;
    BaseRailBlock() = delete;
#endif

public:
    /*0*/ virtual ~BaseRailBlock();
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
    /*56*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*58*/ virtual void __unk_vfn_58();
    /*62*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*65*/ virtual void __unk_vfn_65();
    /*73*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*82*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*96*/ virtual void __unk_vfn_96();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*121*/ virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /*124*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*146*/ virtual void __unk_vfn_146();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*168*/ virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASERAILBLOCK
    MCVAPI bool canSpawnOn() const;
    MCVAPI bool isRailBlock() const;
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI BaseRailBlock(std::string const &, int, bool);
    MCAPI static bool isRail(class BlockSource &, class BlockPos const &);
    MCAPI static bool isRail(class Block const &);

//private:
    MCAPI bool _canSurvive(class BlockSource const &, class BlockPos const &) const;
    MCAPI void _updatePlacement(class BlockSource &, class BlockPos const &) const;
    MCAPI static void _createCircuitComponent(class BlockSource &, class BlockPos const &);

private:

};
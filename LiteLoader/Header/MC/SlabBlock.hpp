// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SlabBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLABBLOCK
public:
    class SlabBlock& operator=(class SlabBlock const &) = delete;
    SlabBlock(class SlabBlock const &) = delete;
    SlabBlock() = delete;
#endif

public:
    /*0*/ virtual ~SlabBlock();
    /*6*/ virtual bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /*15*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
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
    /*33*/ virtual bool isDoubleSlabBlock() const;
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*45*/ virtual void __unk_vfn_45();
    /*48*/ virtual void __unk_vfn_48();
    /*52*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*58*/ virtual void __unk_vfn_58();
    /*63*/ virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*65*/ virtual void __unk_vfn_65();
    /*79*/ virtual void __unk_vfn_79();
    /*82*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*83*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*96*/ virtual void __unk_vfn_96();
    /*102*/ virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*115*/ virtual bool isAuxValueRelevantForPicking() const;
    /*124*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*146*/ virtual void __unk_vfn_146();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*163*/ virtual void __unk_vfn_163();
    /*174*/ virtual void __unk_vfn_174();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLABBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isSlabBlock() const;
#endif
    MCAPI SlabBlock(std::string const &, int, bool, class Material const &, class WeakPtr<class BlockLegacy>);

};
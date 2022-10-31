// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CropBlock : public BushBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROPBLOCK
public:
    class CropBlock& operator=(class CropBlock const &) = delete;
    CropBlock(class CropBlock const &) = delete;
    CropBlock() = delete;
#endif

public:
    /*0*/ virtual ~CropBlock();
    /*4*/ virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
    /*67*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /*69*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*74*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*84*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*85*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*87*/ virtual void __unk_vfn_87();
    /*96*/ virtual void __unk_vfn_96();
    /*98*/ virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*127*/ virtual int getVariant(class Block const &) const;
    /*128*/ virtual void __unk_vfn_128();
    /*131*/ virtual void __unk_vfn_131();
    /*146*/ virtual void __unk_vfn_146();
    /*155*/ virtual void __unk_vfn_155();
    /*156*/ virtual void __unk_vfn_156();
    /*157*/ virtual void __unk_vfn_157();
    /*161*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*163*/ virtual void __unk_vfn_163();
    /*166*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*174*/ virtual void __unk_vfn_174();
    /*179*/ virtual class ItemInstance const getBaseSeed() const;
    /*180*/ virtual class ItemInstance const getBaseCrop() const;
    /*181*/ virtual int getSeedNum(class Random &, int, int, bool) const;
    /*182*/ virtual int getCropNum(class Random &, int, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CROPBLOCK
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI CropBlock(std::string const &, int);

//private:
    MCAPI float getGrowthSpeed(class BlockSource &, class BlockPos const &) const;

private:

};
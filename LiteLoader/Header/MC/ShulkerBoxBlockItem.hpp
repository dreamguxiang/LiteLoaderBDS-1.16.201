// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShulkerBoxBlockItem : public BlockItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXBLOCKITEM
public:
    class ShulkerBoxBlockItem& operator=(class ShulkerBoxBlockItem const &) = delete;
    ShulkerBoxBlockItem(class ShulkerBoxBlockItem const &) = delete;
    ShulkerBoxBlockItem() = delete;
#endif

public:
    /*0*/ virtual ~ShulkerBoxBlockItem();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_16();
    /*37*/ virtual int getLevelDataForAuxValue(int) const;
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
    /*52*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*57*/ virtual void __unk_vfn_57();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual void __unk_vfn_65();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*87*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*88*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*117*/ virtual void __unk_vfn_117();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCKITEM
#endif

//private:
    MCAPI std::string buildContainedItemList(class CompoundTag const *) const;

private:

};
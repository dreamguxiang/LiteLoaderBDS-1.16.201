// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKITEM
public:
    class BlockItem& operator=(class BlockItem const &) = delete;
    BlockItem(class BlockItem const &) = delete;
    BlockItem() = delete;
#endif

public:
    /*0*/ virtual ~BlockItem();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_16();
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
    /*48*/ virtual bool isDestructive(int) const;
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual bool isValidAuxValue(int) const;
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual void __unk_vfn_65();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*87*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*109*/ virtual struct Brightness getLightEmission(int) const;
    /*110*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*111*/ virtual int getIconYOffset() const;
    /*117*/ virtual void __unk_vfn_117();
    /*122*/ virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /*123*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKITEM
#endif
    MCAPI BlockItem(std::string const &, int);

};
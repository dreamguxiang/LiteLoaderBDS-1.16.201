// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BowItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOWITEM
public:
    class BowItem& operator=(class BowItem const &) = delete;
    BowItem(class BowItem const &) = delete;
    BowItem() = delete;
#endif

public:
    /*0*/ virtual ~BowItem();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_16();
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
    /*54*/ virtual int getEnchantSlot() const;
    /*57*/ virtual void __unk_vfn_57();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual void __unk_vfn_65();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*110*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*112*/ virtual class Item & setIcon(std::string const &, int);
    /*117*/ virtual void __unk_vfn_117();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOWITEM
#endif

};
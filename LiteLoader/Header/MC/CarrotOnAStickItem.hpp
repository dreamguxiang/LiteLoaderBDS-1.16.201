// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CarrotOnAStickItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARROTONASTICKITEM
public:
    class CarrotOnAStickItem& operator=(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem() = delete;
#endif

public:
    /*0*/ virtual ~CarrotOnAStickItem();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_16();
    /*41*/ virtual bool isHandEquipped() const;
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
    /*51*/ virtual bool requiresInteract() const;
    /*54*/ virtual int getEnchantSlot() const;
    /*55*/ virtual int getEnchantValue() const;
    /*57*/ virtual void __unk_vfn_57();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*65*/ virtual void __unk_vfn_65();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*81*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*85*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*117*/ virtual void __unk_vfn_117();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CARROTONASTICKITEM
#endif

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MedicineItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEDICINEITEM
public:
    class MedicineItem& operator=(class MedicineItem const &) = delete;
    MedicineItem(class MedicineItem const &) = delete;
    MedicineItem() = delete;
#endif

public:
    /*0*/ virtual ~MedicineItem();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_16();
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
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
    /*76*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*78*/ virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*87*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*112*/ virtual class Item & setIcon(std::string const &, int);
    /*117*/ virtual void __unk_vfn_117();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEDICINEITEM
#endif
    MCAPI static class MobEffect const * getMobEffect(class ItemStack const &);

};
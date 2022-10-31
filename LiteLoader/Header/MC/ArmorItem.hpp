// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ArmorItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEM
public:
    class ArmorItem& operator=(class ArmorItem const &) = delete;
    ArmorItem(class ArmorItem const &) = delete;
    ArmorItem() = delete;
#endif

public:
    /*0*/ virtual ~ArmorItem();
    /*5*/ virtual void __unk_vfn_5();
    /*8*/ virtual bool isArmor() const;
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual bool isDyeable() const;
    /*16*/ virtual void __unk_vfn_16();
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
    /*52*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*53*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*54*/ virtual int getEnchantSlot() const;
    /*55*/ virtual int getEnchantValue() const;
    /*56*/ virtual int getArmorValue() const;
    /*57*/ virtual void __unk_vfn_57();
    /*59*/ virtual int getDamageChance(int) const;
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*64*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void clearColor(class ItemStackBase &) const;
    /*68*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual int buildIdAux(short, class CompoundTag const *) const;
    /*75*/ virtual class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /*76*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*77*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*81*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*85*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*110*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*112*/ virtual class Item & setIcon(std::string const &, int);
    /*117*/ virtual void __unk_vfn_117();
    /*124*/ virtual float getArmorKnockbackResistance() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORITEM
#endif
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum class ArmorSlot);
    MCAPI void playEquipSound(class BlockSource &, enum class ArmorSlot, class Player &) const;
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;
    MCAPI static class ArmorItem::ArmorMaterial const IRON;
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum class ArmorSlot);
    MCAPI static enum class ArmorSlot getSlotForItem(class ItemStackBase const &);
    MCAPI static int const mHealthPerSlot[];

//private:
    MCAPI class ItemInstance getTierItem() const;

private:

};
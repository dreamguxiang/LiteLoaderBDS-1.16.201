// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ChemistryStickItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SparklerItem : public ChemistryStickItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARKLERITEM
public:
    class SparklerItem& operator=(class SparklerItem const &) = delete;
    SparklerItem(class SparklerItem const &) = delete;
    SparklerItem() = delete;
#endif

public:
    /*0*/ virtual ~SparklerItem();
    /*1*/ virtual bool initServer(class Json::Value &);
    /*2*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual bool isCamera() const;
    /*12*/ virtual bool isDamageable() const;
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual bool isFood() const;
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual class ICameraItemComponent * getCamera() const;
    /*21*/ virtual class IFoodItemComponent * getFood() const;
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual class Item & setMaxStackSize(unsigned char);
    /*24*/ virtual class Item & setStackedByData(bool);
    /*25*/ virtual class Item & setMaxDamage(int);
    /*26*/ virtual class Item & setHandEquipped();
    /*27*/ virtual class Item & setUseAnimation(enum UseAnimation);
    /*28*/ virtual class Item & setMaxUseDuration(int);
    /*29*/ virtual class Item & setRequiresWorldBuilder(bool);
    /*30*/ virtual class Item & setExplodable(bool);
    /*31*/ virtual class Item & setFireResistant(bool);
    /*32*/ virtual class Item & setIsGlint(bool);
    /*33*/ virtual class Item & setShouldDespawn(bool);
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual bool canBeDepleted() const;
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual bool isStackedByData() const;
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*51*/ virtual void __unk_vfn_51();
    /*52*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*53*/ virtual void __unk_vfn_53();
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual void __unk_vfn_55();
    /*56*/ virtual void __unk_vfn_56();
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual int getDamageChance(int) const;
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual void __unk_vfn_63();
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void __unk_vfn_65();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual int buildIdAux(short, class CompoundTag const *) const;
    /*75*/ virtual class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /*76*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*77*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*78*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void __unk_vfn_82();
    /*83*/ virtual void __unk_vfn_83();
    /*84*/ virtual void __unk_vfn_84();
    /*85*/ virtual void __unk_vfn_85();
    /*86*/ virtual void __unk_vfn_86();
    /*87*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*88*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /*89*/ virtual std::string buildCategoryDescriptionName() const;
    /*90*/ virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /*91*/ virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /*92*/ virtual void __unk_vfn_92();
    /*93*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*94*/ virtual void __unk_vfn_94();
    /*95*/ virtual std::string const & getCooldownType() const;
    /*96*/ virtual int getCooldownTime() const;
    /*97*/ virtual void fixupCommon(class ItemStackBase &) const;
    /*98*/ virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /*99*/ virtual short getDamageValue(class CompoundTag const *) const;
    /*100*/ virtual void setDamageValue(class ItemStackBase &, short) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*103*/ virtual void __unk_vfn_103();
    /*104*/ virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*105*/ virtual void initClient(class Json::Value &, class Json::Value &);
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual bool isEmissive(int) const;
    /*109*/ virtual struct Brightness getLightEmission(int) const;
    /*110*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*111*/ virtual void __unk_vfn_111();
    /*112*/ virtual class Item & setIcon(std::string const &, int);
    /*113*/ virtual class Item & setIcon(struct TextureUVCoordinateSet const &);
    /*114*/ virtual class Item & setIconAtlas(std::string const &, int);
    /*115*/ virtual void __unk_vfn_115();
    /*116*/ virtual void __unk_vfn_116();
    /*117*/ virtual void __unk_vfn_117();
    /*118*/ virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const &) const;
    /*119*/ virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /*120*/ virtual void __unk_vfn_120();
    /*121*/ virtual void __unk_vfn_121();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPARKLERITEM
    MCVAPI bool isHandEquipped() const;
#endif
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];

};
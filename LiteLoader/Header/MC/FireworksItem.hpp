// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FireworksItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSITEM
public:
    class FireworksItem& operator=(class FireworksItem const &) = delete;
    FireworksItem(class FireworksItem const &) = delete;
    FireworksItem() = delete;
#endif

public:
    /*0*/ virtual ~FireworksItem();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual void __unk_vfn_10();
    /*16*/ virtual void __unk_vfn_16();
    /*43*/ virtual void __unk_vfn_43();
    /*45*/ virtual void __unk_vfn_45();
    /*48*/ virtual bool isDestructive(int) const;
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
    /*76*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*77*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*117*/ virtual void __unk_vfn_117();
    /*123*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKSITEM
#endif
    MCAPI static std::string const TAG_EXPLOSIONS;
    MCAPI static std::string const TAG_E_FLIGHT;
    MCAPI static std::string const TAG_FIREWORKS;
    MCAPI static class ItemInstance const & initFireworksRocketItem(class ItemInstance &, std::vector<class ItemInstance> const &, int);
    MCAPI static class ItemStack const & initFireworksRocketItem(class ItemStack &, std::vector<class ItemStack> const &, int);

};
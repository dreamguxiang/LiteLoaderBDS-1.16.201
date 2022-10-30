// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "GameMode.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SurvivalMode : public GameMode {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURVIVALMODE
public:
    class SurvivalMode& operator=(class SurvivalMode const &) = delete;
    SurvivalMode(class SurvivalMode const &) = delete;
    SurvivalMode() = delete;
#endif

public:
    /*0*/ virtual ~SurvivalMode();
    /*1*/ virtual bool startDestroyBlock(class BlockPos const &, unsigned char, bool &);
    /*2*/ virtual bool destroyBlock(class BlockPos const &, unsigned char);
    /*5*/ virtual void startBuildBlock(class BlockPos const &, unsigned char);
    /*6*/ virtual bool buildBlock(class BlockPos const &, unsigned char);
    /*9*/ virtual void tick();
    /*11*/ virtual bool useItem(class ItemStack &);
    /*12*/ virtual bool useItemOn(class ItemStack &, class BlockPos const &, unsigned char, class Vec3 const &, class Block const *);
    /*13*/ virtual bool interact(class Actor &, class Vec3 const &);
    /*14*/ virtual bool attack(class Actor &);
    /*16*/ virtual void setTrialMode(bool);
    /*17*/ virtual bool isInTrialMode();
    /*18*/ virtual void registerUpsellScreenCallback(class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SURVIVALMODE
#endif

//private:
    MCAPI void _messagePlayers(std::string);
    MCAPI void _showTrialReminder(bool);

private:
    MCAPI static bool mTrialHasEnded;

};
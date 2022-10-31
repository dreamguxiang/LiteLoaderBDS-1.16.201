// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CameraItemComponentLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAITEMCOMPONENTLEGACY
public:
    class CameraItemComponentLegacy& operator=(class CameraItemComponentLegacy const &) = delete;
    CameraItemComponentLegacy(class CameraItemComponentLegacy const &) = delete;
    CameraItemComponentLegacy() = delete;
#endif

public:
    /*0*/ virtual ~CameraItemComponentLegacy();
    /*1*/ virtual float blackBarsDuration() const;
    /*2*/ virtual float blackBarsScreenRatio() const;
    /*3*/ virtual float shutterScreenRatio() const;
    /*4*/ virtual float shutterDuration() const;
    /*5*/ virtual float pictureDuration() const;
    /*6*/ virtual float slideAwayDuration() const;
    /*7*/ virtual bool canPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /*8*/ virtual void takePictureNow(class Player &, class Actor *, class Actor *);
    /*9*/ virtual void registerCallbacks(class CameraCallbacks *);
    /*10*/ virtual void use(class ItemStack &, class Player &);
    /*11*/ virtual void releaseUsing(class ItemStack &, class Player &, int);
    /*12*/ virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAITEMCOMPONENTLEGACY
#endif
    MCAPI bool init(class Json::Value &);

//private:
    MCAPI enum class CameraItemComponentLegacy::UseAction _tryPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char, class Vec3 &) const;

private:

};
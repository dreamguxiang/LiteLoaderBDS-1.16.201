// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RemoveOnHitSubcomponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEONHITSUBCOMPONENT
public:
    class RemoveOnHitSubcomponent& operator=(class RemoveOnHitSubcomponent const &) = delete;
    RemoveOnHitSubcomponent(class RemoveOnHitSubcomponent const &) = delete;
    RemoveOnHitSubcomponent() = delete;
#endif

public:
    /*0*/ virtual ~RemoveOnHitSubcomponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /*4*/ virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEONHITSUBCOMPONENT
    MCVAPI void readfromJSON(class Json::Value &);
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif

};
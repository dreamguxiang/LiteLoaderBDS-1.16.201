// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptLevelWeatherEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTLEVELWEATHEREVENTLISTENER
public:
    class ScriptLevelWeatherEventListener& operator=(class ScriptLevelWeatherEventListener const &) = delete;
    ScriptLevelWeatherEventListener(class ScriptLevelWeatherEventListener const &) = delete;
    ScriptLevelWeatherEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptLevelWeatherEventListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual enum EventResult onLevelWeatherChange(std::string const &, bool, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTLEVELWEATHEREVENTLISTENER
#endif

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptTelemetryEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTTELEMETRYEVENTLISTENER
public:
    class ScriptTelemetryEventListener& operator=(class ScriptTelemetryEventListener const &) = delete;
    ScriptTelemetryEventListener(class ScriptTelemetryEventListener const &) = delete;
    ScriptTelemetryEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptTelemetryEventListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual enum class EventResult onScriptLoaded(std::string const &, unsigned __int64);
    /*8*/ virtual enum class EventResult onScriptRan(std::string const &, std::string const &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTTELEMETRYEVENTLISTENER
#endif

};
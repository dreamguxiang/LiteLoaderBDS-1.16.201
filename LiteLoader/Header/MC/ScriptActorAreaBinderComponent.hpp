// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptActorAreaBinderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTORAREABINDERCOMPONENT
public:
    class ScriptActorAreaBinderComponent& operator=(class ScriptActorAreaBinderComponent const &) = delete;
    ScriptActorAreaBinderComponent(class ScriptActorAreaBinderComponent const &) = delete;
    ScriptActorAreaBinderComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptActorAreaBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &) const;
    /*2*/ virtual bool deserialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTACTORAREABINDERCOMPONENT
#endif
    MCAPI static std::string const TAG;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptQueryBinderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTQUERYBINDERCOMPONENT
public:
    class ScriptQueryBinderComponent& operator=(class ScriptQueryBinderComponent const &) = delete;
    ScriptQueryBinderComponent(class ScriptQueryBinderComponent const &) = delete;
    ScriptQueryBinderComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptQueryBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &) const;
    /*2*/ virtual bool deserialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTQUERYBINDERCOMPONENT
#endif
    MCAPI static std::string const TAG;

};
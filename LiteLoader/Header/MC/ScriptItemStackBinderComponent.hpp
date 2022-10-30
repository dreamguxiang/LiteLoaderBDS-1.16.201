// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptItemStackBinderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMSTACKBINDERCOMPONENT
public:
    class ScriptItemStackBinderComponent& operator=(class ScriptItemStackBinderComponent const &) = delete;
    ScriptItemStackBinderComponent(class ScriptItemStackBinderComponent const &) = delete;
    ScriptItemStackBinderComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptItemStackBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &) const;
    /*2*/ virtual bool deserialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMSTACKBINDERCOMPONENT
#endif
    MCAPI ScriptItemStackBinderComponent(class entt::basic_registry<enum entt::entity> &, class ItemInstance const &);
    MCAPI static std::string const COUNT;
    MCAPI static std::string const ITEM;
    MCAPI static std::string const TAG;
    MCAPI static std::string const UNDEFINED;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DyeableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYEABLECOMPONENT
public:
    class DyeableComponent& operator=(class DyeableComponent const &) = delete;
    DyeableComponent(class DyeableComponent const &) = delete;
    DyeableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DYEABLECOMPONENT
#endif
    MCAPI void appendFormattedHovertext(class ItemStackBase const &, std::string &, bool) const;
    MCAPI bool hasCustomColor(class ItemStackBase const &) const;
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;

};
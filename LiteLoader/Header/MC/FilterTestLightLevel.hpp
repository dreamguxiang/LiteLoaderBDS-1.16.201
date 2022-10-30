// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FilterTestLightLevel : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTLIGHTLEVEL
public:
    class FilterTestLightLevel& operator=(class FilterTestLightLevel const &) = delete;
    FilterTestLightLevel(class FilterTestLightLevel const &) = delete;
    FilterTestLightLevel() = delete;
#endif

public:
    /*0*/ virtual ~FilterTestLightLevel();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTESTLIGHTLEVEL
#endif

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TextObjectLocalizedTextWithParams {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
public:
    class TextObjectLocalizedTextWithParams& operator=(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams() = delete;
#endif

public:
    /*0*/ virtual ~TextObjectLocalizedTextWithParams();
    /*1*/ virtual std::string asString() const;
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
#endif
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const &);

};
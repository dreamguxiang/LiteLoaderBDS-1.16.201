// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct CommandBlockDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKDESCRIPTION
public:
    struct CommandBlockDescription& operator=(struct CommandBlockDescription const &) = delete;
    CommandBlockDescription(struct CommandBlockDescription const &) = delete;
    CommandBlockDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~CommandBlockDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKDESCRIPTION
#endif

};
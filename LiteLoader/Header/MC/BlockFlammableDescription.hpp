// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BlockFlammableDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFLAMMABLEDESCRIPTION
public:
    struct BlockFlammableDescription& operator=(struct BlockFlammableDescription const &) = delete;
    BlockFlammableDescription(struct BlockFlammableDescription const &) = delete;
    BlockFlammableDescription() = delete;
#endif
public:
    /*0*/ virtual ~BlockFlammableDescription();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKFLAMMABLEDESCRIPTION
#endif
    MCAPI static std::string const NameID;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BlockQueuedTickingDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKQUEUEDTICKINGDESCRIPTION
public:
    struct BlockQueuedTickingDescription& operator=(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription() = delete;
#endif
public:
    /*0*/ virtual ~BlockQueuedTickingDescription();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKQUEUEDTICKINGDESCRIPTION
#endif
    MCAPI static std::string const NameID;

};
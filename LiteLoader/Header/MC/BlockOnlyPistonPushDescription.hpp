// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BlockOnlyPistonPushDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKONLYPISTONPUSHDESCRIPTION
public:
    struct BlockOnlyPistonPushDescription& operator=(struct BlockOnlyPistonPushDescription const &) = delete;
    BlockOnlyPistonPushDescription(struct BlockOnlyPistonPushDescription const &) = delete;
    BlockOnlyPistonPushDescription() = delete;
#endif
public:
    /*0*/ virtual ~BlockOnlyPistonPushDescription();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKONLYPISTONPUSHDESCRIPTION
#endif
    MCAPI static std::string const NameID;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterGroup.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorFilterGroup : public FilterGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFILTERGROUP
public:
    class ActorFilterGroup& operator=(class ActorFilterGroup const &) = delete;
    ActorFilterGroup() = delete;
#endif

public:
    /*0*/ virtual ~ActorFilterGroup();
    /*1*/ virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum FilterGroup::CollectionType) const;
    /*3*/ virtual bool _handleUnknownMember(std::string const &, class Json::Value const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORFILTERGROUP
#endif
    MCAPI ActorFilterGroup(class ActorFilterGroup const &);
    MCAPI ActorFilterGroup(class ActorFilterGroup &&);
    MCAPI bool evaluateActor(class Actor const &, class VariantParameterList const &) const;
    MCAPI static void initialize();

//protected:
    MCAPI bool _addLegacyFilter(std::string const &, struct ActorFilterGroup::LegacyMapping const &, class FilterInput const &);
    MCAPI bool _processLegacyArray(std::string const &, class Json::Value const &, struct ActorFilterGroup::LegacyMapping const &);
    MCAPI bool _processLegacyMember(std::string const &, class Json::Value const &, struct ActorFilterGroup::LegacyMapping const &);

protected:

};
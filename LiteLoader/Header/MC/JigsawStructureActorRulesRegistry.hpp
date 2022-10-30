// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class JigsawStructureActorRulesRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREACTORRULESREGISTRY
public:
    class JigsawStructureActorRulesRegistry& operator=(class JigsawStructureActorRulesRegistry const &) = delete;
    JigsawStructureActorRulesRegistry(class JigsawStructureActorRulesRegistry const &) = delete;
    JigsawStructureActorRulesRegistry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWSTRUCTUREACTORRULESREGISTRY
#endif
    MCAPI std::vector<std::unique_ptr<class StructurePoolActorRule>> const * lookupByName(std::string) const;
    MCAPI void registerActorRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolActorRule, struct std::default_delete<class StructurePoolActorRule>>>> &&);
    MCAPI ~JigsawStructureActorRulesRegistry();

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct MolangProgramBuildState {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGPROGRAMBUILDSTATE
public:
    struct MolangProgramBuildState& operator=(struct MolangProgramBuildState const &) = delete;
    MolangProgramBuildState(struct MolangProgramBuildState const &) = delete;
    MolangProgramBuildState() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOLANGPROGRAMBUILDSTATE
#endif
    MCAPI unsigned __int64 allocateInstruction();
    MCAPI void emplaceInstruction(class std::function<void (struct MolangEvalParams &)>);
    MCAPI void emplaceInstruction(unsigned __int64, class std::function<void (struct MolangEvalParams &)>);
    MCAPI void insertJumpWithMaddAtIndex(unsigned __int64, unsigned __int64, float, float);
    MCAPI unsigned __int64 numInstructions() const;
    MCAPI void popForEachScope(unsigned __int64);
    MCAPI void popLoopScope(unsigned __int64);
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    MCAPI void pushReturnValue();
    MCAPI void pushValue(float);
    MCAPI void setReturnValue(float);
    MCAPI ~MolangProgramBuildState();

};
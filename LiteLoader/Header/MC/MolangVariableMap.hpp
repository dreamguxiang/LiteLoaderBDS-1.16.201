// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MolangVariableMap {

#define AFTER_EXTRA
public:
    std::vector<short> mMapFromVariableIndexToVariableArrayOffset;
    std::vector<std::unique_ptr<class MolangVariable>> mVariables;
    bool mHasPublicVariables;
    bool mHasVariablesThatShouldSync;
    bool mHasVariablesThatShouldSave;
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVARIABLEMAP
public:
    class MolangVariableMap& operator=(class MolangVariableMap const &) = delete;
    MolangVariableMap(class MolangVariableMap const &) = delete;
    MolangVariableMap() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOLANGVARIABLEMAP
#endif
    MCAPI void setMolangVariable(unsigned __int64, char const *, struct MolangScriptArg const &);
    MCAPI void setMolangVariable(enum class MolangVariableIndex, struct MolangScriptArg const &);
    MCAPI ~MolangVariableMap();

//private:
    MCAPI class MolangVariable const * _getMolangVariable(enum class MolangVariableIndex) const;
    MCAPI class MolangVariable * _getOrAddMolangVariable(unsigned __int64 const &, char const *, bool);
    MCAPI class MolangVariable * _getOrAddMolangVariable(enum class MolangVariableIndex);

private:

};
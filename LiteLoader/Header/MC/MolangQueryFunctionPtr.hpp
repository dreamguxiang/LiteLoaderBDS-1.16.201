// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct MolangQueryFunctionPtr {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGQUERYFUNCTIONPTR
public:
    struct MolangQueryFunctionPtr& operator=(struct MolangQueryFunctionPtr const &) = delete;
    MolangQueryFunctionPtr(struct MolangQueryFunctionPtr const &) = delete;
    MolangQueryFunctionPtr() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOLANGQUERYFUNCTIONPTR
#endif
    MCAPI class std::function<struct MolangScriptArg const & (class RenderParams &, std::vector<class ExpressionNode> const &)> const * getQueryFunctionPtr() const;
    MCAPI ~MolangQueryFunctionPtr();

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FunctionAction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONACTION
public:
    class FunctionAction& operator=(class FunctionAction const &) = delete;
    FunctionAction(class FunctionAction const &) = delete;
    FunctionAction() = delete;
#endif

public:
    /*0*/ virtual ~FunctionAction();
    /*1*/ virtual void execute(class ServerLevel &, class Dimension &);
    /*2*/ virtual void serialize(class CompoundTag &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FUNCTIONACTION
#endif

//private:
    MCAPI void _printOutput(class ServerLevel &, int);

private:

};
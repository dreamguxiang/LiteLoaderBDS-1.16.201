// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TestForBlockCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTFORBLOCKCOMMAND
public:
    class TestForBlockCommand& operator=(class TestForBlockCommand const &) = delete;
    TestForBlockCommand(class TestForBlockCommand const &) = delete;
    TestForBlockCommand() = delete;
#endif

public:
    /*0*/ virtual ~TestForBlockCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TESTFORBLOCKCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};
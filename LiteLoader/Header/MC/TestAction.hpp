// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IChunkLoadedAction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TestAction : public IChunkLoadedAction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTACTION
public:
    class TestAction& operator=(class TestAction const &) = delete;
    TestAction(class TestAction const &) = delete;
    TestAction() = delete;
#endif

public:
    /*0*/ virtual ~TestAction();
    /*1*/ virtual void execute(class ServerLevel &, class Dimension &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TESTACTION
#endif

};
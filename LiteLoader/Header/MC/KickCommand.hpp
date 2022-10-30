// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class KickCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KICKCOMMAND
public:
    class KickCommand& operator=(class KickCommand const &) = delete;
    KickCommand(class KickCommand const &) = delete;
    KickCommand() = delete;
#endif

public:
    /*0*/ virtual ~KickCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_KICKCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void _kickPlayer(class CommandOrigin const &, class CommandOutput &, class Player const &, class Level *, std::string const &, std::string const &) const;

private:

};
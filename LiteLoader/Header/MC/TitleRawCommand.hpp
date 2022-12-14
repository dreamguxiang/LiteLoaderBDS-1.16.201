// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SetTitlePacket.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TitleRawCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TITLERAWCOMMAND
public:
    class TitleRawCommand& operator=(class TitleRawCommand const &) = delete;
    TitleRawCommand(class TitleRawCommand const &) = delete;
    TitleRawCommand() = delete;
#endif

public:
    /*0*/ virtual ~TitleRawCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TITLERAWCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI bool _sendTitlePacketTextObject(enum class SetTitlePacket::TitleType, class CommandOrigin const &, class CommandOutput &, class CommandSelectorResults<class Player> const &) const;

private:

};
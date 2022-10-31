// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandContext.hpp"
#include "MCRESULT.hpp"
#undef BEFORE_EXTRA

class MinecraftCommands {

#define AFTER_EXTRA
    // Add Member There
public:
    [[deprecated]]
    static MCRESULT _runcmd(void* origin, const std::string& cmd) {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            return Global<MinecraftCommands>->executeCommand(std::make_shared<CommandContext>(cmd, std::unique_ptr<CommandOrigin>((CommandOrigin*)origin)), false);
        }
        catch (...)
        {
        }
        return {0};
    }
    static MCRESULT _runcmd(std::unique_ptr<CommandOrigin> origin, const std::string& cmd)
    {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            return Global<MinecraftCommands>->executeCommand(std::make_shared<CommandContext>(cmd, std::move(origin)), false);
        }
        catch (...)
        {
        }
        return {0};
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTCOMMANDS
public:
    class MinecraftCommands& operator=(class MinecraftCommands const &) = delete;
    MinecraftCommands(class MinecraftCommands const &) = delete;
    MinecraftCommands() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTCOMMANDS
#endif
    MCAPI class Command * compileCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion, class std::function<void (std::string const &)>);
    MCAPI struct MCRESULT executeCommand(class std::shared_ptr<class CommandContext>, bool) const;
    MCAPI void handleOutput(class CommandOrigin const &, class CommandOutput const &) const;
    MCAPI void initCoreEnums(class IWorldRegistriesProvider const &, class ActorFactory const &, class Experiments const &, class BaseGameVersion const &);
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const &);
    MCAPI struct MCRESULT requestCommandExecution(std::unique_ptr<class CommandOrigin>, std::string const &, int, bool) const;
    MCAPI void runCommand(class Command &, class CommandOrigin &);
    MCAPI void setRegistryNetworkUpdateCallback(class std::function<void (class Packet const &)>) const;
    MCAPI static enum class CommandOutputType getOutputType(class CommandOrigin const &);

};
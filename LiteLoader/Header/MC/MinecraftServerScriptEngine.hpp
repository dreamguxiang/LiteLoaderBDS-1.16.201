// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MinecraftServerScriptEngine {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSERVERSCRIPTENGINE
public:
    class MinecraftServerScriptEngine& operator=(class MinecraftServerScriptEngine const &) = delete;
    MinecraftServerScriptEngine(class MinecraftServerScriptEngine const &) = delete;
    MinecraftServerScriptEngine() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTSERVERSCRIPTENGINE
    MCVAPI void _handleError(class ScriptApi::ScriptReportItem const &);
    MCVAPI void _handleWarning(class ScriptApi::ScriptReportItem const &);
    MCVAPI bool _helpRegisterSystemCallbacks(class ScriptApi::ScriptObjectHandle const &);
    MCVAPI bool _registerSystemObjects(class ScriptApi::ScriptObjectHandle const &);
    MCVAPI bool executeCommand(struct ScriptCommand const &);
    MCVAPI void onExecuteCommandCalled(class ScriptApi::ScriptVersionInfo const &, struct ScriptCommand &&);
    MCVAPI enum EventResult onLeaveGameDone(class ServerInstance &);
    MCVAPI enum EventResult onLevelTick();
    MCVAPI enum EventResult onServerLevelInitialized(class ServerInstance &, class Level &);
    MCVAPI enum EventResult onServerThreadStarted(class ServerInstance &);
    MCVAPI enum EventResult onServerUpdateEnd(class ServerInstance &);
    MCVAPI enum EventResult onServerUpdateStart(class ServerInstance &);
    MCVAPI bool setupInterface();
#endif

//private:
    MCAPI void _queueResourcePackScripts(class ResourcePackManager &);
    MCAPI void _registerEventListeners(class Level &, class NetworkHandler &);
    MCAPI void _setupContext(class Minecraft &, class PacketSender &, class entt::basic_registry<enum entt::entity> &);
    MCAPI void _unregisterEventListeners(class Level *, class NetworkHandler &);

private:

};
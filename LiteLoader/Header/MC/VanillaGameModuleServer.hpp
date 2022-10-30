// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VanillaGameModuleServer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULESERVER
public:
    class VanillaGameModuleServer& operator=(class VanillaGameModuleServer const &) = delete;
    VanillaGameModuleServer(class VanillaGameModuleServer const &) = delete;
    VanillaGameModuleServer() = delete;
#endif

public:
    /*0*/ virtual ~VanillaGameModuleServer();
    /*1*/ virtual void init(class ServerInstance &, class Level &);
    /*2*/ virtual void initializeBehaviorStack(class Experiments const &, class ResourcePackRepository &, class ResourcePackStack &, class BaseGameVersion const &);
    /*3*/ virtual void configureLevel(class Level &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void setupCommands(class CommandRegistry &);
    /*8*/ virtual void configureServerNetworkHandler(class ServerInstance &, class ServerNetworkHandler &);
    /*9*/ virtual void registerListeners(class Level &);
    /*10*/ virtual void registerGameplayHandlers(class Level &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAGAMEMODULESERVER
    MCVAPI void configureDocumentation(class IGameModuleDocumentation &);
    MCVAPI void configureNewPlayer(class Player &);
    MCVAPI void tick();
#endif

//private:
    MCAPI void _configureWorldGen(class IWorldRegistriesProvider &, struct SpawnSettings const &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);

private:

};
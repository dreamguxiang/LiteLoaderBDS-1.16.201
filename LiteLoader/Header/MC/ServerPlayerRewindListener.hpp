// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerPlayerRewindListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERREWINDLISTENER
public:
    class ServerPlayerRewindListener& operator=(class ServerPlayerRewindListener const &) = delete;
    ServerPlayerRewindListener(class ServerPlayerRewindListener const &) = delete;
    ServerPlayerRewindListener() = delete;
#endif

public:
    /*0*/ virtual ~ServerPlayerRewindListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual enum class EventResult onPlayerAuthInputReceived(class Player &, class PlayerAuthInputPacket const &);
    /*8*/ virtual enum class EventResult onPlayerAuthInputApplied(class Player &, class PlayerAuthInputPacket const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYERREWINDLISTENER
#endif

};
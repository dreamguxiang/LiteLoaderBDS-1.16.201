// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StartGamePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGAMEPACKET
public:
    class StartGamePacket& operator=(class StartGamePacket const &) = delete;
    StartGamePacket(class StartGamePacket const &) = delete;
    StartGamePacket() = delete;
#endif

public:
    /*0*/ virtual ~StartGamePacket();
    /*1*/ virtual enum class MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum class StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTGAMEPACKET
#endif
    MCAPI StartGamePacket(class LevelSettings const &, struct ActorUniqueID, class ActorRuntimeID, enum class GameType, bool, class Vec3 const &, class Vec2 const &, std::string const &, std::string const &, class ContentIdentity const &, class BlockPalette const &, std::string const &, class BlockDefinitionGroup const &, bool, enum class ServerAuthMovementMode, unsigned __int64, int);

};
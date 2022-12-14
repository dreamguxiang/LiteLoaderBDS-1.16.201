// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AnimateEntityPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEENTITYPACKET
public:
    class AnimateEntityPacket& operator=(class AnimateEntityPacket const &) = delete;
    AnimateEntityPacket(class AnimateEntityPacket const &) = delete;
    AnimateEntityPacket() = delete;
#endif

public:
    /*0*/ virtual ~AnimateEntityPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATEENTITYPACKET
#endif

};
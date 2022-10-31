// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetDisplayObjectivePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDISPLAYOBJECTIVEPACKET
public:
    class SetDisplayObjectivePacket& operator=(class SetDisplayObjectivePacket const &) = delete;
    SetDisplayObjectivePacket(class SetDisplayObjectivePacket const &) = delete;
    SetDisplayObjectivePacket() = delete;
#endif

public:
    /*0*/ virtual ~SetDisplayObjectivePacket();
    /*1*/ virtual enum class MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum class StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETDISPLAYOBJECTIVEPACKET
#endif
    MCAPI SetDisplayObjectivePacket(std::string const &, std::string const &, std::string const &, std::string const &, enum class ObjectiveSortOrder);

};
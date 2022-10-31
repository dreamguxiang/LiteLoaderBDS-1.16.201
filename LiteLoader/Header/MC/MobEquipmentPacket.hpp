// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MobEquipmentPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEQUIPMENTPACKET
public:
    class MobEquipmentPacket& operator=(class MobEquipmentPacket const &) = delete;
    MobEquipmentPacket(class MobEquipmentPacket const &) = delete;
    MobEquipmentPacket() = delete;
#endif

public:
    /*0*/ virtual ~MobEquipmentPacket();
    /*1*/ virtual enum class MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum class StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEQUIPMENTPACKET
#endif
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const &, int, int, enum class ContainerID);

};
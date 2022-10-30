#include <MC/BinaryStream.hpp>
#include <MC/VarIntDataOutput.hpp>
#include <MC/NbtIo.hpp>
#include <MC/IDataOutput.hpp>

void BinaryStream::write(const void* origin, size_t num){
        //BatchedNetworkPeer::flush Line24
        // std::string* mBuffer = dAccess<std::string*>(this, 15);
        // mBuffer->append((const char*)origin,num);
        this->pwBuf->append((const char*)origin,num);
}
void BinaryStream::writeByte(uint8_t origin){
    write(&origin,1ull);
}
void BinaryStream::writeBool(bool origin){
    writeByte(origin);
}
void BinaryStream::writeDouble(double value){
    write(&value,8ull);
}
void BinaryStream::writeFloat(float value){
    write(&value,4ull);
}
void BinaryStream::writeString(std::string value){
    writeUnsignedVarInt(value.length());
    if(value.length()>0){
        auto data = value.data();
        write(data,value.length());
    }
}
void BinaryStream::writeSignedInt(int value){
    write(&value,4ull);
}
void BinaryStream::writeSignedInt64(__int64 value){
    write(&value,8ull);
}
void BinaryStream::writeSignedShort(short value){
    write(&value,2ull);
}
void BinaryStream::writeUnsignedChar(unsigned char value){
    write(&value,1ull);
}
void BinaryStream::writeUnsignedShort(unsigned short value){
    write(&value,2ull);
}
void BinaryStream::writeUnsignedInt(unsigned int value){
    write(&value,4ull);
}
void BinaryStream::writeUnsignedInt64(unsigned __int64 value){
    write(&value,8ull);
}
void BinaryStream::writeVarInt(int value){
    if(value>=0)
        writeUnsignedVarInt(2*value);
    else
        writeUnsignedVarInt(~(2*value));
}
void BinaryStream::writeVarInt64(__int64 value){
    if(value>=0)
        writeUnsignedVarInt64(2*value);
    else
        writeUnsignedVarInt64(~(2*value));
}

void BinaryStream::reserve(size_t size) {
    // std::string* mBuffer = dAccess<std::string*>(this, 15);
    // mBuffer->reserve(size);
    this->writeBuf.reserve(size);
}
std::string& BinaryStream::getRaw() {
    //return *dAccess<std::string*, 15>(this); // BinaryStream::getAndReleaseData
    return *this->pwBuf;
}


void BinaryStream::writeCompoundTag(class CompoundTag const& tag) {
    //serialize<DataItem>::write  in case 5
    VarIntDataOutput pVTVarIntDataOutput = VarIntDataOutput(this);
    NbtIo::write(&tag,(IDataOutput&)pVTVarIntDataOutput);
}
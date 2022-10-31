// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"


#undef BEFORE_EXTRA

class ListTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    std::vector<Tag*> val;
    Tag::Type elementType;

public:
    LIAPI static std::unique_ptr<ListTag> create();
    LIAPI std::vector<Tag*>& value();
    LIAPI Tag const* operator[](int index) const;
    LIAPI Tag::Type getElementType() const;
    LIAPI size_t getSize() const;
    LIAPI vector<Tag*> get();

    // get value
    LIAPI unsigned char getByte(int) const;
    LIAPI short getShort(int) const;
    LIAPI int64_t getInt64(int) const;
    LIAPI TagMemoryChunk getByteArray(int) const;


    LIAPI void addEnd();
    LIAPI void addByte(unsigned char v);
    LIAPI void addShort(short v);
    LIAPI void addInt(int v);
    LIAPI void addInt64(__int64 v);
    LIAPI void addFloat(float v);
    LIAPI void addDouble(double v);
    LIAPI void addString(const std::string& v);
    LIAPI void addByteArray(TagMemoryChunk);
    LIAPI void addByteArray(char data[], size_t size);
    LIAPI void addIntArray(TagMemoryChunk);
    LIAPI void addIntArray(int data[], size_t size);

    LIAPI std::vector<Tag*>::const_iterator begin() const;
    LIAPI std::vector<Tag*>::const_iterator end() const;

    inline size_t size() const{
        return this->val.size();
    };

    inline Tag * get(int num) const{
        if(num < size() || num >0)
            return this->val[num];
        else
            return nullptr;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTTAG
public:
    class ListTag& operator=(class ListTag const &) = delete;
    ListTag(class ListTag const &) = delete;
    ListTag() = delete;
#endif

public:
    /*0*/ virtual ~ListTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput &) const;
    /*3*/ virtual void load(class IDataInput &);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual enum class Tag::Type getId() const;
    /*6*/ virtual bool equals(class Tag const &) const;
    /*8*/ virtual void print(std::string const &, class PrintStream &) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const;
    /*10*/ virtual unsigned __int64 hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LISTTAG
#endif
    MCAPI void add(std::unique_ptr<class Tag>);
    MCAPI std::unique_ptr<class ListTag> copyList() const;
    MCAPI class CompoundTag const * getCompound(unsigned __int64) const;
    MCAPI float getFloat(int) const;
    MCAPI int getInt(int) const;
    MCAPI std::string const & getString(int) const;

};
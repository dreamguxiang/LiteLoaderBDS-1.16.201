// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
// TODO: Need to verify
enum Mirror : unsigned char {
    None_15=0,
    X,
    Z,
    XZ,
};
enum Rotation : unsigned char {
    None_14=0,
    Rotate90,
    Rotate180,
    Rotate270,
    Total,
};

#undef BEFORE_EXTRA

class StructureSettings {

#define AFTER_EXTRA
// Add Member There
private:
    std::string mPaletteName;
    bool mIgnoreEntities;
    bool mIgnoreBlocks;
    BlockPos mStructureSize;
    BlockPos mStructureOffset;
    Vec3 mPivot;
    ActorUniqueID mLastTouchedByPlayer;
    Rotation mRotation;
    Mirror mMirror;
    float mIntegrityValue;
    unsigned int mIntegritySeed;

// public:
// inline StructureSettings(BlockPos const& size, bool ignoreEntities, bool ignoreBlocks)
//     : StructureSettings()
// {
//     setIgnoreBlocks(ignoreBlocks);
//     setIgnoreEntities(ignoreEntities);
//     setStructureSize(size);
// };
public:
    inline void setIgnoreBlocks(bool a0){
        this->mIgnoreBlocks = a0;
    };
    inline void setIgnoreEntities(bool a0){
        this->mIgnoreEntities = a0;
    };
    inline void setStructureSize(class BlockPos const & bp){
        this->mStructureSize = bp;
    };
    inline void setMirror(enum Mirror a0){
        this->mMirror = a0;
    };
    inline void setRotation(enum Rotation a0){
        this->mRotation = a0;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESETTINGS
public:
    class StructureSettings& operator=(class StructureSettings const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURESETTINGS
#endif
    MCAPI StructureSettings();
    MCAPI StructureSettings(class StructureSettings const &);
    MCAPI StructureSettings(class StructureSettings &&);
    MCAPI class StructureSettings & operator=(class StructureSettings &&);
    MCAPI ~StructureSettings();
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

};
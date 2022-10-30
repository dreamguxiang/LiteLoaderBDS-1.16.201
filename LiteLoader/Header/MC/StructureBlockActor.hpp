// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKACTOR
public:
    class StructureBlockActor& operator=(class StructureBlockActor const &) = delete;
    StructureBlockActor(class StructureBlockActor const &) = delete;
    StructureBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~StructureBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*9*/ virtual void onChanged(class BlockSource &);
    /*13*/ virtual void __unk_vfn_13();
    /*17*/ virtual void __unk_vfn_17();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREBLOCKACTOR
#endif
    MCAPI void setPowered(class BlockSource &, class BlockPos const &, bool, bool);
    MCAPI static class mce::Color const X_AXIS_COLOR;
    MCAPI static class mce::Color const Y_AXIS_COLOR;
    MCAPI static class mce::Color const Z_AXIS_COLOR;

//private:
    MCAPI void _trigger(class BlockSource &, class BlockPos const &, bool);

private:

};
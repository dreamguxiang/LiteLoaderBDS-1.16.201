// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NBCastleSmallCorridorRightTurnPiece : public NetherFortressPiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESMALLCORRIDORRIGHTTURNPIECE
public:
    class NBCastleSmallCorridorRightTurnPiece& operator=(class NBCastleSmallCorridorRightTurnPiece const &) = delete;
    NBCastleSmallCorridorRightTurnPiece(class NBCastleSmallCorridorRightTurnPiece const &) = delete;
    NBCastleSmallCorridorRightTurnPiece() = delete;
#endif

public:
    /*0*/ virtual ~NBCastleSmallCorridorRightTurnPiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual enum class StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual int getWorldX(int, int);
    /*8*/ virtual int getWorldZ(int, int);
    /*9*/ virtual void placeBlock(class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    /*10*/ virtual void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, class Block const &, bool);
    /*11*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBCASTLESMALLCORRIDORRIGHTTURNPIECE
#endif

};
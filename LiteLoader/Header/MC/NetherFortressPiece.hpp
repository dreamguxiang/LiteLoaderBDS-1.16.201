// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NetherFortressPiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSPIECE
public:
    class NetherFortressPiece& operator=(class NetherFortressPiece const &) = delete;
    NetherFortressPiece(class NetherFortressPiece const &) = delete;
    NetherFortressPiece() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERFORTRESSPIECE
    MCVAPI void addHardcodedSpawnAreas(class LevelChunk &) const;
    MCVAPI bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#endif
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(std::string const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    MCAPI class StructurePiece * generateAndAddPiece(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int, bool);
    MCAPI class StructurePiece * generateChildForward(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    MCAPI class StructurePiece * generateChildLeft(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    MCAPI class StructurePiece * generateChildRight(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(class NBStartPiece &, std::vector<class PieceWeight> &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};
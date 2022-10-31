// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SHRightTurn : public StructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHRIGHTTURN
public:
    class SHRightTurn& operator=(class SHRightTurn const &) = delete;
    SHRightTurn(class SHRightTurn const &) = delete;
    SHRightTurn() = delete;
#endif

public:
    /*0*/ virtual ~SHRightTurn();
    /*3*/ virtual enum class StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHRIGHTTURN
#endif
    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EndCityPieces {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYPIECES
public:
    class EndCityPieces& operator=(class EndCityPieces const &) = delete;
    EndCityPieces(class EndCityPieces const &) = delete;
    EndCityPieces() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDCITYPIECES
#endif
    MCAPI static void startHouseTower(class StructureManager &, class BlockPos const &, enum class Rotation, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);

//private:
    MCAPI static class EndCityPieces::EndCityPiece * _addHelper(std::vector<std::unique_ptr<class StructurePiece>> &, std::unique_ptr<class EndCityPieces::EndCityPiece>);
    MCAPI static std::unique_ptr<class EndCityPieces::EndCityPiece> _createPiece(class StructureManager &, class EndCityPieces::EndCityPiece *, class BlockPos const &, std::string const &, enum class Rotation, bool);
    MCAPI static bool _recursiveChildren(class StructureManager &, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const &, enum class EndCityPieces::SectionType, int, class EndCityPieces::EndCityPiece *, class BlockPos const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);

private:
    MCAPI static class LegacyStructureSettings mInsertSettings;
    MCAPI static class LegacyStructureSettings mOverwriteSettings;

};
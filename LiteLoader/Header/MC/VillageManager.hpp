// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VillageManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGEMANAGER
public:
    class VillageManager& operator=(class VillageManager const &) = delete;
    VillageManager(class VillageManager const &) = delete;
    VillageManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGEMANAGER
#endif
    MCAPI VillageManager(class Dimension &);
    MCAPI class std::weak_ptr<class Village> fetchClosestAvailableVillageContainingPosition(class BlockPos const &, int, unsigned int) const;
    MCAPI class std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const &);
    MCAPI class std::weak_ptr<class POIInstance> getPOI(class BlockPos const &) const;
    MCAPI class std::weak_ptr<class Village> getVillageByID(class mce::UUID const &) const;
    MCAPI bool hasPOI(class BlockPos const &, enum class POIType) const;
    MCAPI void insertPOI(class std::shared_ptr<class POIInstance> &&);
    MCAPI bool isValidPOIType(class BlockPos const &, class Block const &) const;
    MCAPI void removePOI(class std::weak_ptr<class POIInstance>);
    MCAPI void tick(struct Tick const &);
    MCAPI class std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const &, class Block const &);
    MCAPI ~VillageManager();
    MCAPI static int const MAX_POI_TOLERANCE_DIST;

//private:
    MCAPI void _addPOIWithinRadius(class BlockPos const &, class BlockSource &);
    MCAPI float _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const &, class Village const &) const;
    MCAPI void _clusterPOIs();
    MCAPI class std::shared_ptr<class Village> _createOrGetVillage(class mce::UUID const &, class BlockPos const &);
    MCAPI class std::weak_ptr<class Village> _fetchClosestVillageContainingPosition(class BlockPos const &, int, unsigned int) const;
    MCAPI void _loadPOIBlueprints();
    MCAPI void _processNextUnclusteredPOIQuery();
    MCAPI void _removeVillage(class Village &);
    MCAPI void _tryAssignPOIOrCreateVillage(class std::shared_ptr<class POIInstance> &&);
    MCAPI void _unclusterDerelictPOIs(std::vector<class std::weak_ptr<class POIInstance>> &);

private:

};
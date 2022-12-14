// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PathFinder {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHFINDER
public:
    class PathFinder& operator=(class PathFinder const &) = delete;
    PathFinder(class PathFinder const &) = delete;
    PathFinder() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PATHFINDER
#endif
    MCAPI PathFinder(class BlockSource *, class NavigationComponent const &);
    MCAPI enum class NodeType isFree(class Actor &, class BlockPos const &, class BlockPos const &, class PathfinderNode const &, bool);
    MCAPI ~PathFinder();

//private:
    MCAPI void _addNeighbor(class PathfinderNode *, class PathfinderNode const &, unsigned int, unsigned __int64 &);
    MCAPI bool _belowBlockExtendsIntoAboveBlock(class BlockSource &, class BlockPos const &) const;
    MCAPI bool _checkBlockAndNeighborsProperty(class Actor &, class BlockPos const &, class Block const &, enum class BlockProperty, int, class BreakBlocksComponent const *, class std::function<bool (class Block const &, class BlockPos const &)>);
    MCAPI bool _checkForDamagingBlock(class Actor &, class BlockPos const &, class Block const &, int, class BreakBlocksComponent const *);
    MCAPI enum class NodeType _classifyDoorNode(class Actor &, class Block const &, class BlockPos const &, class BlockPos const &);
    MCAPI enum class NodeType _classifyNode(class Actor &, class BlockPos const &, class BlockPos const &);
    MCAPI enum class NodeType _classifyNode(class Actor &, class BlockPos const &, class Block const &, class BlockPos const &, bool);
    MCAPI bool _findNearestPathableNeighbor(class BlockPos &, class Actor &, class BlockPos const &);
    MCAPI std::unique_ptr<class Path> _findPath(class Actor &, float, float, float, float);
    MCAPI std::unique_ptr<class Path> _findPath(class Actor &, class PathfinderNode *, class PathfinderNode *, class PathfinderNode const &, float);
    MCAPI int _getNeighbors(class Actor &, class PathfinderNode &, class PathfinderNode const &, class PathfinderNode const &, unsigned int);
    MCAPI class PathfinderNode * _getNode(class Actor &, class BlockPos const &, class BlockPos const &, class PathfinderNode const &, int);
    MCAPI class PathfinderNode * _getNode(class BlockPos const &, enum class NodeType);
    MCAPI float _getPathfindingMalus(class Actor &, enum class NodeType, class BlockPos const &);
    MCAPI class PathfinderNode * _getWaterNode(class Actor &, class BlockPos const &);
    MCAPI enum class NodeType _isFreeWaterNode(class Actor &, class BlockPos const &);
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode *, enum class PathCompletionType, struct ActorUniqueID);

private:

};
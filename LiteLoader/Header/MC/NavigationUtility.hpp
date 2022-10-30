// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace NavigationUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI bool canMoveDirectly(class Mob &, class Vec3 const &, class Vec3 const &, int, int, int, bool);
    MCAPI bool canWalkAbove(class Mob &, int, int, int, int, int, int, class Vec3 const &, float, float, bool);
    MCAPI bool canWalkDirectly(class Mob &, class Vec3 const &, class Vec3 const &, int, int, int, bool);
    MCAPI bool canWalkOn(class Mob &, int, int, int, int, int, int, class Vec3 const &, float, float, bool);
    MCAPI bool closeToDone(class Mob const &, float);
    MCAPI bool flyCondition(class Mob const &, class BlockSource &, int, int, int);
    MCAPI int getSurfaceY(class Mob const &);
    MCAPI bool invalidPathStartStatus(class Mob const &, class BlockPos &);
    MCAPI bool isDoorBlockingPath(class Mob const &, class Block const &, class Path const &, class BlockPos const &, unsigned __int64);
    MCAPI bool isInLiquid(class Mob const &);
    MCAPI bool isInNode(class Mob const &, class BlockPos const &);
    MCAPI bool isStairBlockFacingMob(class Mob const &, class BlockPos const &);
    MCAPI bool moveCondition(class Mob const &, class Block const &);
    MCAPI bool swimCondition(class Mob const &, class BlockSource &, int, int, int);
    MCAPI void trimPathFromSun(class Mob const &);

};
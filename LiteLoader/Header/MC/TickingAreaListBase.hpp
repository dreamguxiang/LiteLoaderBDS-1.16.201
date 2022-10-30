// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TickingAreaListBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREALISTBASE
public:
    class TickingAreaListBase& operator=(class TickingAreaListBase const &) = delete;
    TickingAreaListBase(class TickingAreaListBase const &) = delete;
    TickingAreaListBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREALISTBASE
#endif
    MCAPI void add(std::unique_ptr<class ITickingArea>);
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> findAreasContaining(class BlockPos const &);
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> findAreasNamed(std::string const &) const;
    MCAPI class std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const &) const;
    MCAPI std::vector<struct TickingAreaDescription> getTickingAreasDescription() const;
    MCAPI bool hasTickingAreaNamed(std::string const &) const;
    MCAPI void processRemoves();
    MCAPI void processUpdates();
    MCAPI std::vector<struct TickingAreaDescription> removeAreas(std::vector<class std::shared_ptr<class ITickingArea>> const &);

};
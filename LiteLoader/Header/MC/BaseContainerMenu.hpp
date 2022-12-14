// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include "ContainerContentChangeListener.hpp"
#include "IContainerManager.hpp"
#undef BEFORE_EXTRA

class BaseContainerMenu : public ContainerContentChangeListener, IContainerManager {

#define AFTER_EXTRA
    class Player* mPlayer;
    std::vector<class ItemStack> mLastSlots;
    ContainerID mContainerId;
    ContainerType mContainerType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECONTAINERMENU
public:
    class BaseContainerMenu& operator=(class BaseContainerMenu const &) = delete;
    BaseContainerMenu(class BaseContainerMenu const &) = delete;
    BaseContainerMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
    MCVAPI void broadcastChanges();
    MCVAPI void containerContentChanged(int);
    MCVAPI enum class ContainerID getContainerId() const;
    MCVAPI enum class ContainerType getContainerType() const;
    MCVAPI bool isResultSlot(int);
    MCVAPI bool isSlotDirty(int);
    MCVAPI void setContainerId(enum class ContainerID);
    MCVAPI void setContainerType(enum class ContainerType);
    MCVAPI void setData(int, int);
    MCVAPI ~BaseContainerMenu();
#endif

//protected:
    MCAPI void _saveLastSlots(class Container *);

protected:

};
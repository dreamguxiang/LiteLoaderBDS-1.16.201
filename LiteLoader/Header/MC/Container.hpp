// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "ItemStack.hpp"
#undef BEFORE_EXTRA

class Container {

#define AFTER_EXTRA
    // Add new members to class
public:
    ContainerType mContainerType;
    ContainerType mGameplayContainerType;
    std::unordered_set<class ContainerContentChangeListener*> mContentChangeListeners;
    std::unordered_set<class ContainerSizeChangeListener*> mSizeChangeListeners;
    std::deque<std::function<void __cdecl(Container&, int, ItemStack const&, ItemStack const&)>> mTransactionContextStack;
    std::string mName;
    bool mCustomName;
    unsigned int mContainerRuntimeId;
	
public:
    LIAPI std::string getTypeName();

    LIAPI bool addItem_s(ItemStack* item);
    LIAPI bool addItemToFirstEmptySlot_s(ItemStack* item);
    LIAPI bool removeItem_s(int slot, unsigned int number);
    LIAPI ItemStack* getSlot(int slot);
    LIAPI std::vector<const ItemStack*> getAllSlots();
    LIAPI int getSize();

    // static??
    LIAPI bool hasContainer(Vec3& pos, int dim);
    // static??
    LIAPI Container* getContainerAt(Vec3& pos, int dim);

    inline bool isEmpty() const{
        int size = getContainerSize();
        if( size <= 0)
            return 1;
        for(int i = 0; i < size;i++){
            ItemStack item = getItem(i);
            if(!item.isNull())
                break ;
            if(i+1 >= size)
                return 1;
        }
        return 0;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINER
public:
    class Container& operator=(class Container const &) = delete;
    Container(class Container const &) = delete;
    Container() = delete;
#endif

public:
    /*0*/ virtual ~Container();
    /*1*/ virtual void init();
    /*2*/ virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>) = 0;
    /*3*/ virtual void addContentChangeListener(class ContainerContentChangeListener *);
    /*4*/ virtual void removeContentChangeListener(class ContainerContentChangeListener *);
    /*5*/ virtual class ItemStack const & getItem(int) const = 0;
    /*6*/ virtual bool hasRoomForItem(class ItemStack const &);
    /*7*/ virtual void addItem(class ItemStack &);
    /*8*/ virtual bool addItemToFirstEmptySlot(class ItemStack &);
    /*9*/ virtual void setItem(int, class ItemStack const &) = 0;
    /*10*/ virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /*11*/ virtual void removeItem(int, int);
    /*12*/ virtual void removeAllItems();
    /*13*/ virtual void dropContents(class BlockSource &, class Vec3 const &, bool);
    /*14*/ virtual int getContainerSize() const = 0;
    /*15*/ virtual int getMaxStackSize() const = 0;
    /*16*/ virtual void startOpen(class Player &) = 0;
    /*17*/ virtual void stopOpen(class Player &) = 0;
    /*18*/ virtual std::vector<class ItemStack> getSlotCopies() const;
    /*19*/ virtual std::vector<class ItemStack const *> const getSlots() const;
    /*20*/ virtual int getItemCount(class ItemStack const &);
    /*21*/ virtual int findFirstSlotForItem(class ItemStack const &) const;
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void setContainerChanged(int);
    /*25*/ virtual void setContainerMoved();
    /*26*/ virtual void setCustomName(std::string const &);
    /*27*/ virtual bool hasCustomName() const;
    /*28*/ virtual void readAdditionalSaveData(class CompoundTag const &);
    /*29*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*30*/ virtual void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
    /*31*/ virtual void initializeContainerContents(class BlockSource &);
    /*32*/ virtual bool add(class ItemStack &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
#endif
    MCAPI Container(enum class ContainerType);
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    MCAPI int getRedstoneSignalFromContainer(class BlockSource &);
    MCAPI void triggerTransactionChange(int, class ItemStack const &, class ItemStack const &);
    MCAPI static enum class ContainerType getContainerTypeId(std::string const &);

//protected:
    MCAPI void _serverInitId(int, class ItemStack &, class std::function<void (int, class ItemStack const &)>);

protected:
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const containerTypeMap;

};
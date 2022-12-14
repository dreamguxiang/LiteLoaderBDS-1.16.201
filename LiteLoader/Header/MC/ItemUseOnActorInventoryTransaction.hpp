// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include "ComplexInventoryTransaction.hpp"
#include "ItemStack.hpp"
#undef BEFORE_EXTRA

class ItemUseOnActorInventoryTransaction : public ComplexInventoryTransaction {

#define AFTER_EXTRA
public:

    enum class ActionType : int {
        Interact = 0x0,
        Attack = 0x1,
        ItemInteract = 0x2,
    };
	
    ActorRuntimeID mRuntimeId;
    ActionType mActionType;
    int mSlot;
    ItemStack mItem;
    Vec3 mFromPos;
    Vec3 mHitPos;
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONACTORINVENTORYTRANSACTION
public:
    class ItemUseOnActorInventoryTransaction& operator=(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction(class ItemUseOnActorInventoryTransaction const &) = delete;
    ItemUseOnActorInventoryTransaction() = delete;
#endif

public:
    /*0*/ virtual ~ItemUseOnActorInventoryTransaction();
    /*1*/ virtual void read(class ReadOnlyBinaryStream &);
    /*2*/ virtual void write(class BinaryStream &) const;
    /*3*/ virtual enum class InventoryTransactionError handle(class Player &, bool) const;
    /*4*/ virtual void onTransactionError(class Player &, enum class InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEONACTORINVENTORYTRANSACTION
#endif

};
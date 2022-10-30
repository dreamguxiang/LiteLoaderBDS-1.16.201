// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackNetManagerClient {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERCLIENT
public:
    class ItemStackNetManagerClient& operator=(class ItemStackNetManagerClient const &) = delete;
    ItemStackNetManagerClient(class ItemStackNetManagerClient const &) = delete;
    ItemStackNetManagerClient() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKNETMANAGERCLIENT
#endif
    MCAPI void addContainerToRequest(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>, class SparseContainer *);
    MCAPI void cacheHistoricPrediction(class SparseContainer *, class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const &, int, class ItemStack &&);
    MCAPI void cacheZeroedOutItem(class SparseContainer *, class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const &, int, class ItemStack &&);
    MCAPI void clearZeroedOutItem(class SparseContainer *, class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const &, int);

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CreativeItemRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMREGISTRY
public:
    class CreativeItemRegistry& operator=(class CreativeItemRegistry const &) = delete;
    CreativeItemRegistry(class CreativeItemRegistry const &) = delete;
    CreativeItemRegistry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEITEMREGISTRY
#endif
    MCAPI class CreativeItemEntry * findCreativeItemEntry(class ItemInstance const &);
    MCAPI class CreativeItemGroupCategory * getCreativeCategory(enum CreativeItemCategory);
    MCAPI class CreativeItemGroupCategory * newCreativeCategory(std::string const &, enum CreativeItemCategory);
    MCAPI class CreativeGroupInfo * newCreativeGroup(enum CreativeItemCategory, class HashedString const &, class ItemInstance const &);
    MCAPI void updateNetIdMap();
    MCAPI static void forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);
    MCAPI static class std::mutex mCreativeListMutex;
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry> &&);

//private:
    MCAPI void _forEachCreativeItemInstance(class std::function<bool (class ItemInstance &)>);

private:
    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ResourcePackInfoData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKINFODATA
public:
    struct ResourcePackInfoData& operator=(struct ResourcePackInfoData const &) = delete;
    ResourcePackInfoData(struct ResourcePackInfoData const &) = delete;
    ResourcePackInfoData() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKINFODATA
#endif
    MCAPI ResourcePackInfoData(class mce::UUID const &, class SemVersion const &, unsigned __int64, std::string const &, std::string const &, class ContentIdentity const &, bool, bool);
    MCAPI struct ResourcePackInfoData & operator=(struct ResourcePackInfoData &&);
    MCAPI ~ResourcePackInfoData();

};
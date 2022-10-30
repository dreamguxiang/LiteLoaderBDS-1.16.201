// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DBStorageEnvironmentChain {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGEENVIRONMENTCHAIN
public:
    class DBStorageEnvironmentChain& operator=(class DBStorageEnvironmentChain const &) = delete;
    DBStorageEnvironmentChain(class DBStorageEnvironmentChain const &) = delete;
    DBStorageEnvironmentChain() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBSTORAGEENVIRONMENTCHAIN
#endif
    MCAPI DBStorageEnvironmentChain(struct DBStorageConfig const &, class Core::Path const &);
    MCAPI class Core::Result isChainValid(bool) const;
    MCAPI static bool isContentKeyValid(class leveldb::Env *, class Core::Path const &, class ContentIdentity const &, std::string const &, class std::shared_ptr<class Core::FileStorageArea>);

//private:
    MCAPI static std::unique_ptr<class FlushableEnv> createFlushableEnv(class leveldb::Env *, class std::shared_ptr<class Core::FileStorageArea>, class Core::Path const &);

private:

};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BackgroundWorker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDWORKER
public:
    class BackgroundWorker& operator=(class BackgroundWorker const &) = delete;
    BackgroundWorker(class BackgroundWorker const &) = delete;
    BackgroundWorker() = delete;
#endif

public:
    /*0*/ virtual ~BackgroundWorker();
    /*1*/ virtual bool isAsync() const;
    /*2*/ virtual bool canTaskRunAgain() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDWORKER
#endif
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, class WorkerPool &, bool);
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void start();
    MCAPI void wake();

//private:
    MCAPI void _doNoWorkDelay();
    MCAPI bool _processNextTask();
    MCAPI enum BackgroundWorker::RunOneResult _runOneTask();

private:
    MCAPI static class BackgroundWorker * gLocalWorkerMappingSingleton;

};
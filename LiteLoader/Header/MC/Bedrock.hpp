// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace Bedrock {

#define AFTER_EXTRA
// Add Member There
struct PlatformRuntimeInfo {
    PlatformRuntimeInfo() = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&) = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&&) = delete;
};
class CrashTelemetryProcessor {
public:
    CrashTelemetryProcessor() = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&) = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&&) = delete;
};
struct CrashUploadStatus {
    CrashUploadStatus() = delete;
    CrashUploadStatus(CrashUploadStatus const&) = delete;
    CrashUploadStatus(CrashUploadStatus const&&) = delete;
};

struct EnableNonOwnerReferences {
    struct ControlBlock {
        Bedrock::EnableNonOwnerReferences* mPtr;
    };
    std::shared_ptr<ControlBlock> mControlBlock;
};


template <typename T0>
class NonOwnerPointer {
public:
    std::shared_ptr<T0> mPtr;

    NonOwnerPointer(T0& a1) {
        mPtr = std::make_shared<T0>(a1);
    }

};
struct StorageMigration {
    enum StorageMigrationType;
    StorageMigration() = delete;
    StorageMigration(StorageMigration const&) = delete;
    StorageMigration(StorageMigration const&&) = delete;
};




namespace PubSub {
class Subscription {
public:
    Subscription() = delete;
    Subscription(Subscription const&) = delete;
    Subscription(Subscription const&&) = delete;
};
} // namespace PubSub
namespace Threading {
enum AsyncStatus;
template <typename T0>
class UniqueLock;

class CountReference
{
public:
    CountReference() = delete;
    CountReference(CountReference const&) = delete;
    CountReference(CountReference const&&) = delete;
};
template <typename T0>
class IAsyncResult {
public:
    IAsyncResult() = delete;
    IAsyncResult(IAsyncResult const&) = delete;
    IAsyncResult(IAsyncResult const&&) = delete;
};
template <typename T0, typename T1>
class ThreadLocalObject {
public:
    ThreadLocalObject() = delete;
    ThreadLocalObject(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&&) = delete;
};
//template <typename T>
//class LockGuard
//{
//    MCAPI LockGuard(T);
//    MCAPI ~LockGuard();
//};
} // namespace Threading

class ScopeExit;
class Http {
public:
    enum Implementation;
};
class SessionInfo
{
public:
    SessionInfo() = delete;
    SessionInfo(SessionInfo const&) = delete;
    SessionInfo(SessionInfo const&&) = delete;
};

#undef AFTER_EXTRA
    MCAPI void throw_system_error(enum std::errc);

};
#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
namespace Microsoft::WRL2 {
class ContextSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ
    void BeginApiEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectSessionObject@ContextSession@WRL2@Microsoft@@QEAAXPEAVContextRuntimeClass@23@@Z
    void DisconnectSessionObject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ
    void EndApiEntry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ
    bool IsSessionThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnhandledExternalExceptionNL@ContextSession@WRL2@Microsoft@@QEAAXPEBU_EXCEPTION_POINTERS@@@Z
    void NotifyUnhandledExternalExceptionNL(_EXCEPTION_POINTERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsingCallbacksOnSession@ContextSession@WRL2@Microsoft@@QEAA?AVContextEnableCallbacks@ContextRuntimeClass@23@XZ
    WindissectOpaque UsingCallbacksOnSession();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContextSession@WRL2@Microsoft@@IEAA@XZ
    ContextSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ContextSession@WRL2@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContextSession@WRL2@Microsoft@@IEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z
    void SetMessageSession(IMessageSession *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextSession@WRL2@Microsoft@@MEAA@XZ
    virtual ~ContextSession();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void BeginApiCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void BeginPrivateCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void EndApiCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void EndPrivateCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueReleaseAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@@Z
    void EnqueueReleaseAndPassOwnershipWorker(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void EnsureMessageExtensions();
};
} // namespace Microsoft::WRL2

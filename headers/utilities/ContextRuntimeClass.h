#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace Microsoft::WRL2 {
class ContextRuntimeClass {
public:
    class ContextEnableCallbacks;
    class ContextPrivateCallout;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsingCallbacks@ContextRuntimeClass@WRL2@Microsoft@@QEAA?AVContextEnableCallbacks@123@XZ
    WindissectOpaque UsingCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsingPrivateCallout@ContextRuntimeClass@WRL2@Microsoft@@QEAA?AVContextPrivateCallout@123@XZ
    WindissectOpaque UsingPrivateCallout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ContextRuntimeClass@WRL2@Microsoft@@MEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ContextRuntimeClass@WRL2@Microsoft@@IEAAJ_N@Z
    long Close(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContextRuntimeClass@WRL2@Microsoft@@IEAA@XZ
    ContextRuntimeClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@ContextRuntimeClass@WRL2@Microsoft@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyObjectResurrected@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void NotifyObjectResurrected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z
    virtual void OnFinalRelease_NoLock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@IEAAJPEAVContextSession@23@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z
    static long ValidateInterface(WindissectOpaque *, IUnknown *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ
    virtual ~ContextRuntimeClass();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredPostDestroy_NoLock@ContextRuntimeClass@WRL2@Microsoft@@CAJPEAX@Z
    static long DeferredPostDestroy_NoLock(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDestroyWorkflow@ContextRuntimeClass@WRL2@Microsoft@@AEAAX_NPEA_N@Z
    void ProcessDestroyWorkflow(bool, bool *);
};
} // namespace Microsoft::WRL2

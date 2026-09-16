#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 18 member(s).
class ActivatingEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivatingEventArgs@@QEAA@W4ActivationSource@@@Z
    ActivatingEventArgs(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivatingEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@ActivatingEventArgs@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivatingEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivatingEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivatingEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@ActivatingEventArgs@@UEAAJXZ
    virtual long Invoke();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivatingEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivatingEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseActiveDeferral@ActivatingEventArgs@@QEAAXXZ
    void ReleaseActiveDeferral();
};

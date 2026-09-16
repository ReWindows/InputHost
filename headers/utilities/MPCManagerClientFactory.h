#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class MPCManagerClientFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MPCManagerClientFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z
    virtual long CreateOnDedicatedThread(::Windows::Internal::Input::MPCManager::IMPCManagerClient * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z
    virtual long GetForCurrentThread(::Windows::Internal::Input::MPCManager::IMPCManagerClient * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MPCManagerClientFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MPCManagerClientFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MPCManagerClientFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCManagerClientFactory@@QEAA@XZ
    MPCManagerClientFactory();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MPCManagerClientFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MPCManagerClientFactory@@UEAAKXZ
    virtual unsigned long Release();
};

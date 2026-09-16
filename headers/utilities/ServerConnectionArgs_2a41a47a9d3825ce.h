#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace Windows::Internal::Input::MPCManager {
class ServerConnectionArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ServerConnectionArgs@MPCManager@Input@Internal@Windows@@QEAA@_N@Z
    ServerConnectionArgs(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsServerConnected@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsServerConnected(unsigned char *);
};
} // namespace Windows::Internal::Input::MPCManager

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
class UIAHitTestClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UIAHitTestClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UIAHitTestClient@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UIAHitTestClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UIAHitTestClient@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestForEndpointId@UIAHitTestClient@@UEAAJIIPEAU_GUID@@@Z
    virtual long HitTestForEndpointId(unsigned int, unsigned int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UIAHitTestClient@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@UIAHitTestClient@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UIAHitTestClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UIAHitTestClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUIAHitTestProxy@UIAHitTestClient@@QEAAJXZ
    long ResetUIAHitTestProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UIAHitTestClient@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIAHitTestClient@@UEAA@XZ
    virtual ~UIAHitTestClient();
};

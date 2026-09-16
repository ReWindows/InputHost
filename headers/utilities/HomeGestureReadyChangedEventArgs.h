#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
class HomeGestureReadyChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HomeGestureReadyChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HomeGestureReadyChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HomeGestureReadyChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HomeGestureReadyChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HomeGestureReadyChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HomeGestureReadyChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@HomeGestureReadyChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_DeviceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureStage@HomeGestureReadyChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_GestureStage(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputType@HomeGestureReadyChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_InputType(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReady@HomeGestureReadyChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsReady(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MirageId@HomeGestureReadyChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_MirageId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QPCTime@HomeGestureReadyChangedEventArgs@@UEAAJPEA_K@Z
    virtual long get_QPCTime(uint64_t *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
namespace Windows::Internal::Input::MPCManager {
class HomeGestureEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KII@Z
    HomeGestureEventArgs(unsigned long, unsigned long, unsigned long, uint64_t, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonState@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ButtonState(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_DeviceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HomeGestureTriggerKind@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_HomeGestureTriggerKind(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputType@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_InputType(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MirageId@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_MirageId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QPCTime@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_QPCTime(uint64_t *);
};
} // namespace Windows::Internal::Input::MPCManager

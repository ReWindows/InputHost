#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class InputGestureOperationEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputGestureOperationEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputGestureOperationEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputGestureOperationEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputGestureOperationEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputGestureOperationEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputGestureOperationEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GesturePoints@InputGestureOperationEventArgs@@UEAAJPEAPEAU?$IVector@UPoint@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_GesturePoints(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureState@InputGestureOperationEventArgs@@UEAAJPEAW4InputGestureState@Input@Internal@UI@Windows@@@Z
    virtual long get_GestureState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryPoint@InputGestureOperationEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PrimaryPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@InputGestureOperationEventArgs@@UEAAJPEA_K@Z
    virtual long get_ProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetId@InputGestureOperationEventArgs@@UEAAJPEA_K@Z
    virtual long get_TargetId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualKeyModifier@InputGestureOperationEventArgs@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_VirtualKeyModifier(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputGestureOperationEventArgs@@UEAA@XZ
    virtual ~InputGestureOperationEventArgs();
};

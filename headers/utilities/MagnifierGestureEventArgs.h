#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class MagnifierGestureEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MagnifierGestureEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MagnifierGestureEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MagnifierGestureEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MagnifierGestureEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MagnifierGestureEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MagnifierGestureEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MagnifierGestureEventArgs@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IUPoint@Foundation@6@@Z
    virtual long RuntimeClassInitialize(int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactCount@MagnifierGestureEventArgs@@UEAAJPEAI@Z
    virtual long get_ContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@MagnifierGestureEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@MagnifierGestureEventArgs@@UEAAJPEAW4MagnifierGestureState@Input@Internal@UI@Windows@@@Z
    virtual long get_State(int *);
};

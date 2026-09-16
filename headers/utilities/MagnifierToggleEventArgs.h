#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class MagnifierToggleEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MagnifierToggleEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MagnifierToggleEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MagnifierToggleEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MagnifierToggleEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MagnifierToggleEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MagnifierToggleEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MagnifierToggleEventArgs@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@MagnifierToggleEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
};

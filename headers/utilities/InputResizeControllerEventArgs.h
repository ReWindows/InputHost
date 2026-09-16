#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class InputResizeControllerEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputResizeControllerEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputResizeControllerEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputResizeControllerEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputResizeControllerEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputResizeControllerEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputResizeControllerEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionDelta@InputResizeControllerEventArgs@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_PositionDelta(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPosition@InputResizeControllerEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_StartPosition(WindissectOpaque *);
};

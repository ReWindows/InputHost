#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class DragInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DragInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DragInfo@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DragInfo@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DragInfo@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DragInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DragInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionRelativeToManager@DragInfo@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PositionRelativeToManager(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionRelativeToSource@DragInfo@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PositionRelativeToSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionRelativeToTarget@DragInfo@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PositionRelativeToTarget(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetId@DragInfo@@UEAAJPEA_K@Z
    virtual long get_TargetId(uint64_t *);
};

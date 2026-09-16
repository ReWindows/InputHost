#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
class DragOperationInputEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DragOperationInputEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragOperationInputEventArgs@@QEAA@UDragInfoStruct@@PEBU1@_KW4VirtualKeyModifiers@System@Windows@@_K@Z
    DragOperationInputEventArgs(DragInfoStruct, DragInfoStruct const *, uint64_t, int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DragOperationInputEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DragOperationInputEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DragOperationInputEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DragOperationInputEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DragOperationInputEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlPointsDragInfo@DragOperationInputEventArgs@@UEAAJPEAPEAU?$IVector@PEAVDragInfo@Input@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ControlPointsDragInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropSucceeded@DragOperationInputEventArgs@@UEAAJPEAE@Z
    virtual long get_DropSucceeded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@DragOperationInputEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionRelativeToSource@DragOperationInputEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PositionRelativeToSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionRelativeToTarget@DragOperationInputEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PositionRelativeToTarget(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@DragOperationInputEventArgs@@UEAAJPEA_K@Z
    virtual long get_ProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetId@DragOperationInputEventArgs@@UEAAJPEA_K@Z
    virtual long get_TargetId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualKeyModifier@DragOperationInputEventArgs@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_VirtualKeyModifier(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DropSucceeded@DragOperationInputEventArgs@@UEAAJE@Z
    virtual long put_DropSucceeded(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragOperationInputEventArgs@@UEAA@XZ
    virtual ~DragOperationInputEventArgs();
};

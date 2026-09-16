#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class AttachableInputObjectSampleEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AttachableInputObjectSampleEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AttachableInputObjectSampleEventArgs@@QEAA@XZ
    AttachableInputObjectSampleEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AttachableInputObjectSampleEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AttachableInputObjectSampleEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AttachableInputObjectSampleEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AttachableInputObjectSampleEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AttachableInputObjectSampleEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@AttachableInputObjectSampleEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Message(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@AttachableInputObjectSampleEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AttachableInputObjectSampleEventArgs@@UEAA@XZ
    virtual ~AttachableInputObjectSampleEventArgs();
};

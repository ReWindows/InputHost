#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class MouseInputEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MouseInputEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MouseInputEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MouseInputEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MouseInputEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MouseInputEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MouseInputEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MouseInputEventArgs@@UEAAJ_K0UPoint@Foundation@Windows@@1W4MouseInputEventType@Input@Internal@UI@4@FG_N@Z
    virtual long RuntimeClassInitialize(uint64_t, uint64_t, WindissectOpaque, WindissectOpaque, int, short, unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventType@MouseInputEventArgs@@UEAAJPEAW4MouseInputEventType@Input@Internal@UI@Windows@@@Z
    virtual long get_EventType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtraInfo@MouseInputEventArgs@@UEAAJPEA_K@Z
    virtual long get_ExtraInfo(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputTime@MouseInputEventArgs@@UEAAJPEA_K@Z
    virtual long get_InputTime(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@MouseInputEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnclippedPosition@MouseInputEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_UnclippedPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WasInjected@MouseInputEventArgs@@UEAAJPEAE@Z
    virtual long get_WasInjected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WheelDelta@MouseInputEventArgs@@UEAAJPEAF@Z
    virtual long get_WheelDelta(short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XButtonID@MouseInputEventArgs@@UEAAJPEAG@Z
    virtual long get_XButtonID(unsigned short *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class GamepadInputReceivedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GamepadInputReceivedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GamepadInputReceivedEventArgs@@QEAA@W4VirtualKey@System@Windows@@_N@Z
    GamepadInputReceivedEventArgs(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GamepadInputReceivedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GamepadInputReceivedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GamepadInputReceivedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GamepadInputReceivedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GamepadInputReceivedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyUp@GamepadInputReceivedEventArgs@@UEAAJPEAE@Z
    virtual long get_KeyUp(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualKey@GamepadInputReceivedEventArgs@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_VirtualKey(int *);
};

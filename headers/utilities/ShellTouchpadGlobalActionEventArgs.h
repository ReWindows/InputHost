#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class ShellTouchpadGlobalActionEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShellTouchpadGlobalActionEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShellTouchpadGlobalActionEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShellTouchpadGlobalActionEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShellTouchpadGlobalActionEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShellTouchpadGlobalActionEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShellTouchpadGlobalActionEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShellTouchpadGlobalActionEventArgs@@UEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z
    virtual long RuntimeClassInitialize(int64_t, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellTouchpadGlobalActionEventArgs@@QEAA@XZ
    ShellTouchpadGlobalActionEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Action@ShellTouchpadGlobalActionEventArgs@@UEAAJPEAW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z
    virtual long get_Action(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDevice@ShellTouchpadGlobalActionEventArgs@@UEAAJPEAPEAUIPointerDevice@Input@Devices@Windows@@@Z
    virtual long get_PointerDevice(::Windows::Devices::Input::IPointerDevice * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellTouchpadGlobalActionEventArgs@@UEAA@XZ
    virtual ~ShellTouchpadGlobalActionEventArgs();
};

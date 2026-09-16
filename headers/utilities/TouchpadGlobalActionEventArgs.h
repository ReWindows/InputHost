#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class TouchpadGlobalActionEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TouchpadGlobalActionEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TouchpadGlobalActionEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TouchpadGlobalActionEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TouchpadGlobalActionEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TouchpadGlobalActionEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TouchpadGlobalActionEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TouchpadGlobalActionEventArgs@@UEAAJPEAUITouchpadGlobalActionEventArgs@Input@Internal@UI@Windows@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::ITouchpadGlobalActionEventArgs *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchpadGlobalActionEventArgs@@QEAA@XZ
    TouchpadGlobalActionEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Action@TouchpadGlobalActionEventArgs@@UEAAJPEAW4TouchpadGlobalAction@Input@UI@Windows@@@Z
    virtual long get_Action(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDevice@TouchpadGlobalActionEventArgs@@UEAAJPEAPEAUIPointerDevice@Input@Devices@Windows@@@Z
    virtual long get_PointerDevice(::Windows::Devices::Input::IPointerDevice * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadGlobalActionEventArgs@@UEAA@XZ
    virtual ~TouchpadGlobalActionEventArgs();
};

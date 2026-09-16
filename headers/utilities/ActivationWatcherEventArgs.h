#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class ActivationWatcherEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationWatcherEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationWatcherEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationWatcherEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationWatcherEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationWatcherEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationWatcherEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ActivationWatcherEventArgs@@UEAAJPEAUIActivatableEntity@Input@Internal@UI@Windows@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IActivatableEntity *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivatableEntity@ActivationWatcherEventArgs@@UEAAJPEAPEAUIActivatableEntity@Input@Internal@UI@Windows@@@Z
    virtual long get_ActivatableEntity(::Windows::UI::Internal::Input::IActivatableEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActivated@ActivationWatcherEventArgs@@UEAAJPEAE@Z
    virtual long get_IsActivated(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationWatcherEventArgs@@UEAA@XZ
    virtual ~ActivationWatcherEventArgs();
};

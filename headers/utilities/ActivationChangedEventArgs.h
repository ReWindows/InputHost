#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class ActivationChangedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationChangedEventArgs@@QEAA@XZ
    ActivationChangedEventArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ActivationChangedEventArgs@@UEAAJPEAUIActivatableEntity@Input@Internal@UI@Windows@@0@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IActivatableEntity *, ::Windows::UI::Internal::Input::IActivatableEntity *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivatedEntity@ActivationChangedEventArgs@@UEAAJPEAPEAUIActivatableEntity@Input@Internal@UI@Windows@@@Z
    virtual long get_ActivatedEntity(::Windows::UI::Internal::Input::IActivatableEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeactivatedEntity@ActivationChangedEventArgs@@UEAAJPEAPEAUIActivatableEntity@Input@Internal@UI@Windows@@@Z
    virtual long get_DeactivatedEntity(::Windows::UI::Internal::Input::IActivatableEntity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationChangedEventArgs@@UEAA@XZ
    virtual ~ActivationChangedEventArgs();
};

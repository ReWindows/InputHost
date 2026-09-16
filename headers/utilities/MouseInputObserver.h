#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class MouseInputObserver {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MouseInputObserver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@MouseInputObserver@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseInputGeneratedRT@MouseInputObserver@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z
    virtual long OnMouseInputGeneratedRT(::InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@MouseInputObserver@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MouseInputObserver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MouseInputObserver@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MouseInputObserver@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MouseInputObserver@@UEAA@XZ
    virtual ~MouseInputObserver();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMouseInputGeneratedHandler@MouseInputObserver@@AEAAJPEAU?$ITypedEventHandler@PEAVMouseInputObserver@Input@Internal@UI@Windows@@PEAVMouseInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddMouseInputGeneratedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObserving@MouseInputObserver@@AEBAJPEAE@Z
    long GetObserving(unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMouseInputGeneratedHandler_Callback@MouseInputObserver@@AEAAJUEventRegistrationToken@@@Z
    long RemoveMouseInputGeneratedHandler_Callback(EventRegistrationToken);
};

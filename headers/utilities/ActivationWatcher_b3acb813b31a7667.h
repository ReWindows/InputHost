#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class ActivationWatcher {
public:
    class Api;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationWatcher@@QEAA@XZ
    ActivationWatcher();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationWatcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ActivationWatcher@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatableEntityAdded@ActivationWatcher@@UEAAXPEAVBamoActivatableEntityProxy@@E@Z
    virtual void OnActivatableEntityAdded(BamoActivatableEntityProxy *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatableEntityRemoved@ActivationWatcher@@UEAAXPEAVBamoActivatableEntityProxy@@@Z
    virtual void OnActivatableEntityRemoved(BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatedEntityChanged@ActivationWatcher@@UEAAX_K0@Z
    virtual void OnActivatedEntityChanged(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationRequested@ActivationWatcher@@UEAAXPEAVBamoActivatableEntityProxy@@0@Z
    virtual void OnActivationRequested(BamoActivatableEntityProxy *, BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBamoProxyDisconnected@ActivationWatcher@@UEAAXXZ
    virtual void OnBamoProxyDisconnected();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationChangedEvent@ActivationWatcher@@QEAAJPEAUIActivationChangedEventArgs@Input@Internal@UI@Windows@@@Z
    long RaiseActivationChangedEvent(::Windows::UI::Internal::Input::IActivationChangedEventArgs *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationWatcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationWatcher@@UEAA@XZ
    virtual ~ActivationWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfValidStateForAdd@ActivationWatcher@@AEAAJXZ
    long CheckIfValidStateForAdd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateActivatableEntities@ActivationWatcher@@AEAAJXZ
    long EnumerateActivatableEntities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCurrentActivatedEntity@ActivationWatcher@@AEAAJXZ
    long NotifyCurrentActivatedEntity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStoppedEvent@ActivationWatcher@@AEAAJXZ
    long RaiseStoppedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@ActivationWatcher@@AEAAJW4RegisterOperation@1@@Z
    long Start(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ActivationWatcher@@AEAAJXZ
    long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionStatus@ActivationWatcher@@AEAAJW4ActivationWatcherStatus@Input@Internal@UI@Windows@@@Z
    long TransitionStatus(int);
};

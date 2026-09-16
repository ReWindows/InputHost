#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class FocusObserverWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FocusObserverWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@FocusObserverWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKillFocusMessage_Callback@FocusObserverWinRT@@QEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnKillFocusMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocusMessage_Callback@FocusObserverWinRT@@QEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnSetFocusMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@FocusObserverWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FocusObserverWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FocusObserverWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FocusObserverWinRT@@UEAA@XZ
    virtual ~FocusObserverWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@FocusObserverWinRT@@EEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
};

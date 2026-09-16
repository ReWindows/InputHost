#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class PointerInputObserverWinRT {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointerInputObserverWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PointerInputObserverWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@PointerInputObserverWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PointerInputObserverWinRT@@QEAA@XZ
    PointerInputObserverWinRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointerInputObserverWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointerInputObserverWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PointerInputObserverWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PointerInputObserverWinRT@@UEAA@XZ
    virtual ~PointerInputObserverWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableMouseTracking_Callback@PointerInputObserverWinRT@@AEAAXPEAUWindowsMessageDeliveryMessage@@@Z
    void EnableMouseTracking_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHwndUpdated_Callback@PointerInputObserverWinRT@@EEAAXPEAUHWND__@@@Z
    virtual void OnHwndUpdated_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEnteredMessage_Callback@PointerInputObserverWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnPointerEnteredMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerRoutedAwayMessage_Callback@PointerInputObserverWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnPointerRoutedAwayMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerRoutedReleasedMessage_Callback@PointerInputObserverWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnPointerRoutedReleasedMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerRoutedToMessage_Callback@PointerInputObserverWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnPointerRoutedToMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChangedMessage_Callback@PointerInputObserverWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnPointerWheelChangedMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@PointerInputObserverWinRT@@EEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePointerEventArgs@PointerInputObserverWinRT@@AEAA?AV?$ComPtr@VCPointerEventArgs@@@WRL@Microsoft@@PEAUWindowsMessageDeliveryMessage@@@Z
    WindissectOpaque PopulatePointerEventArgs(WindowsMessageDeliveryMessage *);
};

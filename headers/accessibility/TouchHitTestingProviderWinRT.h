#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class TouchHitTestingProviderWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TouchHitTestingProviderWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@TouchHitTestingProviderWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@TouchHitTestingProviderWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TouchHitTestingProviderWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TouchHitTestingProviderWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchHitTestingProviderWinRT@@QEAA@XZ
    TouchHitTestingProviderWinRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchHitTestingProviderWinRT@@UEAA@XZ
    virtual ~TouchHitTestingProviderWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTouchHitTestRequestedImpl@TouchHitTestingProviderWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVTouchHitTestingProvider@Input@Internal@UI@Windows@@PEAVTouchHitTestingEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddTouchHitTestRequestedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchHitTestRequestedMessage_Callback@TouchHitTestingProviderWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnTouchHitTestRequestedMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@TouchHitTestingProviderWinRT@@EEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTouchHitTestRequestedImpl@TouchHitTestingProviderWinRT@@AEAAJUEventRegistrationToken@@@Z
    long RemoveTouchHitTestRequestedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegisterTouchHitTestingWindow@TouchHitTestingProviderWinRT@@AEAAJK@Z
    long TryRegisterTouchHitTestingWindow(unsigned long);
};

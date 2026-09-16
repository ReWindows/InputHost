#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class InputActivationListenerWinRT {
public:
    class ActivationListenerInputObjectOwnerInterop;
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputActivationListenerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputActivationListenerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputActivationListenerWinRT@@QEAA@XZ
    InputActivationListenerWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputActivationListenerWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputActivationListenerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputActivationListenerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputActivationListenerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputActivationListenerWinRT@@UEAA@XZ
    virtual ~InputActivationListenerWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateMessageInternal_Callback@InputActivationListenerWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnActivateMessageInternal_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateMessage_Callback@InputActivationListenerWinRT@@AEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    bool OnActivateMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHwndUpdated_Callback@InputActivationListenerWinRT@@EEAAXPEAUHWND__@@@Z
    virtual void OnHwndUpdated_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@InputActivationListenerWinRT@@EEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationChangedEvent_Callback@InputActivationListenerWinRT@@AEAAXW4InputActivationState@Input@UI@Windows@@@Z
    void RaiseActivationChangedEvent_Callback(int);
};

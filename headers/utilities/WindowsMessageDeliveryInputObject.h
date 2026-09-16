#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class WindowsMessageDeliveryInputObject {
public:
    class Private;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowsMessageDeliveryInputObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@WindowsMessageDeliveryInputObject@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@WindowsMessageDeliveryInputObject@@QEAAPEAUHWND__@@XZ
    HWND__* GetHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHwndUpdated_Callback@WindowsMessageDeliveryInputObject@@UEAAXPEAUHWND__@@@Z
    virtual void OnHwndUpdated_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreTranslateKeyboardMessage_Callback@WindowsMessageDeliveryInputObject@@UEAAXPEAUWindowsMessageDeliveryMessage@@PEA_N@Z
    virtual void OnPreTranslateKeyboardMessage_Callback(WindowsMessageDeliveryMessage *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAttached@WindowsMessageDeliveryInputObject@@UEAAXPEAVWindowsMessageDeliveryAdapter@@_N@Z
    virtual void OnWindowAttached(WindowsMessageDeliveryAdapter *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@WindowsMessageDeliveryInputObject@@UEAAXPEAVWindowsMessageDeliveryAdapter@@@Z
    virtual void OnWindowDestroyed(WindowsMessageDeliveryAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@WindowsMessageDeliveryInputObject@@UEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowsMessageDeliveryInputObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowsMessageDeliveryInputObject@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowsMessageDeliveryInputObject@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsMessageDeliveryInputObject@@QEAA@XZ
    WindowsMessageDeliveryInputObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsMessageDeliveryInputObject@@UEAA@XZ
    virtual ~WindowsMessageDeliveryInputObject();
};

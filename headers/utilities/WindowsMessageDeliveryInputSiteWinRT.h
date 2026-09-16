#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class WindowsMessageDeliveryInputSiteWinRT {
public:
    class HWNDProperty;
    class Private;
    class Private_NoLock;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowsMessageDeliveryInputSiteWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@WindowsMessageDeliveryInputSiteWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@WindowsMessageDeliveryInputSiteWinRT@@UEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTranslateKeyboardMessage_Callback@WindowsMessageDeliveryInputSiteWinRT@@QEAAJPEBUtagMSG@@_NPEA_N@Z
    long PreTranslateKeyboardMessage_Callback(tagMSG const *, bool, bool *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowsMessageDeliveryInputSiteWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowsMessageDeliveryInputSiteWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowsMessageDeliveryInputSiteWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@W4InputSiteIdNamespace@@_K_J@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowAttached@WindowsMessageDeliveryInputSiteWinRT@@QEAAXPEAVWindowsMessageDeliveryAdapter@@_N@Z
    void WindowAttached(WindowsMessageDeliveryAdapter *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@WindowsMessageDeliveryInputSiteWinRT@@QEAAXPEAVWindowsMessageDeliveryAdapter@@@Z
    void WindowDestroyed(WindowsMessageDeliveryAdapter *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsMessageDeliveryInputSiteWinRT@@QEAA@XZ
    WindowsMessageDeliveryInputSiteWinRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsMessageDeliveryInputSiteWinRT@@UEAA@XZ
    virtual ~WindowsMessageDeliveryInputSiteWinRT();
};

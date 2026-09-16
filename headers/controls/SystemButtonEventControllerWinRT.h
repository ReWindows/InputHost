#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class SystemButtonEventControllerWinRT {
public:
    class Api;
    class Private;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemButtonEventControllerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SystemButtonEventControllerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemButtonEvent@SystemButtonEventControllerWinRT@@QEAAXAEBUSystemButtonEventInfo@@@Z
    void OnSystemButtonEvent(SystemButtonEventInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@SystemButtonEventControllerWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemButtonEventControllerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemButtonEventControllerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SystemButtonEventControllerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIDispatcherQueue@System@Windows@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::System::IDispatcherQueue *, IInputSitePrivate_NoLock *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemButtonEventControllerWinRT@@QEAA@XZ
    SystemButtonEventControllerWinRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemButtonEventControllerWinRT@@UEAA@XZ
    virtual ~SystemButtonEventControllerWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFunctionLockIndicator_Callback@SystemButtonEventControllerWinRT@@AEAAXV?$ComPtr@VSystemFunctionLockIndicatorChangedEventArgs@@@WRL@Microsoft@@@Z
    void OnFunctionLockIndicator_Callback(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFunctionLock_Callback@SystemButtonEventControllerWinRT@@AEAAXV?$ComPtr@VSystemFunctionLockChangedEventArgs@@@WRL@Microsoft@@@Z
    void OnFunctionLock_Callback(WindissectOpaque);
};

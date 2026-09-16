#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class DevicePostureWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DevicePostureWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DevicePostureWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicePostureWinRT@@QEAA@XZ
    DevicePostureWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@DevicePostureWinRT@@UEAAXXZ
    virtual void PostDestroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DevicePostureWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DevicePostureWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DevicePostureWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DevicePostureWinRT@@UEAA@XZ
    virtual ~DevicePostureWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForInvokeEvent@DevicePostureWinRT@@AEAAXI_J@Z
    void CheckForInvokeEvent(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateListenerWindow@DevicePostureWinRT@@AEAAJXZ
    long CreateListenerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostureNotifierProc@DevicePostureWinRT@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t PostureNotifierProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalEventIfPostureChanged_Callback@DevicePostureWinRT@@AEAAXXZ
    void SignalEventIfPostureChanged_Callback();
};

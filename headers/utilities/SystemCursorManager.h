#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
class SystemCursorManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemCursorManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemCursorManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemCursorManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemCursorManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SystemCursorManager@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@SystemCursorManager@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemCursorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemCursorManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplayDevicesForWatcher@SystemCursorManager@@QEAAJPEAVCursorDeviceWatcher@@@Z
    long ReplayDevicesForWatcher(CursorDeviceWatcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SystemCursorManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemCursorManager@@QEAA@XZ
    SystemCursorManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateCursor@SystemCursorManager@@UEAAJ_K0PEAUICompositor@Composition@UI@Windows@@PEAUIVisual@345@@Z
    virtual long TryCreateCursor(uint64_t, uint64_t, ::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadCursorAsset@SystemCursorManager@@UEAAJ_K0PEAUHSTRING__@@@Z
    virtual long TryLoadCursorAsset(uint64_t, uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetCursorMagnification@SystemCursorManager@@UEAAJ_KM@Z
    virtual long TrySetCursorMagnification(uint64_t, float);
    // Category: Method | Source: PE Export
    // Symbol: ?TrySetCursorScale@SystemCursorManager@@UEAAJ_KM@Z
    virtual long TrySetCursorScale(uint64_t, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetCursorVisibility@SystemCursorManager@@UEAAJ_KE@Z
    virtual long TrySetCursorVisibility(uint64_t, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceWatcher@SystemCursorManager@@UEAAJPEAPEAUICursorDeviceWatcher@Input@Internal@UI@Windows@@@Z
    virtual long get_DeviceWatcher(::Windows::UI::Internal::Input::ICursorDeviceWatcher * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemCursorManager@@UEAA@XZ
    virtual ~SystemCursorManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachIsmCursorVisual@SystemCursorManager@@AEAAJ_K0@Z
    long AttachIsmCursorVisual(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllDevices@SystemCursorManager@@AEAAJXZ
    long ClearAllDevices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorExists@SystemCursorManager@@AEBA_N_K@Z
    bool CursorExists(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@SystemCursorManager@@AEAAJAEBUCursorDeviceInfo@@@Z
    long DeviceAdded(CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceExists@SystemCursorManager@@AEBA_N_K@Z
    bool DeviceExists(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@SystemCursorManager@@AEAAJ_K@Z
    long DeviceRemoved(uint64_t);
};

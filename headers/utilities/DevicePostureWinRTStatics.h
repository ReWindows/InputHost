#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class DevicePostureWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DevicePostureWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForWindow@DevicePostureWinRTStatics@@UEAAJ_KPEAPEAUIDevicePosture@Input@Internal@UI@Windows@@@Z
    virtual long CreateForWindow(uint64_t, ::Windows::UI::Internal::Input::IDevicePosture * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicePostureWinRTStatics@@QEAA@XZ
    DevicePostureWinRTStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DevicePostureWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DevicePostureWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DevicePostureWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DevicePostureWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@DevicePostureWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DevicePostureWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DevicePostureWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};

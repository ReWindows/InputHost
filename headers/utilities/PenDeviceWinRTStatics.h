#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
class PenDeviceWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenDeviceWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromPenId@PenDeviceWinRTStatics@@UEAAJU_GUID@@PEAPEAUIPenDevice@Input@Devices@Windows@@@Z
    virtual long GetFromPenId(_GUID, ::Windows::Devices::Input::IPenDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromPointerId@PenDeviceWinRTStatics@@UEAAJIPEAPEAUIPenDevice@Input@Devices@Windows@@@Z
    virtual long GetFromPointerId(unsigned int, ::Windows::Devices::Input::IPenDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PenDeviceWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PenDeviceWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PenDeviceWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PenDeviceWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@PenDeviceWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PenDeviceWinRTStatics@@QEAA@XZ
    PenDeviceWinRTStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenDeviceWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenDeviceWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class DeviceSettingsStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeviceSettingsStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeviceSettingsStatics@@QEAA@XZ
    DeviceSettingsStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeedbackSettings@DeviceSettingsStatics@@UEAAJPEAPEAUIHapticFeedbackSettings@Input@Devices@Internal@Windows@@@Z
    virtual long GetFeedbackSettings(::Windows::Internal::Devices::Input::IHapticFeedbackSettings * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DeviceSettingsStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DeviceSettingsStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DeviceSettingsStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DeviceSettingsStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@DeviceSettingsStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeviceSettingsStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeviceSettingsStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceSettingsStatics@@UEAA@XZ
    virtual ~DeviceSettingsStatics();
};

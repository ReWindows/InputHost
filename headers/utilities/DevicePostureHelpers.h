#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class DevicePostureHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z
    int CalculateDevicePostureMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCSMRegistryState@DevicePostureHelpers@@YA?AW4CSMRegistryState@1@XZ
    int GetCSMRegistryState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z
    long GetChassisType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreconfiguredConvertibilityKey@DevicePostureHelpers@@YAJPEAK@Z
    long GetPreconfiguredConvertibilityKey(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ
    bool HasCSMStateChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConvertibilitySelfIdentified@DevicePostureHelpers@@YA_NXZ
    bool IsConvertibilitySelfIdentified();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIgnoringDisplayConfig@DevicePostureHelpers@@YA_NXZ
    bool IsIgnoringDisplayConfig();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ
    bool IsValidTabletDisplayConfig();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDeviceConvertibility@DevicePostureHelpers@@YA?AW4DeviceConvertibility@1@W4QueryOptions@1@@Z
    int QueryDeviceConvertibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z
    long SavePhysicalConvertibility(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCSMStateChanged@DevicePostureHelpers@@YAJXZ
    long SetCSMStateChanged();
};

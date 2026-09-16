#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class GamepadKeyRoutingConfigurationWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GamepadKeyRoutingConfigurationWinRTStatics@@QEAA@XZ
    GamepadKeyRoutingConfigurationWinRTStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@GamepadKeyRoutingConfigurationWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@GamepadKeyRoutingConfigurationWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetKeyRoutingEnabled@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJEPEAE@Z
    virtual long TrySetKeyRoutingEnabled(unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsKeyRoutingEnabled@GamepadKeyRoutingConfigurationWinRTStatics@@UEAAJPEAE@Z
    virtual long get_IsKeyRoutingEnabled(unsigned char *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@GamepadKeyRoutingConfigurationWinRTStatics@@AEAAPEAVGamepadKeyRoutingConfigurationImpl@@XZ
    GamepadKeyRoutingConfigurationImpl * GetInstance();
};

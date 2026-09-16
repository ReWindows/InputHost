#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class DockEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DockEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DockEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DockEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DockEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DockEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DockEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@DockEventArgs@@UEAAJPEAI@Z
    virtual long get_DeviceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceType@DockEventArgs@@UEAAJPEAW4DockedDeviceType@Input@Internal@UI@Windows@@@Z
    virtual long get_DeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayInterfacePath@DockEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayInterfacePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayOcclusionRect@DockEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_DisplayOcclusionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplaySize@DockEventArgs@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_DisplaySize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HIDDeviceInterfacePath@DockEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HIDDeviceInterfacePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HIDDevicePrimaryUsageId@DockEventArgs@@UEAAJPEAG@Z
    virtual long get_HIDDevicePrimaryUsageId(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HIDDevicePrimaryUsagePage@DockEventArgs@@UEAAJPEAG@Z
    virtual long get_HIDDevicePrimaryUsagePage(unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DockEventArgs@@UEAA@XZ
    virtual ~DockEventArgs();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class DeviceDockWatcherFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeviceDockWatcherFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DeviceDockWatcherFactory@@UEAAJPEAPEAUIDeviceDockWatcher@Input@Internal@UI@Windows@@@Z
    virtual long Create(::Windows::UI::Internal::Input::IDeviceDockWatcher * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeviceDockWatcherFactory@@QEAA@XZ
    DeviceDockWatcherFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DeviceDockWatcherFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DeviceDockWatcherFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DeviceDockWatcherFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@DeviceDockWatcherFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@DeviceDockWatcherFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeviceDockWatcherFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeviceDockWatcherFactory@@UEAAKXZ
    virtual unsigned long Release();
};

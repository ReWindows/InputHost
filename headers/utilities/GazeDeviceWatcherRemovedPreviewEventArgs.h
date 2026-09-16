#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace Windows::Devices::Input::Preview {
class GazeDeviceWatcherRemovedPreviewEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeDeviceWatcherRemovedPreviewEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Device@GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazeDevicePreview@2345@@Z
    virtual long get_Device(::Windows::Devices::Input::Preview::IGazeDevicePreview * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeDeviceWatcherRemovedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeDeviceWatcherRemovedPreviewEventArgs();
};
} // namespace Windows::Devices::Input::Preview

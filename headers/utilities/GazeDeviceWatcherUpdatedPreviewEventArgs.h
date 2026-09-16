#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace Windows::Devices::Input::Preview {
class GazeDeviceWatcherUpdatedPreviewEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeDeviceWatcherUpdatedPreviewEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Device@GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazeDevicePreview@2345@@Z
    virtual long get_Device(::Windows::Devices::Input::Preview::IGazeDevicePreview * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeDeviceWatcherUpdatedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeDeviceWatcherUpdatedPreviewEventArgs();
};
} // namespace Windows::Devices::Input::Preview

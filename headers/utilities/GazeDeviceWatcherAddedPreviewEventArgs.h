#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace Windows::Devices::Input::Preview {
class GazeDeviceWatcherAddedPreviewEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeDeviceWatcherAddedPreviewEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Device@GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazeDevicePreview@2345@@Z
    virtual long get_Device(::Windows::Devices::Input::Preview::IGazeDevicePreview * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeDeviceWatcherAddedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeDeviceWatcherAddedPreviewEventArgs();
};
} // namespace Windows::Devices::Input::Preview

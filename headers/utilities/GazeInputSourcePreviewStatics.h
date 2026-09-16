#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace Windows::Devices::Input::Preview {
class GazeInputSourcePreviewStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazeDeviceWatcherPreview@2345@@Z
    virtual long CreateWatcher(::Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazeInputSourcePreview@2345@@Z
    virtual long GetForCurrentView(::Windows::Devices::Input::Preview::IGazeInputSourcePreview * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeInputSourcePreviewStatics@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Devices::Input::Preview

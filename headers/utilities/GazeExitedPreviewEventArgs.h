#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
namespace Windows::Devices::Input::Preview {
class GazeExitedPreviewEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeExitedPreviewEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPoint@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazePointPreview@2345@@Z
    virtual long get_CurrentPoint(::Windows::Devices::Input::Preview::IGazePointPreview * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeExitedPreviewEventArgs@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeExitedPreviewEventArgs();
};
} // namespace Windows::Devices::Input::Preview

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
namespace Windows::Devices::Input::Preview {
class GazeEnteredPreviewEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeEnteredPreviewEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPoint@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazePointPreview@2345@@Z
    virtual long get_CurrentPoint(::Windows::Devices::Input::Preview::IGazePointPreview * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeEnteredPreviewEventArgs@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeEnteredPreviewEventArgs();
};
} // namespace Windows::Devices::Input::Preview

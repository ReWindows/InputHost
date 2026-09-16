#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
namespace Windows::Devices::Input::Preview {
class GazePointPreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazePointPreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazePointPreview@Preview@Input@Devices@Windows@@QEAA@XZ
    GazePointPreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazePointPreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GazePointPreview@Preview@Input@Devices@Windows@@QEAAJPEAVGazeDevicePreview@2345@PEBUInputInfo@@@Z
    long RuntimeClassInitialize(::Windows::Devices::Input::Preview::GazeDevicePreview *, InputInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EyeGazePosition@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@5@@Z
    virtual long get_EyeGazePosition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeadGazePosition@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@5@@Z
    virtual long get_HeadGazePosition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HidInputReport@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIHidInputReport@HumanInterfaceDevice@45@@Z
    virtual long get_HidInputReport(::Windows::Devices::HumanInterfaceDevice::IHidInputReport * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceDevice@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAUIGazeDevicePreview@2345@@Z
    virtual long get_SourceDevice(::Windows::Devices::Input::Preview::IGazeDevicePreview * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Timestamp@GazePointPreview@Preview@Input@Devices@Windows@@UEAAJPEA_K@Z
    virtual long get_Timestamp(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazePointPreview@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazePointPreview();
};
} // namespace Windows::Devices::Input::Preview

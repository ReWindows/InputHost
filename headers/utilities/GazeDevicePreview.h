#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 30 member(s).
namespace Windows::Devices::Input::Preview {
class GazeDevicePreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeDevicePreview@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeDevicePreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBooleanControlDescriptions@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJGGPEAPEAU?$IVectorView@PEAVHidBooleanControlDescription@HumanInterfaceDevice@Devices@Windows@@@Collections@Foundation@5@@Z
    virtual long GetBooleanControlDescriptions(unsigned short, unsigned short, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumericControlDescriptions@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJGGPEAPEAU?$IVectorView@PEAVHidNumericControlDescription@HumanInterfaceDevice@Devices@Windows@@@Collections@Foundation@5@@Z
    virtual long GetNumericControlDescriptions(unsigned short, unsigned short, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCalibrationAsync@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long RequestCalibrationAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GazeDevicePreview@Preview@Input@Devices@Windows@@QEAAJPEBUDeviceInfo@@@Z
    long RuntimeClassInitialize(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanTrackEyes@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_CanTrackEyes(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanTrackHead@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_CanTrackHead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConfigurationState@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAW4GazeDeviceConfigurationStatePreview@2345@@Z
    virtual long get_ConfigurationState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@GazeDevicePreview@Preview@Input@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeDevicePreview@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeDevicePreview();
};
} // namespace Windows::Devices::Input::Preview

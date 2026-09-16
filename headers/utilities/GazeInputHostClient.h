#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
namespace Windows::Devices::Input::Preview {
class GazeInputHostClient {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeInputHostClient@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeInputHostClient();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSourceForWindow@GazeInputHostClient@Preview@Input@Devices@Windows@@QEAAPEAVGazeInputSourcePreview@2345@_K@Z
    ::Windows::Devices::Input::Preview::GazeInputSourcePreview * GetInputSourceForWindow(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@GazeInputHostClient@Preview@Input@Devices@Windows@@SAPEAV12345@XZ
    static ::Windows::Devices::Input::Preview::GazeInputHostClient * GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceArrival@GazeInputHostClient@Preview@Input@Devices@Windows@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceArrival(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceEnumerationCompleted@GazeInputHostClient@Preview@Input@Devices@Windows@@UEAAXXZ
    virtual void OnDeviceEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoval@GazeInputHostClient@Preview@Input@Devices@Windows@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceRemoval(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputReport@GazeInputHostClient@Preview@Input@Devices@Windows@@UEAAJPEAUInputInfo@@@Z
    virtual long OnInputReport(InputInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemInputDisconnect@GazeInputHostClient@Preview@Input@Devices@Windows@@UEAAXXZ
    virtual void OnSystemInputDisconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemInputReconnect@GazeInputHostClient@Preview@Input@Devices@Windows@@UEAAXXZ
    virtual void OnSystemInputReconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSource@GazeInputHostClient@Preview@Input@Devices@Windows@@QEAAJ_KPEAVGazeInputSourcePreview@2345@@Z
    long RegisterInputSource(uint64_t, ::Windows::Devices::Input::Preview::GazeInputSourcePreview *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GazeInputHostClient@Preview@Input@Devices@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputSource@GazeInputHostClient@Preview@Input@Devices@Windows@@QEAAJ_K@Z
    long UnregisterInputSource(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeInputHostClient@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeInputHostClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputConnectionWithAccessCheck@GazeInputHostClient@Preview@Input@Devices@Windows@@AEAAJXZ
    long CreateInputConnectionWithAccessCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInputConnection@GazeInputHostClient@Preview@Input@Devices@Windows@@AEAAJXZ
    long DestroyInputConnection();
};
} // namespace Windows::Devices::Input::Preview

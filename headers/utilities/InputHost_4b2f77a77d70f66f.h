#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace InputETW {
class InputHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivedDeviceAttach@InputHost@InputETW@@SAXPEAUDeviceInfo@@@Z
    static void ReceivedDeviceAttach(DeviceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivedDeviceEnumerationCompleted@InputHost@InputETW@@SAXXZ
    static void ReceivedDeviceEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivedDeviceRemoval@InputHost@InputETW@@SAXPEAUDeviceInfo@@@Z
    static void ReceivedDeviceRemoval(DeviceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivedInputReport@InputHost@InputETW@@SAXPEAUInputInfo@@@Z
    static void ReceivedInputReport(InputInfo *);
};
} // namespace InputETW

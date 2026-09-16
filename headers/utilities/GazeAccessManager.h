#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace Windows::Devices::Input::Preview {
class GazeAccessManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GazeAccessManager@Preview@Input@Devices@Windows@@QEAAJKK@Z
    long RuntimeClassInitialize(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessStatus@GazeAccessManager@Preview@Input@Devices@Windows@@QEAAJPEAW4CapabilityAccessStatus@CapabilityAccess@Internal@5@@Z
    long get_AccessStatus(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeAccessManager@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeAccessManager();
};
} // namespace Windows::Devices::Input::Preview

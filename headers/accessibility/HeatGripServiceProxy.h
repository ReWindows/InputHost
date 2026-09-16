#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class HeatGripServiceProxy {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HeatGripServiceProxy@@UEAA@XZ
    virtual ~HeatGripServiceProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GripStatusForPanelReceived@HeatGripServiceProxy@@MEAAJAEBUHeatGripReport@@@Z
    virtual long GripStatusForPanelReceived(HeatGripReport const &);
};

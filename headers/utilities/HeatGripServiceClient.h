#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
class HeatGripServiceClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HeatGripServiceClient@@SAJPEAPEAV1@@Z
    static long Create(HeatGripServiceClient * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeatGripStatusForPanel@HeatGripServiceClient@@UEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z
    virtual long GetHeatGripStatusForPanel(HeatPanelInfo const *, HeatGripStatus *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HeatGripServiceClient@@UEAA@XZ
    virtual ~HeatGripServiceClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HeatGripServiceClient@@IEAAJXZ
    long Initialize();
};

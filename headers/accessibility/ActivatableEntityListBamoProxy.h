#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class ActivatableEntityListBamoProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInserted@ActivatableEntityListBamoProxy@@MEAAJI@Z
    virtual long OnInserted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoved@ActivatableEntityListBamoProxy@@MEAAJIPEAVBamoActivatableEntityProxy@@@Z
    virtual long OnRemoved(unsigned int, BamoActivatableEntityProxy *);
};

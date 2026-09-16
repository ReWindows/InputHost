#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class PenDeviceListProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@PenDeviceListProxy@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInserted@PenDeviceListProxy@@MEAAJI@Z
    virtual long OnInserted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoved@PenDeviceListProxy@@MEAAJIPEAVBamoPenDeviceProxy@@@Z
    virtual long OnRemoved(unsigned int, BamoPenDeviceProxy *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace InputForwardTarget {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputForwardTarget@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputForwardTarget@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputForwardTarget@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputForwardTarget

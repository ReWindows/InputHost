#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace FocusControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@FocusControllerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetFocus@Api@FocusControllerWinRT@@UEAAJPEAE@Z
    virtual long TrySetFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasFocus@Api@FocusControllerWinRT@@UEAAJPEAE@Z
    virtual long get_HasFocus(unsigned char *);
};
} // namespace FocusControllerWinRT

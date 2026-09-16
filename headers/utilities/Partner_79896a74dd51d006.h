#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace IslandInputSiteWinRTBase {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@Partner@IslandInputSiteWinRTBase@@UEAAJPEAI@Z
    virtual long GetViewInstanceId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowHandle@Partner@IslandInputSiteWinRTBase@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindowHandle(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowId@Partner@IslandInputSiteWinRTBase@@UEAAJPEA_K@Z
    virtual long GetWindowId(uint64_t *);
};
} // namespace IslandInputSiteWinRTBase

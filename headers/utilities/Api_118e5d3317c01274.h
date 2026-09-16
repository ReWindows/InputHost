#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace InputManualResizeArea {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputManualResizeArea@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryResizeAsync@Api@InputManualResizeArea@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@7@@Z
    virtual long TryResizeAsync(unsigned int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputManualResizeArea@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputManualResizeArea@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputManualResizeArea

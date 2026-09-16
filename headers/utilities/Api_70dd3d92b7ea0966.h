#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace InputResizeArea {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputResizeArea@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Region@Api@InputResizeArea@@UEAAJPEAW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual long get_Region(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputResizeArea@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Region@Api@InputResizeArea@@UEAAJW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual long put_Region(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputResizeArea@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputResizeArea

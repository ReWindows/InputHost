#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
namespace InputDragSource {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputDragSource@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPoints@Api@InputDragSource@@UEAAJIPEAUPoint@Foundation@Windows@@@Z
    virtual long SetControlPoints(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HitTestConfiguration@Api@InputDragSource@@UEAAJPEAW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long get_HitTestConfiguration(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@Api@InputDragSource@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputDragSource@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HitTestConfiguration@Api@InputDragSource@@UEAAJW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long put_HitTestConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@Api@InputDragSource@@UEAAJ_K@Z
    virtual long put_Id(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputDragSource@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputDragSource

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace InputDropTarget {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputDropTarget@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@Api@InputDropTarget@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Context(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@Api@InputDropTarget@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputDropTarget@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Context@Api@InputDropTarget@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Context(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@Api@InputDropTarget@@UEAAJ_K@Z
    virtual long put_Id(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputDropTarget@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputDropTarget

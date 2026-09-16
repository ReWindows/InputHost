#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace InputManualDragArea {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputManualDragArea@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDragAsync@Api@InputManualDragArea@@UEAAJIPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryDragAsync(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeliveryMode@Api@InputManualDragArea@@UEAAJPEAW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z
    virtual long get_DeliveryMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputManualDragArea@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeliveryMode@Api@InputManualDragArea@@UEAAJW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z
    virtual long put_DeliveryMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputManualDragArea@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputManualDragArea

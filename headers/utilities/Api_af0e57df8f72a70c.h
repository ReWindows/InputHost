#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace InputDragManager {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputDragManager@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartDragAsync@Api@InputDragManager@@UEAAJI_KPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryStartDragAsync(unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragCreated@Api@InputDragManager@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDragManager@Input@Internal@UI@Windows@@PEAVInputDragOperation@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragCreated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceType@Api@InputDragManager@@UEAAJPEAU_GUID@@@Z
    virtual long get_SourceType(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceType@Api@InputDragManager@@UEAAJU_GUID@@@Z
    virtual long put_SourceType(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragCreated@Api@InputDragManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragCreated(EventRegistrationToken);
};
} // namespace InputDragManager

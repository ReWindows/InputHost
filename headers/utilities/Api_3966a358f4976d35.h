#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
namespace InputResizeController {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputResizeController@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartResizeAsync@Api@InputResizeController@@UEAAJIPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryStartResizeAsync(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResizeCreated@Api@InputResizeController@@UEAAJPEAU?$ITypedEventHandler@PEAVInputResizeController@Input@Internal@UI@Windows@@PEAVInputResizeOperation@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ResizeCreated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HitTestConfiguration@Api@InputResizeController@@UEAAJPEAW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long get_HitTestConfiguration(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputResizeController@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HitTestConfiguration@Api@InputResizeController@@UEAAJW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long put_HitTestConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputResizeController@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResizeCreated@Api@InputResizeController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResizeCreated(EventRegistrationToken);
};
} // namespace InputResizeController

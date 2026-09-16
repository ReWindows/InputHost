#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace DeviceDockWatcher {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@DeviceDockWatcher@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@Api@DeviceDockWatcher@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Api@DeviceDockWatcher@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Docked@Api@DeviceDockWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAVDockEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Docked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnumerationCompleted@Api@DeviceDockWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EnumerationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Undocked@Api@DeviceDockWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAVDockEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Undocked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Updated@Api@DeviceDockWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAVDockEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Updated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Docked@Api@DeviceDockWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Docked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnumerationCompleted@Api@DeviceDockWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnumerationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Undocked@Api@DeviceDockWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Undocked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Updated@Api@DeviceDockWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Updated(EventRegistrationToken);
};
} // namespace DeviceDockWatcher

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace InputActivationListenerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputActivationListenerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InputActivationChanged@Api@InputActivationListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVInputActivationListener@Input@UI@Windows@@PEAVInputActivationListenerActivationChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_InputActivationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@Api@InputActivationListenerWinRT@@UEAAJPEAW4InputActivationState@Input@UI@Windows@@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InputActivationChanged@Api@InputActivationListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InputActivationChanged(EventRegistrationToken);
};
} // namespace InputActivationListenerWinRT

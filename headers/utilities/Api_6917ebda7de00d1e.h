#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace LightDismissClient {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@LightDismissClient@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Dismissed@Api@LightDismissClient@@UEAAJPEAU?$ITypedEventHandler@PEAVLightDismissAction@Input@Internal@UI@Windows@@PEAVLightDismissEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Dismissed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Dismissed@Api@LightDismissClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Dismissed(EventRegistrationToken);
};
} // namespace LightDismissClient

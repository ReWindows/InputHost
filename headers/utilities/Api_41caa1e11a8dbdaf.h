#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace ActuationWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ActuationWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Actuated@Api@ActuationWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVActuationWinRT@Input@Internal@UI@Windows@@PEAVActuationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Actuated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Actuated@Api@ActuationWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Actuated(EventRegistrationToken);
};
} // namespace ActuationWinRT

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace TouchHitTestingProviderWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@TouchHitTestingProviderWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TouchHitTestRequested@Api@TouchHitTestingProviderWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVTouchHitTestingProvider@Input@Internal@UI@Windows@@PEAVTouchHitTestingEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TouchHitTestRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TouchHitTestRequested@Api@TouchHitTestingProviderWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TouchHitTestRequested(EventRegistrationToken);
};
} // namespace TouchHitTestingProviderWinRT

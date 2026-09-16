#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace MouseInputObserver {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@MouseInputObserver@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MouseInputGenerated@Api@MouseInputObserver@@UEAAJPEAU?$ITypedEventHandler@PEAVMouseInputObserver@Input@Internal@UI@Windows@@PEAVMouseInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_MouseInputGenerated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Observing@Api@MouseInputObserver@@UEAAJPEAE@Z
    virtual long get_Observing(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MouseInputGenerated@Api@MouseInputObserver@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MouseInputGenerated(EventRegistrationToken);
};
} // namespace MouseInputObserver

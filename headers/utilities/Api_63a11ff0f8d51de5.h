#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace FocusObserverWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@FocusObserverWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@Api@FocusObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVFocusObserver@Input@Internal@UI@Windows@@PEAVFocusChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GotFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LostFocus@Api@FocusObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVFocusObserver@Input@Internal@UI@Windows@@PEAVFocusChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LostFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasFocus@Api@FocusObserverWinRT@@UEAAJPEAE@Z
    virtual long get_HasFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GotFocus@Api@FocusObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GotFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LostFocus@Api@FocusObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LostFocus(EventRegistrationToken);
};
} // namespace FocusObserverWinRT

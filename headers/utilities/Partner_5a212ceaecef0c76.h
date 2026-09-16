#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace PointerInputObserverWinRT {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@PointerInputObserverWinRT@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DirectManipulationHitTest@Partner@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAUIInternalDirectManipulationInterop@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DirectManipulationHitTest(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DirectManipulationHitTest@Partner@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DirectManipulationHitTest(EventRegistrationToken);
};
} // namespace PointerInputObserverWinRT

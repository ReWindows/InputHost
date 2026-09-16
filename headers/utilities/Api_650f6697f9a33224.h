#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
namespace PointerInputObserverWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PointerInputObserverWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerCaptureLost@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerCaptureLost(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerEntered@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerEntered(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerExited@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerExited(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerMoved@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerPressed@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerReleased@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerRoutedAway@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerRoutedAway(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerRoutedReleased@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerRoutedReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerRoutedTo@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerRoutedTo(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerWheelChanged@Api@PointerInputObserverWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPointerInputObserver@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerWheelChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerCaptureLost@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerCaptureLost(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerEntered@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerEntered(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerExited@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerExited(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerMoved@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerMoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerPressed@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerReleased@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerRoutedAway@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerRoutedAway(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerRoutedReleased@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerRoutedReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerRoutedTo@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerRoutedTo(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerWheelChanged@Api@PointerInputObserverWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerWheelChanged(EventRegistrationToken);
};
} // namespace PointerInputObserverWinRT

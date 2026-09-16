#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace TouchpadGesturesController {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GlobalActionPerformed@Api@TouchpadGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVTouchpadGlobalActionEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GlobalActionPerformed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerMoved@Api@TouchpadGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVPointerEventArgs@Core@34@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerPressed@Api@TouchpadGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVPointerEventArgs@Core@34@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerReleased@Api@TouchpadGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVPointerEventArgs@Core@34@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enabled@Api@TouchpadGesturesController@@UEAAJPEAE@Z
    virtual long get_Enabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedGestures@Api@TouchpadGesturesController@@UEAAJPEAW4TouchpadGlobalGestureKinds@Input@UI@Windows@@@Z
    virtual long get_SupportedGestures(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Enabled@Api@TouchpadGesturesController@@UEAAJE@Z
    virtual long put_Enabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportedGestures@Api@TouchpadGesturesController@@UEAAJW4TouchpadGlobalGestureKinds@Input@UI@Windows@@@Z
    virtual long put_SupportedGestures(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GlobalActionPerformed@Api@TouchpadGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GlobalActionPerformed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerMoved@Api@TouchpadGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerMoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerPressed@Api@TouchpadGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerReleased@Api@TouchpadGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerReleased(EventRegistrationToken);
};
} // namespace TouchpadGesturesController

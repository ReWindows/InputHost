#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
namespace ShellGesturesController {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ShellGesturesController@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerMoved@Api@ShellGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerPressed@Api@ShellGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerReleased@Api@ShellGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TouchpadGlobalActionPerformed@Api@ShellGesturesController@@UEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVTouchpadGlobalActionEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TouchpadGlobalActionPerformed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressionRegions@Api@ShellGesturesController@@UEAAJPEAIPEAPEAURect@Foundation@Windows@@@Z
    virtual long get_SuppressionRegions(unsigned int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TouchGesturesEnabled@Api@ShellGesturesController@@UEAAJPEAE@Z
    virtual long get_TouchGesturesEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TouchpadGesturesEnabled@Api@ShellGesturesController@@UEAAJPEAE@Z
    virtual long get_TouchpadGesturesEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TouchpadSupportedGestures@Api@ShellGesturesController@@UEAAJPEAW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z
    virtual long get_TouchpadSupportedGestures(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressionRegions@Api@ShellGesturesController@@UEAAJIPEAURect@Foundation@Windows@@@Z
    virtual long put_SuppressionRegions(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TouchGesturesEnabled@Api@ShellGesturesController@@UEAAJE@Z
    virtual long put_TouchGesturesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TouchpadGesturesEnabled@Api@ShellGesturesController@@UEAAJE@Z
    virtual long put_TouchpadGesturesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TouchpadSupportedGestures@Api@ShellGesturesController@@UEAAJW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z
    virtual long put_TouchpadSupportedGestures(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerMoved@Api@ShellGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerMoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerPressed@Api@ShellGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerReleased@Api@ShellGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TouchpadGlobalActionPerformed@Api@ShellGesturesController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TouchpadGlobalActionPerformed(EventRegistrationToken);
};
} // namespace ShellGesturesController

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace MagnifierControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@MagnifierControllerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Panning@Api@MagnifierControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVMagnifierController@Input@Internal@UI@Windows@@PEAVMagnifierGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Panning(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Toggled@Api@MagnifierControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVMagnifierController@Input@Internal@UI@Windows@@PEAVMagnifierToggleEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Toggled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Zooming@Api@MagnifierControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVMagnifierController@Input@Internal@UI@Windows@@PEAVMagnifierGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Zooming(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GesturesEnabled@Api@MagnifierControllerWinRT@@UEAAJPEAE@Z
    virtual long get_GesturesEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleEnabled@Api@MagnifierControllerWinRT@@UEAAJPEAE@Z
    virtual long get_ToggleEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GesturesEnabled@Api@MagnifierControllerWinRT@@UEAAJE@Z
    virtual long put_GesturesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ToggleEnabled@Api@MagnifierControllerWinRT@@UEAAJE@Z
    virtual long put_ToggleEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Panning@Api@MagnifierControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Panning(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Toggled@Api@MagnifierControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Toggled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Zooming@Api@MagnifierControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Zooming(EventRegistrationToken);
};
} // namespace MagnifierControllerWinRT

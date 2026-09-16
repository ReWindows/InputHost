#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
namespace PenButtonListenerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PenButtonListenerWinRT@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@Api@PenButtonListenerWinRT@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsSupportedChanged@Api@PenButtonListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_IsSupportedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TailButtonClicked@Api@PenButtonListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAVPenTailButtonClickedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TailButtonClicked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TailButtonDoubleClicked@Api@PenButtonListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAVPenTailButtonDoubleClickedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TailButtonDoubleClicked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TailButtonLongPressed@Api@PenButtonListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAVPenTailButtonLongPressedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TailButtonLongPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsSupportedChanged@Api@PenButtonListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsSupportedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TailButtonClicked@Api@PenButtonListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TailButtonClicked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TailButtonDoubleClicked@Api@PenButtonListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TailButtonDoubleClicked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TailButtonLongPressed@Api@PenButtonListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TailButtonLongPressed(EventRegistrationToken);
};
} // namespace PenButtonListenerWinRT

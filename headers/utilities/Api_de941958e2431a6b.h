#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
namespace PenDockListenerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PenDockListenerWinRT@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@Api@PenDockListenerWinRT@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Docked@Api@PenDockListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenDockListener@Input@Devices@Windows@@PEAVPenDockedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Docked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsSupportedChanged@Api@PenDockListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenDockListener@Input@Devices@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_IsSupportedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Undocked@Api@PenDockListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenDockListener@Input@Devices@Windows@@PEAVPenUndockedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Undocked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Docked@Api@PenDockListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Docked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsSupportedChanged@Api@PenDockListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsSupportedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Undocked@Api@PenDockListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Undocked(EventRegistrationToken);
};
} // namespace PenDockListenerWinRT

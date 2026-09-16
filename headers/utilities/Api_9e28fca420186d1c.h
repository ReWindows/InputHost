#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace PenTipToGlassListenerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PenTipToGlassListenerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TipToGlass@Api@PenTipToGlassListenerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVPenTipToGlassListener@Input@Devices@Internal@Windows@@PEAVPenTipToGlassEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TipToGlass(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TipToGlass@Api@PenTipToGlassListenerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TipToGlass(EventRegistrationToken);
};
} // namespace PenTipToGlassListenerWinRT

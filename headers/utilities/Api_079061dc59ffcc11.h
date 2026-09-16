#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace ActivationControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ActivationControllerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryActivate@Api@ActivationControllerWinRT@@UEAAJPEAE@Z
    virtual long TryActivate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Activating@Api@ActivationControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationController@Input@Internal@UI@Windows@@PEAVActivatingEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Activating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivationStateChanged@Api@ActivationControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationController@Input@Internal@UI@Windows@@PEAVActivationStateChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivationStateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Luid@Api@ActivationControllerWinRT@@UEAAJPEA_K@Z
    virtual long get_Luid(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Activating@Api@ActivationControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Activating(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivationStateChanged@Api@ActivationControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivationStateChanged(EventRegistrationToken);
};
} // namespace ActivationControllerWinRT

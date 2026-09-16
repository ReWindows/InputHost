#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace SystemButtonEventControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SystemButtonEventControllerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemFunctionButtonPressed@Api@SystemButtonEventControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVSystemButtonEventController@Input@UI@Windows@@PEAVSystemFunctionButtonEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemFunctionButtonPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemFunctionButtonReleased@Api@SystemButtonEventControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVSystemButtonEventController@Input@UI@Windows@@PEAVSystemFunctionButtonEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemFunctionButtonReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemFunctionLockChanged@Api@SystemButtonEventControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVSystemButtonEventController@Input@UI@Windows@@PEAVSystemFunctionLockChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemFunctionLockChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemFunctionLockIndicatorChanged@Api@SystemButtonEventControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVSystemButtonEventController@Input@UI@Windows@@PEAVSystemFunctionLockIndicatorChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemFunctionLockIndicatorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemFunctionButtonPressed@Api@SystemButtonEventControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemFunctionButtonPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemFunctionButtonReleased@Api@SystemButtonEventControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemFunctionButtonReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemFunctionLockChanged@Api@SystemButtonEventControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemFunctionLockChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemFunctionLockIndicatorChanged@Api@SystemButtonEventControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemFunctionLockIndicatorChanged(EventRegistrationToken);
};
} // namespace SystemButtonEventControllerWinRT

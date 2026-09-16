#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace SystemButtonEventControllerWinRT {
class Private {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@SystemButtonEventControllerWinRT@@QEAA@XZ
    Private();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemMicrophoneButtonPressed@Private@SystemButtonEventControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAUISystemButtonEventControllerPrivate@Input@Internal@UI@Windows@@PEAVSystemMicrophoneButtonEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemMicrophoneButtonPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SystemMicrophoneButtonReleased@Private@SystemButtonEventControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAUISystemButtonEventControllerPrivate@Input@Internal@UI@Windows@@PEAVSystemMicrophoneButtonEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SystemMicrophoneButtonReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemMicrophoneButtonPressed@Private@SystemButtonEventControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemMicrophoneButtonPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SystemMicrophoneButtonReleased@Private@SystemButtonEventControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SystemMicrophoneButtonReleased(EventRegistrationToken);
};
} // namespace SystemButtonEventControllerWinRT

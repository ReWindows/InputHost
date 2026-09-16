#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace DevicePostureWinRT {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DevicePostureChanged@Api@DevicePostureWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVDevicePosture@Input@Internal@UI@Windows@@PEAVDevicePostureChangedArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DevicePostureChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Posture@Api@DevicePostureWinRT@@UEAAJPEAW4DevicePostureMode@Input@Internal@UI@Windows@@@Z
    virtual long get_Posture(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DevicePostureChanged@Api@DevicePostureWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DevicePostureChanged(EventRegistrationToken);
};
} // namespace DevicePostureWinRT

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace WindowsMessageDeliveryWinRT {
class Private {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHwndUpdated_Callback@Private@WindowsMessageDeliveryWinRT@@UEAAXPEAUHWND__@@@Z
    virtual void OnHwndUpdated_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreTranslateKeyboardMessage_Callback@Private@WindowsMessageDeliveryWinRT@@UEAAXPEAUWindowsMessageDeliveryMessage@@PEA_N@Z
    virtual void OnPreTranslateKeyboardMessage_Callback(WindowsMessageDeliveryMessage *, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@WindowsMessageDeliveryWinRT@@QEAA@XZ
    Private();
};
} // namespace WindowsMessageDeliveryWinRT

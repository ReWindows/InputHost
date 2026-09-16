#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace WindowsMessageDeliveryInputObject {
class Private {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHwndUpdated_Callback@Private@WindowsMessageDeliveryInputObject@@UEAAXPEAUHWND__@@@Z
    virtual void OnHwndUpdated_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreTranslateKeyboardMessage_Callback@Private@WindowsMessageDeliveryInputObject@@UEAAXPEAUWindowsMessageDeliveryMessage@@PEA_N@Z
    virtual void OnPreTranslateKeyboardMessage_Callback(WindowsMessageDeliveryMessage *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAttached@Private@WindowsMessageDeliveryInputObject@@UEAAXPEAVWindowsMessageDeliveryAdapter@@_N@Z
    virtual void OnWindowAttached(WindowsMessageDeliveryAdapter *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@Private@WindowsMessageDeliveryInputObject@@UEAAXPEAVWindowsMessageDeliveryAdapter@@@Z
    virtual void OnWindowDestroyed(WindowsMessageDeliveryAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@Private@WindowsMessageDeliveryInputObject@@UEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@WindowsMessageDeliveryInputObject@@QEAA@XZ
    Private();
};
} // namespace WindowsMessageDeliveryInputObject

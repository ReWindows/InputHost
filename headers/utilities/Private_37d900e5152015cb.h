#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace WindowsMessageDeliveryInputSiteWinRT {
class Private {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAttached@Private@WindowsMessageDeliveryInputSiteWinRT@@UEAAXPEAVWindowsMessageDeliveryAdapter@@_N@Z
    virtual void OnWindowAttached(WindowsMessageDeliveryAdapter *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@Private@WindowsMessageDeliveryInputSiteWinRT@@UEAAXPEAVWindowsMessageDeliveryAdapter@@@Z
    virtual void OnWindowDestroyed(WindowsMessageDeliveryAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@Private@WindowsMessageDeliveryInputSiteWinRT@@UEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTranslateKeyboardMessage_Callback@Private@WindowsMessageDeliveryInputSiteWinRT@@UEAAJPEBUtagMSG@@_NPEA_N@Z
    virtual long PreTranslateKeyboardMessage_Callback(tagMSG const *, bool, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@WindowsMessageDeliveryInputSiteWinRT@@QEAA@XZ
    Private();
};
} // namespace WindowsMessageDeliveryInputSiteWinRT

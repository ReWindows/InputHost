#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 2 member(s).
class UIAutomationForwarder {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAutomationHostProvider@UIAutomationForwarder@@AEAA_NPEAUHWND__@@@Z
    bool EnsureAutomationHostProvider(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutomationProviderRequestedMessage_Callback@UIAutomationForwarder@@AEAA_NAEAUWindowsMessageDeliveryMessage@@@Z
    bool OnAutomationProviderRequestedMessage_Callback(WindowsMessageDeliveryMessage &);
};

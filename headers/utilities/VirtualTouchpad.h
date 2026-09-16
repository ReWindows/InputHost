#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace InputTraceLogging {
class VirtualTouchpad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z
    static void ClientCreated(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z
    static void ClientDestroyed(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z
    static void ClientIsActiveChanged(void const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientReceivingInput@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z
    static void ClientReceivingInput(void const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    static void ClientSizeChanged(void const *, ::Windows::UI::Internal::Input::VirtualTouchpadSize const &);
};
} // namespace InputTraceLogging

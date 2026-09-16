#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace InputETW {
class UIAHitTest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestForEndpointId@UIAHitTest@InputETW@@SAXII@Z
    static void HitTestForEndpointId(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetUIAHitTestProxy@UIAHitTest@InputETW@@SAX_N0@Z
    static void ResetUIAHitTestProxy(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAHitTestResponse@UIAHitTest@InputETW@@SAXU_GUID@@_N1@Z
    static void UIAHitTestResponse(_GUID, bool, bool);
};
} // namespace InputETW

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace InputTraceLogging {
class Magnifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivePan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@_K@Z
    static void ReceivePan(int, unsigned int, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@_K@Z
    static void ReceiveToggle(WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@_K@Z
    static void ReceiveZoom(int, unsigned int, WindissectOpaque const &, uint64_t);
};
} // namespace InputTraceLogging

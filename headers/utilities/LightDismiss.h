#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace InputTraceLogging {
class LightDismiss {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientCreated@LightDismiss@InputTraceLogging@@SAXPEBX@Z
    static void ClientCreated(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientDestroyed@LightDismiss@InputTraceLogging@@SAXPEBX@Z
    static void ClientDestroyed(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientDismissed@LightDismiss@InputTraceLogging@@SAXPEBX@Z
    static void ClientDismissed(void const *);
};
} // namespace InputTraceLogging

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 1 member(s).
namespace InputTraceLogging {
class Mouse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObserveInput@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@_K@Z
    static void ObserveInput(::InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET const &, uint64_t);
};
} // namespace InputTraceLogging

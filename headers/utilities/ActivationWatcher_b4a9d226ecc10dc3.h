#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace InputTraceLogging {
class ActivationWatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@ActivationWatcher@InputTraceLogging@@SAX_K_N@Z
    static void Activate(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ActivationWatcher@InputTraceLogging@@SAXPEBX@Z
    static void Destroy(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSpatialActivation@ActivationWatcher@InputTraceLogging@@SAX_K_N@Z
    static void EnableSpatialActivation(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ActivationWatcher@InputTraceLogging@@SAXPEBX@Z
    static void Initialize(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivatableEntityAddedEvent@ActivationWatcher@InputTraceLogging@@SAXPEBX_KAEBU_LUID@@@Z
    static void RaiseActivatableEntityAddedEvent(void const *, uint64_t, _LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivatableEntityRemovedEvent@ActivationWatcher@InputTraceLogging@@SAXPEBX_KAEBU_LUID@@@Z
    static void RaiseActivatableEntityRemovedEvent(void const *, uint64_t, _LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationChangedEvent@ActivationWatcher@InputTraceLogging@@SAXPEBX_KAEBU_LUID@@@Z
    static void RaiseActivationChangedEvent(void const *, uint64_t, _LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActivationRequested@ActivationWatcher@InputTraceLogging@@SAXPEBX_K@Z
    static void RaiseActivationRequested(void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionStatus@ActivationWatcher@InputTraceLogging@@SAXPEBXI@Z
    static void TransitionStatus(void const *, unsigned int);
};
} // namespace InputTraceLogging

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace InputTraceLogging {
class ActivationController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateCoreMessaging@ActivationController@InputTraceLogging@@SAXPEBX_K_N@Z
    static void ActivateCoreMessaging(void const *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateQEvent@ActivationController@InputTraceLogging@@SAXPEBX_K_N@Z
    static void ActivateQEvent(void const *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationDeferral@ActivationController@InputTraceLogging@@SAXPEBX@Z
    static void ActivationDeferral(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationDeferralCompletion@ActivationController@InputTraceLogging@@SAXPEBX@Z
    static void ActivationDeferralCompletion(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ActivationController@InputTraceLogging@@SAXPEBX_K@Z
    static void Destroy(void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ActivationController@InputTraceLogging@@SAXPEBX_KAEBU_LUID@@1@Z
    static void Initialize(void const *, uint64_t, _LUID const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryActivate@ActivationController@InputTraceLogging@@SAXPEBXAEBU_LUID@@_K@Z
    static void TryActivate(void const *, _LUID const &, uint64_t);
};
} // namespace InputTraceLogging

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace InputTraceLogging {
class ForegroundManagerClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ForegroundManagerClient@InputTraceLogging@@SAXPEBX@Z
    static void Destroy(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSpatialActivation@ForegroundManagerClient@InputTraceLogging@@SAXPEBX_K_N@Z
    static void EnableSpatialActivation(void const *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ForegroundManagerClient@InputTraceLogging@@SAXPEBX@Z
    static void Initialize(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseForegroundChangedEvent@ForegroundManagerClient@InputTraceLogging@@SAXPEBX_K111@Z
    static void RaiseForegroundChangedEvent(void const *, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseForegroundRequestedEvent@ForegroundManagerClient@InputTraceLogging@@SAXPEBX_K111@Z
    static void RaiseForegroundRequestedEvent(void const *, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForeground@ForegroundManagerClient@InputTraceLogging@@SAXPEBX_K@Z
    static void SetForeground(void const *, uint64_t);
};
} // namespace InputTraceLogging

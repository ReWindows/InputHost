#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace Microsoft::WRL2 {
class ApiEntryGuard {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApiEntryGuard@WRL2@Microsoft@@QEAA@PEAVContextSession@12@@Z
    ApiEntryGuard(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApiEntryGuard@WRL2@Microsoft@@QEAA@$$QEAV?$ComPtr@VContextSession@WRL2@Microsoft@@@WRL@2@@Z
    ApiEntryGuard(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApiEntryGuard@WRL2@Microsoft@@QEAA@XZ
    ~ApiEntryGuard();
};
} // namespace Microsoft::WRL2

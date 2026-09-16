#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace MouseCaptureWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@MouseCaptureWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReleaseCapture@Api@MouseCaptureWinRT@@UEAAJPEAE@Z
    virtual long TryReleaseCapture(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetCapture@Api@MouseCaptureWinRT@@UEAAJPEAE@Z
    virtual long TrySetCapture(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCapture@Api@MouseCaptureWinRT@@UEAAJPEAE@Z
    virtual long get_HasCapture(unsigned char *);
};
} // namespace MouseCaptureWinRT

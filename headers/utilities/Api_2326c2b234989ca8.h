#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace EdgyGestureRecognitionConfiguration {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@EdgyGestureRecognitionConfiguration@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureDirection@Api@EdgyGestureRecognitionConfiguration@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_GestureDirection(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureMinimumDistanceInHimetrics@Api@EdgyGestureRecognitionConfiguration@@UEAAJPEAI@Z
    virtual long get_GestureMinimumDistanceInHimetrics(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureTimeoutInMilliseconds@Api@EdgyGestureRecognitionConfiguration@@UEAAJPEAI@Z
    virtual long get_GestureTimeoutInMilliseconds(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientationBiasInDegrees@Api@EdgyGestureRecognitionConfiguration@@UEAAJPEAM@Z
    virtual long get_OrientationBiasInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureDirection@Api@EdgyGestureRecognitionConfiguration@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_GestureDirection(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureMinimumDistanceInHimetrics@Api@EdgyGestureRecognitionConfiguration@@UEAAJI@Z
    virtual long put_GestureMinimumDistanceInHimetrics(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureTimeoutInMilliseconds@Api@EdgyGestureRecognitionConfiguration@@UEAAJI@Z
    virtual long put_GestureTimeoutInMilliseconds(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OrientationBiasInDegrees@Api@EdgyGestureRecognitionConfiguration@@UEAAJM@Z
    virtual long put_OrientationBiasInDegrees(float);
};
} // namespace EdgyGestureRecognitionConfiguration

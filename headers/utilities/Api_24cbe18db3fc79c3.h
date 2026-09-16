#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace CursorSuppressionPolicyObjectWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CursorSuppressionPolicyObjectWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressionPolicy@Api@CursorSuppressionPolicyObjectWinRT@@UEAAJPEAW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    virtual long get_SuppressionPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressionPolicy@Api@CursorSuppressionPolicyObjectWinRT@@UEAAJW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    virtual long put_SuppressionPolicy(int);
};
} // namespace CursorSuppressionPolicyObjectWinRT

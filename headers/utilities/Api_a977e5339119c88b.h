#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace InputGestureManager {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputGestureManager@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApproveProcessesForAnimation@Api@InputGestureManager@@UEAAJIPEAI@Z
    virtual long ApproveProcessesForAnimation(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterShellSource@Api@InputGestureManager@@UEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@@Z
    virtual long RegisterShellSource(uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeProcessesForAnimation@Api@InputGestureManager@@UEAAJIPEAI@Z
    virtual long RevokeProcessesForAnimation(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartGlobalOperationAsync@Api@InputGestureManager@@UEAAJI_KPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryStartGlobalOperationAsync(unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartOperationAsync@Api@InputGestureManager@@UEAAJI_KPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryStartOperationAsync(unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterShellSource@Api@InputGestureManager@@UEAAJ_K@Z
    virtual long UnregisterShellSource(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationCreated@Api@InputGestureManager@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureManager@Input@Internal@UI@Windows@@PEAVInputGestureOperation@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationCreated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationDestroyed@Api@InputGestureManager@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureManager@Input@Internal@UI@Windows@@PEAVInputGestureOperation@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationDestroyed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressionRegions@Api@InputGestureManager@@UEAAJPEAIPEAPEAURect@Foundation@Windows@@@Z
    virtual long get_SuppressionRegions(unsigned int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressionRegions@Api@InputGestureManager@@UEAAJIPEAURect@Foundation@Windows@@@Z
    virtual long put_SuppressionRegions(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationCreated@Api@InputGestureManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationCreated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationDestroyed@Api@InputGestureManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationDestroyed(EventRegistrationToken);
};
} // namespace InputGestureManager

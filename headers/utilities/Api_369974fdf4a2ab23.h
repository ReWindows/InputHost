#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace InputInjectionObjectWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputInjectionObjectWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectTouch@Api@InputInjectionObjectWinRT@@UEAAJPEAU?$IVector@UTouchInjectionContact@Input@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long InjectTouch(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkspaceId@Api@InputInjectionObjectWinRT@@UEAAJPEA_K@Z
    virtual long get_WorkspaceId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WorkspaceId@Api@InputInjectionObjectWinRT@@UEAAJ_K@Z
    virtual long put_WorkspaceId(uint64_t);
};
} // namespace InputInjectionObjectWinRT

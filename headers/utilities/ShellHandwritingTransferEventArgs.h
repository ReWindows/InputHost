#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class ShellHandwritingTransferEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShellHandwritingTransferEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShellHandwritingTransferEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShellHandwritingTransferEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShellHandwritingTransferEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShellHandwritingTransferEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShellHandwritingTransferEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShellHandwritingTransferEventArgs@@UEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::SyntheticPenInfo const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellHandwritingTransferEventArgs@@QEAA@XZ
    ShellHandwritingTransferEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DuplicatePenInfo@ShellHandwritingTransferEventArgs@@UEAAJPEAPEAU?$IVector@USyntheticPenInfo@Input@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_DuplicatePenInfo(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellHandwritingTransferEventArgs@@UEAA@XZ
    virtual ~ShellHandwritingTransferEventArgs();
};

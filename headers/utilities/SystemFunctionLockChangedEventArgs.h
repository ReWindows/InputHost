#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class SystemFunctionLockChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemFunctionLockChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemFunctionLockChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemFunctionLockChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemFunctionLockChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemFunctionLockChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemFunctionLockChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@SystemFunctionLockChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLocked@SystemFunctionLockChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsLocked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Timestamp@SystemFunctionLockChangedEventArgs@@UEAAJPEA_K@Z
    virtual long get_Timestamp(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@SystemFunctionLockChangedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

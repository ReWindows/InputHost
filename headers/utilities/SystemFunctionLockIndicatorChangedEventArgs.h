#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class SystemFunctionLockIndicatorChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemFunctionLockIndicatorChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemFunctionLockIndicatorChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIndicatorOn@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsIndicatorOn(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Timestamp@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJPEA_K@Z
    virtual long get_Timestamp(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@SystemFunctionLockIndicatorChangedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

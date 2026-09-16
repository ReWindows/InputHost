#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class KeyboardInputDelegatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyboardInputDelegatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@KeyboardInputDelegatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@KeyboardInputDelegatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@KeyboardInputDelegatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyboardInputDelegatedEventArgs@@QEAA@II_N@Z
    KeyboardInputDelegatedEventArgs(unsigned int, unsigned int, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KeyboardInputDelegatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyboardInputDelegatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelegationOn@KeyboardInputDelegatedEventArgs@@UEAAJPEAE@Z
    virtual long get_DelegationOn(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceProcessID@KeyboardInputDelegatedEventArgs@@UEAAJPEAI@Z
    virtual long get_SourceProcessID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceViewID@KeyboardInputDelegatedEventArgs@@UEAAJPEAI@Z
    virtual long get_SourceViewID(unsigned int *);
};

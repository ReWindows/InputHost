#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class ActivatableEntityRT {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivatableEntityRT@@QEAA@XZ
    ActivatableEntityRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@ActivatableEntityRT@@UEAAJE@Z
    virtual long Activate(unsigned char);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivatableEntityRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivatableEntityRT@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivatableEntityRT@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivatableEntityRT@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivatableEntityRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivatableEntityRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ActivatableEntityRT@@UEAAJPEAVBamoActivatableEntityProxy@@@Z
    virtual long RuntimeClassInitialize(BamoActivatableEntityProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsActivated@ActivatableEntityRT@@QEAAJE@Z
    long SetIsActivated(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActivated@ActivatableEntityRT@@UEAAJPEAE@Z
    virtual long get_IsActivated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Luid@ActivatableEntityRT@@UEAAJPEA_K@Z
    virtual long get_Luid(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@ActivatableEntityRT@@UEAAJPEAI@Z
    virtual long get_ProcessId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThreadId@ActivatableEntityRT@@UEAAJPEAI@Z
    virtual long get_ThreadId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopLevelWindowId@ActivatableEntityRT@@UEAAJPEA_K@Z
    virtual long get_TopLevelWindowId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@ActivatableEntityRT@@UEAAJPEA_K@Z
    virtual long get_WindowId(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivatableEntityRT@@UEAA@XZ
    virtual ~ActivatableEntityRT();
};

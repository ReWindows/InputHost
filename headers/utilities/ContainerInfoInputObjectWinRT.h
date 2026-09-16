#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class ContainerInfoInputObjectWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContainerInfoInputObjectWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ContainerInfoInputObjectWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@ContainerInfoInputObjectWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContainerInfoInputObjectWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContainerInfoInputObjectWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContainerInfoInputObjectWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@U_GUID@@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *, _GUID, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerInfoInputObjectWinRT@@UEAA@XZ
    virtual ~ContainerInfoInputObjectWinRT();
};

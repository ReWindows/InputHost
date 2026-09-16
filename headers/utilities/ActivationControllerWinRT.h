#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class ActivationControllerWinRT {
public:
    class Api;
    class Private;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationControllerWinRT@@QEAA@XZ
    ActivationControllerWinRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationControllerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ActivationControllerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@ActivationControllerWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@ActivationControllerWinRT@@UEAAXXZ
    virtual void PostDestroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationControllerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationControllerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ActivationControllerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationControllerWinRT@@UEAA@XZ
    virtual ~ActivationControllerWinRT();
};

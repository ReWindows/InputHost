#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class InputForwardTarget {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputForwardTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputForwardTarget@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputForwardTarget@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputForwardTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputForwardTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputForwardTarget@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputForwardTarget@@UEAA@XZ
    virtual ~InputForwardTarget();
};

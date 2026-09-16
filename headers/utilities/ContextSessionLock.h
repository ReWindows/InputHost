#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace Microsoft::WRL2 {
class ContextSessionLock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContextSessionLock@WRL2@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreadInsideLock@ContextSessionLock@WRL2@Microsoft@@QEBA_NXZ
    bool IsThreadInsideLock() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContextSessionLock@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContextSessionLock@WRL2@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextSessionLock@WRL2@Microsoft@@MEAA@XZ
    virtual ~ContextSessionLock();
};
} // namespace Microsoft::WRL2

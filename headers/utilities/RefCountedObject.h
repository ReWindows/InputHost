#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class RefCountedObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RefCountedObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RefCountedObject@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefCountedObject@@UEAA@XZ
    virtual ~RefCountedObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@RefCountedObject@@MEAAXXZ
    virtual void OnFinalRelease();
};

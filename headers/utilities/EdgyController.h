#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class EdgyController {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@EdgyController@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEdgyGestureDetected@EdgyController@@QEAAXPEBGIAEBUD2D_VECTOR_2F@@_K12W4EdgyInputRouting@Input@Internal@UI@Windows@@W4EdgyExperienceRunState@4567@@Z
    void OnEdgyGestureDetected(unsigned short const *, unsigned int, D2D_VECTOR_2F const &, uint64_t, D2D_VECTOR_2F const &, uint64_t, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyController@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureDirection@EdgyController@@QEAAJUVector3@Numerics@Foundation@Windows@@@Z
    long SetGestureDirection(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVertices@EdgyController@@QEAAJIQEAUVector3@Numerics@Foundation@Windows@@@Z
    long SetVertices(unsigned int, WindissectOpaque* const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyController@@UEAA@XZ
    virtual ~EdgyController();
};

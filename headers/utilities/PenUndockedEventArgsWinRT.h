#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class PenUndockedEventArgsWinRT {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenUndockedEventArgsWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenUndockedEventArgsWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenUndockedEventArgsWinRT@@UEAAKXZ
    virtual unsigned long Release();
};

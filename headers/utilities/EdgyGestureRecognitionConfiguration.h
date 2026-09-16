#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class EdgyGestureRecognitionConfiguration {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyGestureRecognitionConfiguration@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@EdgyGestureRecognitionConfiguration@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyGestureRecognitionConfiguration@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyGestureRecognitionConfiguration@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyGestureRecognitionConfiguration@@QEAAJPEAVContextSession@WRL2@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyGestureRecognitionConfiguration@@UEAA@XZ
    virtual ~EdgyGestureRecognitionConfiguration();
};

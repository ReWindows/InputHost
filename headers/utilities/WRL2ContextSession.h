#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class WRL2ContextSession {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WRL2ContextSession@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@WRL2ContextSession@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@WRL2ContextSession@@SA?AV?$ComPtr@VWRL2ContextSession@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetForCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnSessionThread_NoLock@WRL2ContextSession@@UEAAXP6AJPEAX@Z0@Z
    virtual void InvokeOnSessionThread_NoLock(long ( *)(void *), void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WRL2ContextSession@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WRL2ContextSession@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WRL2ContextSession@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WRL2ContextSession@@UEAA@XZ
    virtual ~WRL2ContextSession();
};

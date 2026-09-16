#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class InputManualResizeArea {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputManualResizeArea@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputManualResizeArea@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputManualResizeArea@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputManualResizeArea@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputManualResizeArea@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputManualResizeArea@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputManualResizeArea@@UEAA@XZ
    virtual ~InputManualResizeArea();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualResizeCancelled@InputManualResizeArea@@MEAAJPEAVBamoManualResizeAreaClientPrincipal@@PEAVBamoManualResizeAreaClientStub@@I@Z
    virtual long ManualResizeCancelled(BamoManualResizeAreaClientPrincipal *, BamoManualResizeAreaClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualResizeEnded@InputManualResizeArea@@MEAAJPEAVBamoManualResizeAreaClientPrincipal@@PEAVBamoManualResizeAreaClientStub@@I@Z
    virtual long ManualResizeEnded(BamoManualResizeAreaClientPrincipal *, BamoManualResizeAreaClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputManualResizeArea@@MEAAJPEAVBamoManualResizeAreaClientPrincipal@@PEAVBamoManualResizeAreaClientStub@@@Z
    virtual long OnStubDisconnected(BamoManualResizeAreaClientPrincipal *, BamoManualResizeAreaClientStub *);
};

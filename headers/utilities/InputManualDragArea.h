#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class InputManualDragArea {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputManualDragArea@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputManualDragArea@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputManualDragArea@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputManualDragArea@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputManualDragArea@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputManualDragArea@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputManualDragArea@@UEAA@XZ
    virtual ~InputManualDragArea();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualDragCancelled@InputManualDragArea@@MEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoManualDragAreaClientStub@@I@Z
    virtual long ManualDragCancelled(BamoManualDragAreaClientPrincipal *, BamoManualDragAreaClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualDragEnded@InputManualDragArea@@MEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoManualDragAreaClientStub@@I@Z
    virtual long ManualDragEnded(BamoManualDragAreaClientPrincipal *, BamoManualDragAreaClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputManualDragArea@@MEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoManualDragAreaClientStub@@@Z
    virtual long OnStubDisconnected(BamoManualDragAreaClientPrincipal *, BamoManualDragAreaClientStub *);
};

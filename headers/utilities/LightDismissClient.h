#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class LightDismissClient {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LightDismissClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LightDismissClient@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@LightDismissClient@@UEAAJPEAVBamoLightDismissClientPrincipal@@PEAVBamoLightDismissClientStub@@@Z
    virtual long Dismiss(BamoLightDismissClientPrincipal *, BamoLightDismissClientStub *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LightDismissClient@@QEAA@XZ
    LightDismissClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWeakReferenceReleased@LightDismissClient@@UEAAJPEAVBamoLightDismissClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoLightDismissClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@LightDismissClient@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LightDismissClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LightDismissClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LightDismissClient@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LightDismissClient@@UEAA@XZ
    virtual ~LightDismissClient();
};

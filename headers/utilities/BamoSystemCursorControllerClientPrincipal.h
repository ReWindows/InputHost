#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class BamoSystemCursorControllerClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemCursorControllerClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoSystemCursorControllerClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleOverride@BamoSystemCursorControllerClientPrincipal@@UEAAMXZ
    virtual float GetScaleOverride();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemCursorControllerClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemCursorControllerClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleOverride@BamoSystemCursorControllerClientPrincipal@@UEAAXM@Z
    virtual void SetScaleOverride(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoSystemCursorControllerClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemCursorControllerClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoSystemCursorControllerClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoSystemCursorControllerClientPrincipal@@MEAAJPEAVBamoSystemCursorControllerClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoSystemCursorControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoSystemCursorControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoSystemCursorControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoSystemCursorControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoSystemCursorControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoSystemCursorControllerClientPrincipal@@MEAAJPEAVBamoSystemCursorControllerClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoSystemCursorControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoSystemCursorControllerClientPrincipal@@MEAAJPEAVBamoSystemCursorControllerClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoSystemCursorControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoSystemCursorControllerClientPrincipal@@MEAAJPEAVBamoSystemCursorControllerClientStub@@@Z
    virtual long OnStubDisconnected(BamoSystemCursorControllerClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemCursorControllerClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

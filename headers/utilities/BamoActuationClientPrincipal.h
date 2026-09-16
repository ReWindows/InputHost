#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoActuationClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActuationClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoActuationClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActuationClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActuationClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoActuationClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoActuationClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoActuationClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoActuationClientPrincipal@@MEAAJPEAVBamoActuationClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoActuationClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActuationClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoActuationClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActuationClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoActuationClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoActuationClientPrincipal@@MEAAJPEAVBamoActuationClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoActuationClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoActuationClientPrincipal@@MEAAJPEAVBamoActuationClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoActuationClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoActuationClientPrincipal@@MEAAJPEAVBamoActuationClientStub@@@Z
    virtual long OnStubDisconnected(BamoActuationClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActuationClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

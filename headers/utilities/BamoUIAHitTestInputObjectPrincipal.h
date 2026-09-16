#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoUIAHitTestInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUIAHitTestInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointId@BamoUIAHitTestInputObjectPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetEndpointId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUIAHitTestInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUIAHitTestInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndpointId@BamoUIAHitTestInputObjectPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetEndpointId(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoUIAHitTestInputObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoUIAHitTestInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoUIAHitTestInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoUIAHitTestInputObjectPrincipal@@MEAAJPEAVBamoUIAHitTestInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoUIAHitTestInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoUIAHitTestInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoUIAHitTestInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoUIAHitTestInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoUIAHitTestInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoUIAHitTestInputObjectPrincipal@@MEAAJPEAVBamoUIAHitTestInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoUIAHitTestInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoUIAHitTestInputObjectPrincipal@@MEAAJPEAVBamoUIAHitTestInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoUIAHitTestInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoUIAHitTestInputObjectPrincipal@@MEAAJPEAVBamoUIAHitTestInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoUIAHitTestInputObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUIAHitTestInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

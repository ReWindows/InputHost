#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoComponentSiteInputObjectPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoComponentSiteInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(BamoComponentSiteInputObjectPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoComponentSiteInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@PEAVBamoComponentSiteInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoComponentSiteInputObjectPrincipal *, BamoComponentSiteInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@@Z
    virtual long OnCallEpilog(BamoComponentSiteInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoComponentSiteInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@@Z
    virtual long OnCallProlog(BamoComponentSiteInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoComponentSiteInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@PEAVBamoComponentSiteInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoComponentSiteInputObjectPrincipal *, BamoComponentSiteInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@PEAVBamoComponentSiteInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoComponentSiteInputObjectPrincipal *, BamoComponentSiteInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@PEAVBamoComponentSiteInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoComponentSiteInputObjectPrincipal *, BamoComponentSiteInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoComponentSiteInputObjectPrincipalOwner@@UEAAJPEAVBamoComponentSiteInputObjectPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoComponentSiteInputObjectPrincipal *);
};

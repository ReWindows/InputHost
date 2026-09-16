#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoInputDelegationInputObjectPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputDelegationInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(BamoInputDelegationInputObjectPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoInputDelegationInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@@Z
    virtual long OnCallEpilog(BamoInputDelegationInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoInputDelegationInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@@Z
    virtual long OnCallProlog(BamoInputDelegationInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoInputDelegationInputObjectPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoInputDelegationInputObjectPrincipalOwner@@UEAAJPEAVBamoInputDelegationInputObjectPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoInputDelegationInputObjectPrincipal *);
};

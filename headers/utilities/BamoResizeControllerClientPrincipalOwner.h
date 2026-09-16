#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoResizeControllerClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoResizeControllerClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoResizeControllerClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoResizeControllerClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long OnCallProlog(BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoResizeControllerClientPrincipalOwner@@UEAAJPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoResizeControllerClientPrincipal *);
};

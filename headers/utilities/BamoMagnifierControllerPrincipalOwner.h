#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoMagnifierControllerPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoMagnifierControllerStub@@@Z
    virtual long AllocateStubUnderLock(BamoMagnifierControllerPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoMagnifierControllerStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@@Z
    virtual long InitializeProxyUnderLock(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@@Z
    virtual long OnCallEpilog(BamoMagnifierControllerPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoMagnifierControllerPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@@Z
    virtual long OnCallProlog(BamoMagnifierControllerPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoMagnifierControllerPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@@Z
    virtual long OnPropertiesRefreshed(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@@Z
    virtual long OnStubDisconnected(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoMagnifierControllerPrincipalOwner@@UEAAJPEAVBamoMagnifierControllerPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoMagnifierControllerPrincipal *);
};

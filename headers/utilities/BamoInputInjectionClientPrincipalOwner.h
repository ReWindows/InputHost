#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoInputInjectionClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputInjectionClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoInputInjectionClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoInputInjectionClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@PEAVBamoInputInjectionClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoInputInjectionClientPrincipal *, BamoInputInjectionClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoInputInjectionClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoInputInjectionClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@@Z
    virtual long OnCallProlog(BamoInputInjectionClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoInputInjectionClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@PEAVBamoInputInjectionClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoInputInjectionClientPrincipal *, BamoInputInjectionClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@PEAVBamoInputInjectionClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoInputInjectionClientPrincipal *, BamoInputInjectionClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@PEAVBamoInputInjectionClientStub@@@Z
    virtual long OnStubDisconnected(BamoInputInjectionClientPrincipal *, BamoInputInjectionClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoInputInjectionClientPrincipalOwner@@UEAAJPEAVBamoInputInjectionClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoInputInjectionClientPrincipal *);
};

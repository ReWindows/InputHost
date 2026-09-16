#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoLightDismissClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoLightDismissClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoLightDismissClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoLightDismissClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@PEAVBamoLightDismissClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoLightDismissClientPrincipal *, BamoLightDismissClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoLightDismissClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoLightDismissClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@@Z
    virtual long OnCallProlog(BamoLightDismissClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoLightDismissClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@PEAVBamoLightDismissClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoLightDismissClientPrincipal *, BamoLightDismissClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@PEAVBamoLightDismissClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoLightDismissClientPrincipal *, BamoLightDismissClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoLightDismissClientPrincipalOwner@@UEAAJPEAVBamoLightDismissClientPrincipal@@PEAVBamoLightDismissClientStub@@@Z
    virtual long OnStubDisconnected(BamoLightDismissClientPrincipal *, BamoLightDismissClientStub *);
};

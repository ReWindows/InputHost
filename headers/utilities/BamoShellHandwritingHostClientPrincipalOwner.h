#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoShellHandwritingHostClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoShellHandwritingHostClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoShellHandwritingHostClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@PEAVBamoShellHandwritingHostClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoShellHandwritingHostClientPrincipal *, BamoShellHandwritingHostClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoShellHandwritingHostClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoShellHandwritingHostClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@@Z
    virtual long OnCallProlog(BamoShellHandwritingHostClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoShellHandwritingHostClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@PEAVBamoShellHandwritingHostClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoShellHandwritingHostClientPrincipal *, BamoShellHandwritingHostClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@PEAVBamoShellHandwritingHostClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoShellHandwritingHostClientPrincipal *, BamoShellHandwritingHostClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoShellHandwritingHostClientPrincipalOwner@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoShellHandwritingHostClientPrincipal *);
};

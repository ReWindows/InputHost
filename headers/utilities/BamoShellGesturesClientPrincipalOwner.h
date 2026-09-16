#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoShellGesturesClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellGesturesClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoShellGesturesClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoShellGesturesClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@PEAVBamoShellGesturesClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoShellGesturesClientPrincipal *, BamoShellGesturesClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoShellGesturesClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoShellGesturesClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@@Z
    virtual long OnCallProlog(BamoShellGesturesClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoShellGesturesClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@PEAVBamoShellGesturesClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoShellGesturesClientPrincipal *, BamoShellGesturesClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@PEAVBamoShellGesturesClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoShellGesturesClientPrincipal *, BamoShellGesturesClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@PEAVBamoShellGesturesClientStub@@@Z
    virtual long OnStubDisconnected(BamoShellGesturesClientPrincipal *, BamoShellGesturesClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoShellGesturesClientPrincipalOwner@@UEAAJPEAVBamoShellGesturesClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoShellGesturesClientPrincipal *);
};

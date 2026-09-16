#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoDragManagerClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDragManagerClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoDragManagerClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoDragManagerClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnCallProlog(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoDragManagerClientPrincipalOwner@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoDragManagerClientPrincipal *);
};

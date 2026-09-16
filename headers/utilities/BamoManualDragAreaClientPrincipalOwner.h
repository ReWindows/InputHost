#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoManualDragAreaClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoManualDragAreaClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoManualDragAreaClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoManualDragAreaClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoManualDragAreaClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoManualDragAreaClientPrincipal *, BamoManualDragAreaClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoManualDragAreaClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoManualDragAreaClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@@Z
    virtual long OnCallProlog(BamoManualDragAreaClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoManualDragAreaClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoManualDragAreaClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoManualDragAreaClientPrincipal *, BamoManualDragAreaClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@PEAVBamoManualDragAreaClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoManualDragAreaClientPrincipal *, BamoManualDragAreaClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoManualDragAreaClientPrincipalOwner@@UEAAJPEAVBamoManualDragAreaClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoManualDragAreaClientPrincipal *);
};

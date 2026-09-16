#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoEdgyNotificationSourceClientPrincipalOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyNotificationSourceClientStub@@@Z
    virtual long AllocateStubUnderLock(BamoEdgyNotificationSourceClientPrincipal *, ::ISMBamos_AutoBamos::BamoPeer *, BamoEdgyNotificationSourceClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@PEAVBamoEdgyNotificationSourceClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoEdgyNotificationSourceClientPrincipal *, BamoEdgyNotificationSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoEdgyNotificationSourceClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@@Z
    virtual long OnCallEpilogUnderLock(BamoEdgyNotificationSourceClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@@Z
    virtual long OnCallProlog(BamoEdgyNotificationSourceClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@@Z
    virtual long OnCallPrologUnderLock(BamoEdgyNotificationSourceClientPrincipal *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@PEAVBamoEdgyNotificationSourceClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoEdgyNotificationSourceClientPrincipal *, BamoEdgyNotificationSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@PEAVBamoEdgyNotificationSourceClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoEdgyNotificationSourceClientPrincipal *, BamoEdgyNotificationSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@PEAVBamoEdgyNotificationSourceClientStub@@@Z
    virtual long OnStubDisconnected(BamoEdgyNotificationSourceClientPrincipal *, BamoEdgyNotificationSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWeakReferenceReleased@BamoEdgyNotificationSourceClientPrincipalOwner@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@@Z
    virtual long OnWeakReferenceReleased(BamoEdgyNotificationSourceClientPrincipal *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
class BamoMPCInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectPrincipal@@UEAA_NXZ
    virtual bool GetCalledGetDetectedSourcesAtTimestampRecently();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventSubscriptions@BamoMPCInputObjectPrincipal@@UEAAIXZ
    virtual unsigned int GetEventSubscriptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoMPCInputObjectPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectPrincipal@@UEAAX_N@Z
    virtual void SetCalledGetDetectedSourcesAtTimestampRecently(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventSubscriptions@BamoMPCInputObjectPrincipal@@UEAAXI@Z
    virtual void SetEventSubscriptions(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoMPCInputObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoMPCInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoMPCInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoMPCInputObjectPrincipal@@MEAAJPEAVBamoMPCInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoMPCInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoMPCInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoMPCInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoMPCInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoMPCInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoMPCInputObjectPrincipal@@MEAAJPEAVBamoMPCInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoMPCInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoMPCInputObjectPrincipal@@MEAAJPEAVBamoMPCInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoMPCInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoMPCInputObjectPrincipal@@MEAAJPEAVBamoMPCInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoMPCInputObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

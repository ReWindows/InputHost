#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoInputObserverClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputObserverClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputObserverClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputObserverClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoInputObserverClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoInputObserverClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoInputObserverClientPrincipal@@MEAAJPEAVBamoInputObserverClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoInputObserverClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputObserverClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoInputObserverClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputObserverClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoInputObserverClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoInputObserverClientPrincipal@@MEAAJPEAVBamoInputObserverClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoInputObserverClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoInputObserverClientPrincipal@@MEAAJPEAVBamoInputObserverClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoInputObserverClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoInputObserverClientPrincipal@@MEAAJPEAVBamoInputObserverClientStub@@@Z
    virtual long OnStubDisconnected(BamoInputObserverClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoInputObserverClientPrincipal@@MEAA@XZ
    virtual ~BamoInputObserverClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputObserverClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

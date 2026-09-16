#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoDeviceDockClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDeviceDockClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoDeviceDockClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDeviceDockClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDeviceDockClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoDeviceDockClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDeviceDockClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoDeviceDockClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoDeviceDockClientPrincipal@@MEAAJPEAVBamoDeviceDockClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoDeviceDockClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDeviceDockClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoDeviceDockClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDeviceDockClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoDeviceDockClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoDeviceDockClientPrincipal@@MEAAJPEAVBamoDeviceDockClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoDeviceDockClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoDeviceDockClientPrincipal@@MEAAJPEAVBamoDeviceDockClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoDeviceDockClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoDeviceDockClientPrincipal@@MEAAJPEAVBamoDeviceDockClientStub@@@Z
    virtual long OnStubDisconnected(BamoDeviceDockClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDeviceDockClientPrincipal@@MEAA@XZ
    virtual ~BamoDeviceDockClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDeviceDockClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

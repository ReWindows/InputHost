#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class BamoMPCManagerClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCManagerClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCManagerClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCManagerClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoMPCManagerClientPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoMPCManagerClientStub@@@Z
    virtual long AllocateStubUnderLock(::MPCManagerBamo_AutoBamos::BamoPeer *, BamoMPCManagerClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoMPCManagerClientPrincipal@@MEAAJPEAVBamoMPCManagerClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoMPCManagerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoMPCManagerClientPrincipal@@MEAAJPEAVBamoMPCManagerClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoMPCManagerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoMPCManagerClientPrincipal@@MEAAJPEAVBamoMPCManagerClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoMPCManagerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoMPCManagerClientPrincipal@@MEAAJPEAVBamoMPCManagerClientStub@@@Z
    virtual long OnStubDisconnected(BamoMPCManagerClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCManagerClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

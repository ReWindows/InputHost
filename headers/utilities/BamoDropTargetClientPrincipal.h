#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoDropTargetClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDropTargetClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoDropTargetClientPrincipal@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoDropTargetClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDropTargetClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDropTargetClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoDropTargetClientPrincipal@@UEAAX_K@Z
    virtual void SetId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoDropTargetClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoDropTargetClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDropTargetClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoDropTargetClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoDropTargetClientPrincipal@@MEAAJPEAVBamoDropTargetClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoDropTargetClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDropTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoDropTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDropTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoDropTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoDropTargetClientPrincipal@@MEAAJPEAVBamoDropTargetClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoDropTargetClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoDropTargetClientPrincipal@@MEAAJPEAVBamoDropTargetClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoDropTargetClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoDropTargetClientPrincipal@@MEAAJPEAVBamoDropTargetClientStub@@@Z
    virtual long OnStubDisconnected(BamoDropTargetClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDropTargetClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

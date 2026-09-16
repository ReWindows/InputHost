#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoInputForwardAreaInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputForwardAreaInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoInputForwardAreaInputObjectPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputForwardAreaInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputForwardAreaInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoInputForwardAreaInputObjectPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoInputForwardAreaInputObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputForwardAreaInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoInputForwardAreaInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoInputForwardAreaInputObjectPrincipal@@MEAAJPEAVBamoInputForwardAreaInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoInputForwardAreaInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputForwardAreaInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoInputForwardAreaInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputForwardAreaInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoInputForwardAreaInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoInputForwardAreaInputObjectPrincipal@@MEAAJPEAVBamoInputForwardAreaInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoInputForwardAreaInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoInputForwardAreaInputObjectPrincipal@@MEAAJPEAVBamoInputForwardAreaInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoInputForwardAreaInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoInputForwardAreaInputObjectPrincipal@@MEAAJPEAVBamoInputForwardAreaInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoInputForwardAreaInputObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputForwardAreaInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

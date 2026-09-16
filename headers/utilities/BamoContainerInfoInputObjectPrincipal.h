#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoContainerInfoInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoContainerInfoInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerGuid@BamoContainerInfoInputObjectPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetContainerGuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerId@BamoContainerInfoInputObjectPrincipal@@UEAAAEBUCONTAINER_ID@@XZ
    virtual CONTAINER_ID const & GetContainerId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoContainerInfoInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoContainerInfoInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerGuid@BamoContainerInfoInputObjectPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetContainerGuid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContainerId@BamoContainerInfoInputObjectPrincipal@@UEAAXAEBUCONTAINER_ID@@@Z
    virtual void SetContainerId(CONTAINER_ID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoContainerInfoInputObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoContainerInfoInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoContainerInfoInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoContainerInfoInputObjectPrincipal@@MEAAJPEAVBamoContainerInfoInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoContainerInfoInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoContainerInfoInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoContainerInfoInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoContainerInfoInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoContainerInfoInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoContainerInfoInputObjectPrincipal@@MEAAJPEAVBamoContainerInfoInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoContainerInfoInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoContainerInfoInputObjectPrincipal@@MEAAJPEAVBamoContainerInfoInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoContainerInfoInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoContainerInfoInputObjectPrincipal@@MEAAJPEAVBamoContainerInfoInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoContainerInfoInputObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoContainerInfoInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

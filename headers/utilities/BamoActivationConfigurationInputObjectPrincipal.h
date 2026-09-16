#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoActivationConfigurationInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationConfigurationInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivatePolicy@BamoActivationConfigurationInputObjectPrincipal@@UEAAIXZ
    virtual unsigned int GetActivatePolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEatPolicy@BamoActivationConfigurationInputObjectPrincipal@@UEAAIXZ
    virtual unsigned int GetEatPolicy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationConfigurationInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationConfigurationInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivatePolicy@BamoActivationConfigurationInputObjectPrincipal@@UEAAXI@Z
    virtual void SetActivatePolicy(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEatPolicy@BamoActivationConfigurationInputObjectPrincipal@@UEAAXI@Z
    virtual void SetEatPolicy(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoActivationConfigurationInputObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoActivationConfigurationInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoActivationConfigurationInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoActivationConfigurationInputObjectPrincipal@@MEAAJPEAVBamoActivationConfigurationInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoActivationConfigurationInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivationConfigurationInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoActivationConfigurationInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivationConfigurationInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoActivationConfigurationInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoActivationConfigurationInputObjectPrincipal@@MEAAJPEAVBamoActivationConfigurationInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoActivationConfigurationInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoActivationConfigurationInputObjectPrincipal@@MEAAJPEAVBamoActivationConfigurationInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoActivationConfigurationInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoActivationConfigurationInputObjectPrincipal@@MEAAJPEAVBamoActivationConfigurationInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoActivationConfigurationInputObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationConfigurationInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

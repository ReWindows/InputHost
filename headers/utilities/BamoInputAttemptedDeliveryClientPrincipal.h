#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class BamoInputAttemptedDeliveryClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputAttemptedDeliveryClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@BamoInputAttemptedDeliveryClientPrincipal@@UEAAIXZ
    virtual unsigned int GetViewInstanceId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputAttemptedDeliveryClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputAttemptedDeliveryClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewInstanceId@BamoInputAttemptedDeliveryClientPrincipal@@UEAAXI@Z
    virtual void SetViewInstanceId(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoInputAttemptedDeliveryClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoInputAttemptedDeliveryClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoInputAttemptedDeliveryClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoInputAttemptedDeliveryClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoInputAttemptedDeliveryClientPrincipal@@MEAAJPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long OnStubDisconnected(BamoInputAttemptedDeliveryClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoInputAttemptedDeliveryClientPrincipal@@MEAA@XZ
    virtual ~BamoInputAttemptedDeliveryClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputAttemptedDeliveryClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

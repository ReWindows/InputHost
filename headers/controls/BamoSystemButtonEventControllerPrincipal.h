#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoSystemButtonEventControllerPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemButtonEventControllerPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnContinueProcessing@BamoSystemButtonEventControllerPrincipal@@UEAAJAEBUSystemButtonEventInfo@@@Z
    virtual long BroadcastOnContinueProcessing(SystemButtonEventInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoSystemButtonEventControllerPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemButtonEventControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemButtonEventControllerPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoSystemButtonEventControllerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemButtonEventControllerStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoSystemButtonEventControllerStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoSystemButtonEventControllerPrincipal@@MEAAJPEAVBamoSystemButtonEventControllerStub@@@Z
    virtual long InitializeProxyUnderLock(BamoSystemButtonEventControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoSystemButtonEventControllerPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoSystemButtonEventControllerPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoSystemButtonEventControllerPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoSystemButtonEventControllerPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoSystemButtonEventControllerPrincipal@@MEAAJPEAVBamoSystemButtonEventControllerStub@@@Z
    virtual long OnPropertiesRefreshed(BamoSystemButtonEventControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoSystemButtonEventControllerPrincipal@@MEAAJPEAVBamoSystemButtonEventControllerStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoSystemButtonEventControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoSystemButtonEventControllerPrincipal@@MEAAJPEAVBamoSystemButtonEventControllerStub@@@Z
    virtual long OnStubDisconnected(BamoSystemButtonEventControllerStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemButtonEventControllerPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

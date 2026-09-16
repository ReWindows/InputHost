#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class BamoActivationListenerInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationListenerInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@BamoActivationListenerInputObjectPrincipal@@UEAA_KXZ
    virtual uint64_t GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoActivationListenerInputObjectPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationListenerInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationListenerInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHWND@BamoActivationListenerInputObjectPrincipal@@UEAAX_K@Z
    virtual void SetHWND(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoActivationListenerInputObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoActivationListenerInputObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoActivationListenerInputObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoActivationListenerInputObjectPrincipal@@MEAAJPEAVBamoActivationListenerInputObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoActivationListenerInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivationListenerInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoActivationListenerInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivationListenerInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoActivationListenerInputObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoActivationListenerInputObjectPrincipal@@MEAAJPEAVBamoActivationListenerInputObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoActivationListenerInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoActivationListenerInputObjectPrincipal@@MEAAJPEAVBamoActivationListenerInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoActivationListenerInputObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoActivationListenerInputObjectPrincipal@@MEAAJPEAVBamoActivationListenerInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoActivationListenerInputObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationListenerInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

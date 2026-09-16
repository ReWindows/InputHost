#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 30 member(s).
class BamoActivationControllerPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationControllerPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestActivation@BamoActivationControllerPrincipal@@UEAAJXZ
    virtual long BroadcastRequestActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoForwardId@BamoActivationControllerPrincipal@@UEAA_KXZ
    virtual uint64_t GetAutoForwardId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoActivationControllerPrincipal@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoActivationControllerPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLuid@BamoActivationControllerPrincipal@@UEAAAEBU_LUID@@XZ
    virtual _LUID const & GetLuid();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationControllerPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoForwardId@BamoActivationControllerPrincipal@@UEAAX_K@Z
    virtual void SetAutoForwardId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoActivationControllerPrincipal@@UEAAX_K@Z
    virtual void SetId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLuid@BamoActivationControllerPrincipal@@UEAAXAEBU_LUID@@@Z
    virtual void SetLuid(_LUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoActivationControllerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoActivationControllerStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoActivationControllerStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoActivationControllerPrincipal@@MEAAJPEAVBamoActivationControllerStub@@@Z
    virtual long InitializeProxyUnderLock(BamoActivationControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatedChanged@BamoActivationControllerPrincipal@@MEAAJPEAVBamoActivationControllerStub@@@Z
    virtual long OnActivatedChanged(BamoActivationControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatedChanging@BamoActivationControllerPrincipal@@MEAAJPEAVBamoActivationControllerStub@@_N@Z
    virtual long OnActivatedChanging(BamoActivationControllerStub *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivationControllerPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoActivationControllerPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivationControllerPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoActivationControllerPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoActivationControllerPrincipal@@MEAAJPEAVBamoActivationControllerStub@@@Z
    virtual long OnPropertiesRefreshed(BamoActivationControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoActivationControllerPrincipal@@MEAAJPEAVBamoActivationControllerStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoActivationControllerStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoActivationControllerPrincipal@@MEAAJPEAVBamoActivationControllerStub@@@Z
    virtual long OnStubDisconnected(BamoActivationControllerStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationControllerPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatedChanged@BamoActivationControllerPrincipal@@AEAAXPEAVBamoActivationControllerStub@@@Z
    void LogOnActivatedChanged(BamoActivationControllerStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatedChanging@BamoActivationControllerPrincipal@@AEAAXPEAVBamoActivationControllerStub@@_N@Z
    void LogOnActivatedChanging(BamoActivationControllerStub *, bool);
};

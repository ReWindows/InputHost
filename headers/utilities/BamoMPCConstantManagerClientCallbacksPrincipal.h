#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class BamoMPCConstantManagerClientCallbacksPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCConstantManagerClientCallbacksPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCConstantManagerClientCallbacksPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCConstantManagerClientCallbacksPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoMPCConstantManagerClientCallbacksPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoMPCConstantManagerClientCallbacksStub@@@Z
    virtual long AllocateStubUnderLock(::MPCManagerBamo_AutoBamos::BamoPeer *, BamoMPCConstantManagerClientCallbacksStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoMPCConstantManagerClientCallbacksPrincipal@@MEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@@Z
    virtual long InitializeProxyUnderLock(BamoMPCConstantManagerClientCallbacksStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoMPCConstantManagerClientCallbacksPrincipal@@MEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@@Z
    virtual long OnPropertiesRefreshed(BamoMPCConstantManagerClientCallbacksStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoMPCConstantManagerClientCallbacksPrincipal@@MEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoMPCConstantManagerClientCallbacksStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoMPCConstantManagerClientCallbacksPrincipal@@MEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@@Z
    virtual long OnStubDisconnected(BamoMPCConstantManagerClientCallbacksStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCConstantManagerClientCallbacksPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

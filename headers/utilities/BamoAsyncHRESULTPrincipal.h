#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class BamoAsyncHRESULTPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAsyncHRESULTPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAsyncHRESULTPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAsyncHRESULTPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoAsyncHRESULTPrincipal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoAsyncHRESULTStub@@@Z
    virtual long AllocateStubUnderLock(::MPCManagerBamo_AutoBamos::BamoPeer *, BamoAsyncHRESULTStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoAsyncHRESULTPrincipal@@MEAAJPEAVBamoAsyncHRESULTStub@@@Z
    virtual long InitializeProxyUnderLock(BamoAsyncHRESULTStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoAsyncHRESULTPrincipal@@MEAAJPEAVBamoAsyncHRESULTStub@@@Z
    virtual long OnPropertiesRefreshed(BamoAsyncHRESULTStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoAsyncHRESULTPrincipal@@MEAAJPEAVBamoAsyncHRESULTStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoAsyncHRESULTStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoAsyncHRESULTPrincipal@@MEAAJPEAVBamoAsyncHRESULTStub@@@Z
    virtual long OnStubDisconnected(BamoAsyncHRESULTStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAsyncHRESULTPrincipal@@MEAA@XZ
    virtual ~BamoAsyncHRESULTPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAsyncHRESULTPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class BamoAsyncResult_string_Principal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAsyncResult_string_Principal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAsyncResult_string_Principal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAsyncResult_string_Principal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoAsyncResult_string_Principal@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEAPEAVBamoAsyncResult_string_Stub@@@Z
    virtual long AllocateStubUnderLock(::MPCManagerBamo_AutoBamos::BamoPeer *, BamoAsyncResult_string_Stub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoAsyncResult_string_Principal@@MEAAJPEAVBamoAsyncResult_string_Stub@@@Z
    virtual long InitializeProxyUnderLock(BamoAsyncResult_string_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoAsyncResult_string_Principal@@MEAAJPEAVBamoAsyncResult_string_Stub@@@Z
    virtual long OnPropertiesRefreshed(BamoAsyncResult_string_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoAsyncResult_string_Principal@@MEAAJPEAVBamoAsyncResult_string_Stub@@@Z
    virtual long OnStubConnectedUnderLock(BamoAsyncResult_string_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoAsyncResult_string_Principal@@MEAAJPEAVBamoAsyncResult_string_Stub@@@Z
    virtual long OnStubDisconnected(BamoAsyncResult_string_Stub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAsyncResult_string_Principal@@MEAA@XZ
    virtual ~BamoAsyncResult_string_Principal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAsyncResult_string_Principal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

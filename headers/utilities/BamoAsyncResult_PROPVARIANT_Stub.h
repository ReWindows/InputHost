#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class BamoAsyncResult_PROPVARIANT_Stub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAsyncResult_PROPVARIANT_Stub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAsyncResult_PROPVARIANT_Stub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAsyncResult_PROPVARIANT_Stub@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAsyncResult_PROPVARIANT_Stub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

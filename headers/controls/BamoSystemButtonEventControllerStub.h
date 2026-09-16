#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoSystemButtonEventControllerStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemButtonEventControllerStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContinueProcessing@BamoSystemButtonEventControllerStub@@UEAAJAEBUSystemButtonEventInfo@@@Z
    virtual long OnContinueProcessing(SystemButtonEventInfo const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemButtonEventControllerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemButtonEventControllerStub@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemButtonEventControllerStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

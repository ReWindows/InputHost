#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoMagnifierControllerStub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcknowledgeGestureReceived@BamoMagnifierControllerStub@@UEAAJXZ
    virtual long AcknowledgeGestureReceived();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMagnifierControllerStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMagnifierControllerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMagnifierControllerStub@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMagnifierControllerStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

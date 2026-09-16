#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class BamoActivationControllerStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationControllerStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivated@BamoActivationControllerStub@@UEAA_NXZ
    virtual bool GetActivated();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationControllerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationControllerStub@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivation@BamoActivationControllerStub@@UEAAJXZ
    virtual long RequestActivation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationControllerStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoInputInjectionClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputInjectionClientStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectTouchInput@BamoInputInjectionClientStub@@UEAAJPEAVBamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long InjectTouchInput(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Principal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputInjectionClientStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputInjectionClientStub@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputInjectionClientStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class BamoManualResizeAreaClientStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoManualResizeAreaClientStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoManualResizeAreaClientStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoManualResizeAreaClientStub@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartManualResize@BamoManualResizeAreaClientStub@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual long StartManualResize(unsigned int, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoManualResizeAreaClientStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

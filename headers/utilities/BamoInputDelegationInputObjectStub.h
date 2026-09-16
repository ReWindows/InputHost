#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class BamoInputDelegationInputObjectStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputDelegationInputObjectStub@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputDelegationInputObjectStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputDelegationInputObjectStub@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessIDDelegation@BamoInputDelegationInputObjectStub@@UEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    virtual long SetProcessIDDelegation(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewIDDelegation@BamoInputDelegationInputObjectStub@@UEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    virtual long SetViewIDDelegation(unsigned int, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputDelegationInputObjectStub@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoInputDelegationInputObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputDelegationInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSetProcessIDDelegation@BamoInputDelegationInputObjectPrincipal@@UEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    virtual long BroadcastSetProcessIDDelegation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSetViewIDDelegation@BamoInputDelegationInputObjectPrincipal@@UEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    virtual long BroadcastSetViewIDDelegation(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGamepadInterceptionEnabled@BamoInputDelegationInputObjectPrincipal@@UEAA_NXZ
    virtual bool GetGamepadInterceptionEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectPrincipal@@UEAA_NXZ
    virtual bool GetGamepadKeyRoutingEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGamepadMouseModeEnabled@BamoInputDelegationInputObjectPrincipal@@UEAA_NXZ
    virtual bool GetGamepadMouseModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoInputDelegationInputObjectPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputDelegationInputObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputDelegationInputObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGamepadInterceptionEnabled@BamoInputDelegationInputObjectPrincipal@@UEAAX_N@Z
    virtual void SetGamepadInterceptionEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectPrincipal@@UEAAX_N@Z
    virtual void SetGamepadKeyRoutingEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGamepadMouseModeEnabled@BamoInputDelegationInputObjectPrincipal@@UEAAX_N@Z
    virtual void SetGamepadMouseModeEnabled(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoInputDelegationInputObjectPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoInputDelegationInputObjectPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputDelegationInputObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

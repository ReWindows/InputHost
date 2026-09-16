#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoMagnifierControllerPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMagnifierControllerPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAcknowledgeGestureReceived@BamoMagnifierControllerPrincipal@@UEAAJXZ
    virtual long BroadcastAcknowledgeGestureReceived();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGesturesEnabled@BamoMagnifierControllerPrincipal@@UEAA_NXZ
    virtual bool GetGesturesEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoMagnifierControllerPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToggleEnabled@BamoMagnifierControllerPrincipal@@UEAA_NXZ
    virtual bool GetToggleEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseInputSiteCoordinateSpace@BamoMagnifierControllerPrincipal@@UEAA_NXZ
    virtual bool GetUseInputSiteCoordinateSpace();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMagnifierControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMagnifierControllerPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGesturesEnabled@BamoMagnifierControllerPrincipal@@UEAAX_N@Z
    virtual void SetGesturesEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToggleEnabled@BamoMagnifierControllerPrincipal@@UEAAX_N@Z
    virtual void SetToggleEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseInputSiteCoordinateSpace@BamoMagnifierControllerPrincipal@@UEAAX_N@Z
    virtual void SetUseInputSiteCoordinateSpace(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoMagnifierControllerPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoMagnifierControllerPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMagnifierControllerPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

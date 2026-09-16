#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class BamoInputInjectionClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputInjectionClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastInjectTouchInput@BamoInputInjectionClientPrincipal@@UEAAJPEAVBamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long BroadcastInjectTouchInput(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoInputInjectionClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkspaceId@BamoInputInjectionClientPrincipal@@UEAA_KXZ
    virtual uint64_t GetWorkspaceId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputInjectionClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputInjectionClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkspaceId@BamoInputInjectionClientPrincipal@@UEAAX_K@Z
    virtual void SetWorkspaceId(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoInputInjectionClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoInputInjectionClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputInjectionClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

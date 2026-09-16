#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
class BamoVirtualTouchpadControllerPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoVirtualTouchpadControllerPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoVirtualTouchpadControllerPrincipal@@QEAA@PEAVBamoVirtualTouchpadControllerPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoVirtualTouchpadControllerPrincipal(BamoVirtualTouchpadControllerPrincipalOwner *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsActive@BamoVirtualTouchpadControllerPrincipal@@UEAA_NXZ
    virtual bool GetIsActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoVirtualTouchpadControllerPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryClickZone@BamoVirtualTouchpadControllerPrincipal@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ
    virtual ::Windows::UI::Internal::Input::PhysicalClickZone const & GetPrimaryClickZone();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryClickZone@BamoVirtualTouchpadControllerPrincipal@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ
    virtual ::Windows::UI::Internal::Input::PhysicalClickZone const & GetSecondaryClickZone();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@BamoVirtualTouchpadControllerPrincipal@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ
    virtual ::Windows::UI::Internal::Input::VirtualTouchpadSize const & GetSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeValid@BamoVirtualTouchpadControllerPrincipal@@UEAA_NXZ
    virtual bool GetSizeValid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypingDefensesEnabled@BamoVirtualTouchpadControllerPrincipal@@UEAA_NXZ
    virtual bool GetTypingDefensesEnabled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoVirtualTouchpadControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoVirtualTouchpadControllerPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsActive@BamoVirtualTouchpadControllerPrincipal@@UEAAX_N@Z
    virtual void SetIsActive(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryClickZone@BamoVirtualTouchpadControllerPrincipal@@UEAAXAEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    virtual void SetPrimaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryClickZone@BamoVirtualTouchpadControllerPrincipal@@UEAAXAEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    virtual void SetSecondaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@BamoVirtualTouchpadControllerPrincipal@@UEAAXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    virtual void SetSize(::Windows::UI::Internal::Input::VirtualTouchpadSize const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeValid@BamoVirtualTouchpadControllerPrincipal@@UEAAX_N@Z
    virtual void SetSizeValid(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTypingDefensesEnabled@BamoVirtualTouchpadControllerPrincipal@@UEAAX_N@Z
    virtual void SetTypingDefensesEnabled(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoVirtualTouchpadControllerPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoVirtualTouchpadControllerPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoVirtualTouchpadControllerPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class BamoResizeControllerClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoResizeControllerClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestConfiguration@BamoResizeControllerClientPrincipal@@UEAA?AW4HitTestConfiguration@Input@Internal@UI@Windows@@XZ
    virtual int GetHitTestConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoResizeControllerClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoResizeControllerClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoResizeControllerClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoResizeControllerClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHitTestConfiguration@BamoResizeControllerClientPrincipal@@UEAAXW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual void SetHitTestConfiguration(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoResizeControllerClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoResizeControllerClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoResizeControllerClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoResizeControllerClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

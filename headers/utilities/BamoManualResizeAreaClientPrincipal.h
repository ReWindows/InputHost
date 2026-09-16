#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class BamoManualResizeAreaClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoManualResizeAreaClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastStartManualResize@BamoManualResizeAreaClientPrincipal@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual long BroadcastStartManualResize(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoManualResizeAreaClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoManualResizeAreaClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoManualResizeAreaClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoManualResizeAreaClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoManualResizeAreaClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoManualResizeAreaClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoManualResizeAreaClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoManualResizeAreaClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

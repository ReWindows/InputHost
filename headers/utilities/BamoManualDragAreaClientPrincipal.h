#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
class BamoManualDragAreaClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoManualDragAreaClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastStartManualDrag@BamoManualDragAreaClientPrincipal@@UEAAJI@Z
    virtual long BroadcastStartManualDrag(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeliveryMode@BamoManualDragAreaClientPrincipal@@UEAA?AW4InputDeliveryMode@Input@Internal@UI@Windows@@XZ
    virtual int GetDeliveryMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoManualDragAreaClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoManualDragAreaClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoManualDragAreaClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoManualDragAreaClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeliveryMode@BamoManualDragAreaClientPrincipal@@UEAAXW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z
    virtual void SetDeliveryMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoManualDragAreaClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoManualDragAreaClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoManualDragAreaClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoManualDragAreaClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

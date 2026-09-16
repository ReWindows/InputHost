#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class BamoEdgyNotificationSourceClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyNotificationSourceClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientPrincipal@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationPrincipal@@XZ
    virtual BamoEdgyGestureRecognitionConfigurationPrincipal * GetGestureRecognitionConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoEdgyNotificationSourceClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoutingMode@BamoEdgyNotificationSourceClientPrincipal@@UEAA?AW4EdgyRoutingMode@Input@Internal@UI@Windows@@XZ
    virtual int GetRoutingMode();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyNotificationSourceClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyNotificationSourceClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientPrincipal@@UEAAXPEAVBamoEdgyGestureRecognitionConfigurationPrincipal@@@Z
    virtual void SetGestureRecognitionConfiguration(BamoEdgyGestureRecognitionConfigurationPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoutingMode@BamoEdgyNotificationSourceClientPrincipal@@UEAAXW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    virtual void SetRoutingMode(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoEdgyNotificationSourceClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoEdgyNotificationSourceClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyNotificationSourceClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};

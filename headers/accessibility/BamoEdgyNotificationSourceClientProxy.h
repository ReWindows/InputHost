#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
class BamoEdgyNotificationSourceClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyNotificationSourceClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgyRecognized@BamoEdgyNotificationSourceClientProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z
    virtual long EdgyRecognized(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ
    virtual BamoEdgyGestureRecognitionConfigurationProxy * GetGestureRecognitionConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoutingMode@BamoEdgyNotificationSourceClientProxy@@UEAA?AW4EdgyRoutingMode@Input@Internal@UI@Windows@@XZ
    virtual int GetRoutingMode();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyNotificationSourceClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyNotificationSourceClientProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyNotificationSourceClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyNotificationSourceClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureRecognitionConfigurationChanged@BamoEdgyNotificationSourceClientProxy@@MEAAJXZ
    virtual long OnGestureRecognitionConfigurationChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureRecognitionConfigurationChanging@BamoEdgyNotificationSourceClientProxy@@MEAAJPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z
    virtual long OnGestureRecognitionConfigurationChanging(BamoEdgyGestureRecognitionConfigurationProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRoutingModeChanged@BamoEdgyNotificationSourceClientProxy@@MEAAJXZ
    virtual long OnRoutingModeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRoutingModeChanging@BamoEdgyNotificationSourceClientProxy@@MEAAJW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    virtual long OnRoutingModeChanging(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyNotificationSourceClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureRecognitionConfigurationChanged@BamoEdgyNotificationSourceClientProxy@@AEAAXXZ
    void LogOnGestureRecognitionConfigurationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureRecognitionConfigurationChanging@BamoEdgyNotificationSourceClientProxy@@AEAAXPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z
    void LogOnGestureRecognitionConfigurationChanging(BamoEdgyGestureRecognitionConfigurationProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnRoutingModeChanged@BamoEdgyNotificationSourceClientProxy@@AEAAXXZ
    void LogOnRoutingModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnRoutingModeChanging@BamoEdgyNotificationSourceClientProxy@@AEAAXW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    void LogOnRoutingModeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

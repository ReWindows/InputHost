#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 34 member(s).
class BamoEdgyDragSourceClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyDragSourceClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlPoints@BamoEdgyDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z
    virtual void GetControlPoints(tagPOINT const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxy@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@XZ
    virtual BamoEdgyGestureRecognitionConfigurationProxy * GetGestureRecognitionConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoEdgyDragSourceClientProxy@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoEdgyDragSourceClientProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyDragSourceClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyDragSourceClientProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyDragSourceClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyDragSourceClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnControlPointsChanged@BamoEdgyDragSourceClientProxy@@MEAAJXZ
    virtual long OnControlPointsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnControlPointsChanging@BamoEdgyDragSourceClientProxy@@MEAAJPEBUtagPOINT@@I@Z
    virtual long OnControlPointsChanging(tagPOINT const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureRecognitionConfigurationChanged@BamoEdgyDragSourceClientProxy@@MEAAJXZ
    virtual long OnGestureRecognitionConfigurationChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureRecognitionConfigurationChanging@BamoEdgyDragSourceClientProxy@@MEAAJPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z
    virtual long OnGestureRecognitionConfigurationChanging(BamoEdgyGestureRecognitionConfigurationProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnIdChanged@BamoEdgyDragSourceClientProxy@@MEAAJXZ
    virtual long OnIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnIdChanging@BamoEdgyDragSourceClientProxy@@MEAAJ_K@Z
    virtual long OnIdChanging(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoEdgyDragSourceClientProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoEdgyDragSourceClientProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyDragSourceClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnControlPointsChanged@BamoEdgyDragSourceClientProxy@@AEAAXXZ
    void LogOnControlPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnControlPointsChanging@BamoEdgyDragSourceClientProxy@@AEAAXI@Z
    void LogOnControlPointsChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureRecognitionConfigurationChanged@BamoEdgyDragSourceClientProxy@@AEAAXXZ
    void LogOnGestureRecognitionConfigurationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureRecognitionConfigurationChanging@BamoEdgyDragSourceClientProxy@@AEAAXPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z
    void LogOnGestureRecognitionConfigurationChanging(BamoEdgyGestureRecognitionConfigurationProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIdChanged@BamoEdgyDragSourceClientProxy@@AEAAXXZ
    void LogOnIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIdChanging@BamoEdgyDragSourceClientProxy@@AEAAX_K@Z
    void LogOnIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoEdgyDragSourceClientProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoEdgyDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

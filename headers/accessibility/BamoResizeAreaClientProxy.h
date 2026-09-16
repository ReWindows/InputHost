#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class BamoResizeAreaClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoResizeAreaClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegion@BamoResizeAreaClientProxy@@UEAA?AW4InputResizeRegion@Input@Internal@UI@Windows@@XZ
    virtual int GetRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoResizeAreaClientProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoResizeAreaClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoResizeAreaClientProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoResizeAreaClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoResizeAreaClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRegionChanged@BamoResizeAreaClientProxy@@MEAAJXZ
    virtual long OnRegionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRegionChanging@BamoResizeAreaClientProxy@@MEAAJW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual long OnRegionChanging(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoResizeAreaClientProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoResizeAreaClientProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoResizeAreaClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnRegionChanged@BamoResizeAreaClientProxy@@AEAAXXZ
    void LogOnRegionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnRegionChanging@BamoResizeAreaClientProxy@@AEAAXW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    void LogOnRegionChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoResizeAreaClientProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoResizeAreaClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

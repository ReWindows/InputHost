#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class BamoPenDeviceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPenDeviceProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHaptics@BamoPenDeviceProxy@@UEAAPEAVBamoSimpleHapticsControllerProxy@@XZ
    virtual BamoSimpleHapticsControllerProxy * GetHaptics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@BamoPenDeviceProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetUniqueId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPenDeviceProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPenDeviceProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoPenDeviceProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoPenDeviceProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHapticsChanged@BamoPenDeviceProxy@@MEAAJXZ
    virtual long OnHapticsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHapticsChanging@BamoPenDeviceProxy@@MEAAJPEAVBamoSimpleHapticsControllerProxy@@@Z
    virtual long OnHapticsChanging(BamoSimpleHapticsControllerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUniqueIdChanged@BamoPenDeviceProxy@@MEAAJXZ
    virtual long OnUniqueIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnUniqueIdChanging@BamoPenDeviceProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnUniqueIdChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPenDeviceProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHapticsChanged@BamoPenDeviceProxy@@AEAAXXZ
    void LogOnHapticsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHapticsChanging@BamoPenDeviceProxy@@AEAAXPEAVBamoSimpleHapticsControllerProxy@@@Z
    void LogOnHapticsChanging(BamoSimpleHapticsControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnUniqueIdChanged@BamoPenDeviceProxy@@AEAAXXZ
    void LogOnUniqueIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnUniqueIdChanging@BamoPenDeviceProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnUniqueIdChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoPenDeviceProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoPenDeviceProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoPenDeviceProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

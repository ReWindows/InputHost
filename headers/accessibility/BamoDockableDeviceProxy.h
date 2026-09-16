#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 39 member(s).
class BamoDockableDeviceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDockableDeviceProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceId@BamoDockableDeviceProxy@@UEAAAEBUDockableDeviceIdentity@@XZ
    virtual DockableDeviceIdentity const & GetDeviceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceType@BamoDockableDeviceProxy@@UEAA?AW4DockableDeviceObjectType@@XZ
    virtual int GetDeviceType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfacePath@BamoDockableDeviceProxy@@UEAAPEBGXZ
    virtual unsigned short const * GetInterfacePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryUsageId@BamoDockableDeviceProxy@@UEAAGXZ
    virtual unsigned short GetPrimaryUsageId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryUsagePage@BamoDockableDeviceProxy@@UEAAGXZ
    virtual unsigned short GetPrimaryUsagePage();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDockableDeviceProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDockableDeviceProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceIdChanged@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnDeviceIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceIdChanging@BamoDockableDeviceProxy@@MEAAJAEBUDockableDeviceIdentity@@@Z
    virtual long OnDeviceIdChanging(DockableDeviceIdentity const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceTypeChanged@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnDeviceTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceTypeChanging@BamoDockableDeviceProxy@@MEAAJW4DockableDeviceObjectType@@@Z
    virtual long OnDeviceTypeChanging(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInterfacePathChanged@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnInterfacePathChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInterfacePathChanging@BamoDockableDeviceProxy@@MEAAJPEBG@Z
    virtual long OnInterfacePathChanging(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrimaryUsageIdChanged@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnPrimaryUsageIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrimaryUsageIdChanging@BamoDockableDeviceProxy@@MEAAJG@Z
    virtual long OnPrimaryUsageIdChanging(unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrimaryUsagePageChanged@BamoDockableDeviceProxy@@MEAAJXZ
    virtual long OnPrimaryUsagePageChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPrimaryUsagePageChanging@BamoDockableDeviceProxy@@MEAAJG@Z
    virtual long OnPrimaryUsagePageChanging(unsigned short);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDockableDeviceProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceIdChanged@BamoDockableDeviceProxy@@AEAAXXZ
    void LogOnDeviceIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceIdChanging@BamoDockableDeviceProxy@@AEAAXAEBUDockableDeviceIdentity@@@Z
    void LogOnDeviceIdChanging(DockableDeviceIdentity const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceTypeChanged@BamoDockableDeviceProxy@@AEAAXXZ
    void LogOnDeviceTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceTypeChanging@BamoDockableDeviceProxy@@AEAAXW4DockableDeviceObjectType@@@Z
    void LogOnDeviceTypeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInterfacePathChanged@BamoDockableDeviceProxy@@AEAAXXZ
    void LogOnInterfacePathChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInterfacePathChanging@BamoDockableDeviceProxy@@AEAAXPEBG@Z
    void LogOnInterfacePathChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPrimaryUsageIdChanged@BamoDockableDeviceProxy@@AEAAXXZ
    void LogOnPrimaryUsageIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPrimaryUsageIdChanging@BamoDockableDeviceProxy@@AEAAXG@Z
    void LogOnPrimaryUsageIdChanging(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPrimaryUsagePageChanged@BamoDockableDeviceProxy@@AEAAXXZ
    void LogOnPrimaryUsagePageChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPrimaryUsagePageChanging@BamoDockableDeviceProxy@@AEAAXG@Z
    void LogOnPrimaryUsagePageChanging(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDockableDeviceProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class BamoDeviceDockServerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDeviceDockServerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDeviceDockServerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeviceDockClient@BamoDeviceDockServerProxy@@UEAAJPEAVBamoDeviceDockClientPrincipal@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z
    virtual long RegisterDeviceDockClient(BamoDeviceDockClientPrincipal *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDeviceDockServerProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDeviceDockServerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDeviceDockServerProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDeviceDockServerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDeviceDockServerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDeviceDockServerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDeviceDockServerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
class BamoPenEventsDispatcherProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPenEventsDispatcherProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachClient@BamoPenEventsDispatcherProxy@@UEAAJPEAVBamoPenEventsClientPrincipal@@@Z
    virtual long AttachClient(BamoPenEventsClientPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPenEventsDispatcherProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPenEventsDispatcherProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonRoutingPolicy@BamoPenEventsDispatcherProxy@@UEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    virtual long SetButtonRoutingPolicy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDockRoutingPolicy@BamoPenEventsDispatcherProxy@@UEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    virtual long SetDockRoutingPolicy(int);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoPenEventsDispatcherProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoPenEventsDispatcherProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPenEventsDispatcherProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoPenEventsDispatcherProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoPenEventsDispatcherProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoPenEventsDispatcherProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

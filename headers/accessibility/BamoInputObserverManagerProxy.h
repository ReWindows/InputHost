#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 18 member(s).
class BamoInputObserverManagerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputObserverManagerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputObserverManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObserverClientOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    virtual long RegisterObserverClientOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputObserverManagerProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressInputOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    virtual long SuppressInputOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObserverClientOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    virtual long UnregisterObserverClientOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsuppressInputOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    virtual long UnsuppressInputOfType(int, BamoInputObserverClientPrincipal *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputObserverManagerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputObserverManagerProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputObserverManagerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputObserverManagerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputObserverManagerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputObserverManagerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

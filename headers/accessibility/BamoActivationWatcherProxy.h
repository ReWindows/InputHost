#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class BamoActivationWatcherProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationWatcherProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivatableEntityList@BamoActivationWatcherProxy@@UEAAPEAVBamoList_ActivatableEntityPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Proxy * GetActivatableEntityList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivatedEntity@BamoActivationWatcherProxy@@UEAAPEAVBamoActivatableEntityProxy@@XZ
    virtual BamoActivatableEntityProxy * GetActivatedEntity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopLevelActivatedEntity@BamoActivationWatcherProxy@@UEAAPEAVBamoActivatableEntityProxy@@XZ
    virtual BamoActivatableEntityProxy * GetTopLevelActivatedEntity();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationWatcherProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationWatcherProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatableEntityListChanged@BamoActivationWatcherProxy@@MEAAJXZ
    virtual long OnActivatableEntityListChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatableEntityListChanging@BamoActivationWatcherProxy@@MEAAJPEAVBamoList_ActivatableEntityPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnActivatableEntityListChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Proxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatedEntityChanging@BamoActivationWatcherProxy@@MEAAJPEAVBamoActivatableEntityProxy@@@Z
    virtual long OnActivatedEntityChanging(BamoActivatableEntityProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivationWatcherProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivationWatcherProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTopLevelActivatedEntityChanged@BamoActivationWatcherProxy@@MEAAJXZ
    virtual long OnTopLevelActivatedEntityChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTopLevelActivatedEntityChanging@BamoActivationWatcherProxy@@MEAAJPEAVBamoActivatableEntityProxy@@@Z
    virtual long OnTopLevelActivatedEntityChanging(BamoActivatableEntityProxy *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationWatcherProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatableEntityListChanged@BamoActivationWatcherProxy@@AEAAXXZ
    void LogOnActivatableEntityListChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatableEntityListChanging@BamoActivationWatcherProxy@@AEAAXPEAVBamoList_ActivatableEntityPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void LogOnActivatableEntityListChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatedEntityChanged@BamoActivationWatcherProxy@@AEAAXXZ
    void LogOnActivatedEntityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatedEntityChanging@BamoActivationWatcherProxy@@AEAAXPEAVBamoActivatableEntityProxy@@@Z
    void LogOnActivatedEntityChanging(BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTopLevelActivatedEntityChanged@BamoActivationWatcherProxy@@AEAAXXZ
    void LogOnTopLevelActivatedEntityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTopLevelActivatedEntityChanging@BamoActivationWatcherProxy@@AEAAXPEAVBamoActivatableEntityProxy@@@Z
    void LogOnTopLevelActivatedEntityChanging(BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoActivationWatcherProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoActivationWatcherProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoActivationWatcherProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoUIAHitTestInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUIAHitTestInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointId@BamoUIAHitTestInputObjectProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetEndpointId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUIAHitTestInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUIAHitTestInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoUIAHitTestInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoUIAHitTestInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEndpointIdChanged@BamoUIAHitTestInputObjectProxy@@MEAAJXZ
    virtual long OnEndpointIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnEndpointIdChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUIAHitTestInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEndpointIdChanged@BamoUIAHitTestInputObjectProxy@@AEAAXXZ
    void LogOnEndpointIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnEndpointIdChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoUIAHitTestInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoUIAHitTestInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoUIAHitTestInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

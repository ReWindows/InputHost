#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class BamoUIAHitTestProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoUIAHitTestProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoUIAHitTestProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoUIAHitTestProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUIAHitTest@BamoUIAHitTestProxy@@UEAAJII@Z
    virtual long RequestUIAHitTest(unsigned int, unsigned int);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoUIAHitTestProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoUIAHitTestProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoUIAHitTestProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoUIAHitTestProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoUIAHitTestProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoUIAHitTestProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

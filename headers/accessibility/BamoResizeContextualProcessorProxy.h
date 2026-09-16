#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
class BamoResizeContextualProcessorProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoResizeContextualProcessorProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelResize@BamoResizeContextualProcessorProxy@@UEAAJIPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long CancelResize(unsigned int, BamoResizeControllerClientPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoResizeContextualProcessorProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoResizeContextualProcessorProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@BamoResizeContextualProcessorProxy@@UEAAJIPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long StartAnimation(unsigned int, BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartResize@BamoResizeContextualProcessorProxy@@UEAAJIPEAVBamoResizeControllerClientPrincipal@@@Z
    virtual long StartResize(unsigned int, BamoResizeControllerClientPrincipal *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoResizeContextualProcessorProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoResizeContextualProcessorProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoResizeContextualProcessorProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoResizeContextualProcessorProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoResizeContextualProcessorProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoResizeContextualProcessorProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

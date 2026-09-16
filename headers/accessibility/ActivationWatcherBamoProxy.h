#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class ActivationWatcherBamoProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatableEntityAdded@ActivationWatcherBamoProxy@@UEAAJPEAVBamoActivatableEntityProxy@@@Z
    virtual long OnActivatableEntityAdded(BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatableEntityRemoved@ActivationWatcherBamoProxy@@UEAAJPEAVBamoActivatableEntityProxy@@@Z
    virtual long OnActivatableEntityRemoved(BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@ActivationWatcherBamoProxy@@QEAAXPEAUIBamoProxyOwner@@@Z
    void Unregister(IBamoProxyOwner *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationWatcherBamoProxy@@UEAA@XZ
    virtual ~ActivationWatcherBamoProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationRequested@ActivationWatcherBamoProxy@@MEAAJPEAVBamoActivatableEntityProxy@@0@Z
    virtual long ActivationRequested(BamoActivatableEntityProxy *, BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatedEntityChanged@ActivationWatcherBamoProxy@@MEAAJXZ
    virtual long OnActivatedEntityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@ActivationWatcherBamoProxy@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@ActivationWatcherBamoProxy@@MEAAJXZ
    virtual long OnDisconnected();
};

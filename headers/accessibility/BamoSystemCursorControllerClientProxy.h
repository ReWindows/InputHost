#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoSystemCursorControllerClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemCursorControllerClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachIsmCursorVisual@BamoSystemCursorControllerClientProxy@@UEAAJ_K0@Z
    virtual long AttachIsmCursorVisual(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@@Z
    virtual long DeviceAdded(CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@BamoSystemCursorControllerClientProxy@@UEAAJ_K@Z
    virtual long DeviceRemoved(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleOverride@BamoSystemCursorControllerClientProxy@@UEAAMXZ
    virtual float GetScaleOverride();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemCursorControllerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemCursorControllerClientProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoSystemCursorControllerClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoSystemCursorControllerClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnScaleOverrideChanged@BamoSystemCursorControllerClientProxy@@MEAAJXZ
    virtual long OnScaleOverrideChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnScaleOverrideChanging@BamoSystemCursorControllerClientProxy@@MEAAJM@Z
    virtual long OnScaleOverrideChanging(float);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemCursorControllerClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnScaleOverrideChanged@BamoSystemCursorControllerClientProxy@@AEAAXXZ
    void LogOnScaleOverrideChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnScaleOverrideChanging@BamoSystemCursorControllerClientProxy@@AEAAXM@Z
    void LogOnScaleOverrideChanging(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoSystemCursorControllerClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoSystemCursorControllerClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoSystemCursorControllerClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

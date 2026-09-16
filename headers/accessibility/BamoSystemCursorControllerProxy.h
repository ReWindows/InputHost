#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class BamoSystemCursorControllerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSystemCursorControllerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachApplication2@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoCustomCursorControllerClient2Principal@@@Z
    virtual long AttachApplication2(BamoCustomCursorControllerClient2Principal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorForDevice@BamoSystemCursorControllerProxy@@UEAAJ_K@Z
    virtual long CreateCursorForDevice(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorShape@BamoSystemCursorControllerProxy@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z
    virtual long CreateCursorShape(uint64_t, uint64_t, CursorBitmapDataHeader const *, unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCursorShape@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z
    virtual long DestroyCursorShape(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoSystemCursorControllerClientPrincipal@@@Z
    virtual long EnsureServiceAndRegisterClient(BamoSystemCursorControllerClientPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleOverride@BamoSystemCursorControllerProxy@@UEAAMXZ
    virtual float GetScaleOverride();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSystemCursorControllerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSystemCursorControllerProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorShellMagnification@BamoSystemCursorControllerProxy@@UEAAJ_KM@Z
    virtual long SetCursorShellMagnification(uint64_t, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorShellVisibility@BamoSystemCursorControllerProxy@@UEAAJ_K_N@Z
    virtual long SetCursorShellVisibility(uint64_t, bool);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoSystemCursorControllerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoSystemCursorControllerProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnScaleOverrideChanged@BamoSystemCursorControllerProxy@@MEAAJXZ
    virtual long OnScaleOverrideChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnScaleOverrideChanging@BamoSystemCursorControllerProxy@@MEAAJM@Z
    virtual long OnScaleOverrideChanging(float);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSystemCursorControllerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnScaleOverrideChanged@BamoSystemCursorControllerProxy@@AEAAXXZ
    void LogOnScaleOverrideChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnScaleOverrideChanging@BamoSystemCursorControllerProxy@@AEAAXM@Z
    void LogOnScaleOverrideChanging(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class BamoControllerNavigationManagerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoControllerNavigationManagerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabled@BamoControllerNavigationManagerProxy@@UEAA_NXZ
    virtual bool GetEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaused@BamoControllerNavigationManagerProxy@@UEAA_NXZ
    virtual bool GetPaused();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoControllerNavigationManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClient@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationClientPrincipal@@@Z
    virtual long RegisterClient(BamoControllerNavigationClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOverride@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationOverridePrincipal@@@Z
    virtual long RegisterOverride(BamoControllerNavigationOverridePrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoControllerNavigationManagerProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoControllerNavigationManagerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoControllerNavigationManagerProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEnabledChanged@BamoControllerNavigationManagerProxy@@MEAAJXZ
    virtual long OnEnabledChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEnabledChanging@BamoControllerNavigationManagerProxy@@MEAAJ_N@Z
    virtual long OnEnabledChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPausedChanged@BamoControllerNavigationManagerProxy@@MEAAJXZ
    virtual long OnPausedChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPausedChanging@BamoControllerNavigationManagerProxy@@MEAAJ_N@Z
    virtual long OnPausedChanging(bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoControllerNavigationManagerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEnabledChanged@BamoControllerNavigationManagerProxy@@AEAAXXZ
    void LogOnEnabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEnabledChanging@BamoControllerNavigationManagerProxy@@AEAAX_N@Z
    void LogOnEnabledChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPausedChanged@BamoControllerNavigationManagerProxy@@AEAAXXZ
    void LogOnPausedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPausedChanging@BamoControllerNavigationManagerProxy@@AEAAX_N@Z
    void LogOnPausedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

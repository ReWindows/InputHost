#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class BamoInputSystemInternalProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputSystemInternalProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputProcessManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoInputProcessManagerProxy@@XZ
    virtual BamoInputProcessManagerProxy * GetInputProcessManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemContextManager@BamoInputSystemInternalProxy@@UEAAPEAVBamoSystemContextManagerProxy@@XZ
    virtual BamoSystemContextManagerProxy * GetSystemContextManager();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputSystemInternalProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputSystemInternalProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputSystemInternalProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputSystemInternalProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputProcessManagerChanged@BamoInputSystemInternalProxy@@MEAAJXZ
    virtual long OnInputProcessManagerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputProcessManagerChanging@BamoInputSystemInternalProxy@@MEAAJPEAVBamoInputProcessManagerProxy@@@Z
    virtual long OnInputProcessManagerChanging(BamoInputProcessManagerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSystemContextManagerChanged@BamoInputSystemInternalProxy@@MEAAJXZ
    virtual long OnSystemContextManagerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSystemContextManagerChanging@BamoInputSystemInternalProxy@@MEAAJPEAVBamoSystemContextManagerProxy@@@Z
    virtual long OnSystemContextManagerChanging(BamoSystemContextManagerProxy *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputSystemInternalProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputProcessManagerChanged@BamoInputSystemInternalProxy@@AEAAXXZ
    void LogOnInputProcessManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputProcessManagerChanging@BamoInputSystemInternalProxy@@AEAAXPEAVBamoInputProcessManagerProxy@@@Z
    void LogOnInputProcessManagerChanging(BamoInputProcessManagerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSystemContextManagerChanged@BamoInputSystemInternalProxy@@AEAAXXZ
    void LogOnSystemContextManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSystemContextManagerChanging@BamoInputSystemInternalProxy@@AEAAXPEAVBamoSystemContextManagerProxy@@@Z
    void LogOnSystemContextManagerChanging(BamoSystemContextManagerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputSystemInternalProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputSystemInternalProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputSystemInternalProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

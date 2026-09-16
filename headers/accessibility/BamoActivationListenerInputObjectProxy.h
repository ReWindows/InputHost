#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoActivationListenerInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationListenerInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@BamoActivationListenerInputObjectProxy@@UEAA_KXZ
    virtual uint64_t GetHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivate@BamoActivationListenerInputObjectProxy@@UEAAJW4InputActivationState@Input@UI@Windows@@@Z
    virtual long OnActivate(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationListenerInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationListenerInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivationListenerInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivationListenerInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHWNDChanged@BamoActivationListenerInputObjectProxy@@MEAAJXZ
    virtual long OnHWNDChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHWNDChanging@BamoActivationListenerInputObjectProxy@@MEAAJ_K@Z
    virtual long OnHWNDChanging(uint64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationListenerInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHWNDChanged@BamoActivationListenerInputObjectProxy@@AEAAXXZ
    void LogOnHWNDChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHWNDChanging@BamoActivationListenerInputObjectProxy@@AEAAX_K@Z
    void LogOnHWNDChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoInputForwardAreaInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputForwardAreaInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoInputForwardAreaInputObjectProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputForwardAreaInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputForwardAreaInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputForwardAreaInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputForwardAreaInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoInputForwardAreaInputObjectProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoInputForwardAreaInputObjectProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputForwardAreaInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoInputForwardAreaInputObjectProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputForwardAreaInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputForwardAreaInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputForwardAreaInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

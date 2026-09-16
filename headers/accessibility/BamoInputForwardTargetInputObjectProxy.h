#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoInputForwardTargetInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputForwardTargetInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoInputForwardTargetInputObjectProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputForwardTargetInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputForwardTargetInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputForwardTargetInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputForwardTargetInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoInputForwardTargetInputObjectProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoInputForwardTargetInputObjectProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputForwardTargetInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoInputForwardTargetInputObjectProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoInputForwardTargetInputObjectProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputForwardTargetInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputForwardTargetInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputForwardTargetInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

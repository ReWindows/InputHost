#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoDragAreaClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDragAreaClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoDragAreaClientProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDragAreaClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDragAreaClientProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDragAreaClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDragAreaClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoDragAreaClientProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoDragAreaClientProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDragAreaClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoDragAreaClientProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDragAreaClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

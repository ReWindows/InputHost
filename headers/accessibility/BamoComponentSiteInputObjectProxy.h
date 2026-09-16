#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoComponentSiteInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoComponentSiteInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentViewId@BamoComponentSiteInputObjectProxy@@UEAAIXZ
    virtual unsigned int GetComponentViewId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoComponentSiteInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoComponentSiteInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoComponentSiteInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnComponentViewIdChanged@BamoComponentSiteInputObjectProxy@@MEAAJXZ
    virtual long OnComponentViewIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnComponentViewIdChanging@BamoComponentSiteInputObjectProxy@@MEAAJI@Z
    virtual long OnComponentViewIdChanging(unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoComponentSiteInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnComponentViewIdChanged@BamoComponentSiteInputObjectProxy@@AEAAXXZ
    void LogOnComponentViewIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnComponentViewIdChanging@BamoComponentSiteInputObjectProxy@@AEAAXI@Z
    void LogOnComponentViewIdChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

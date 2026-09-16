#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class BamoInputSiteManagerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputSiteManagerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputSiteManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSiteElement@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrincipal@@@Z
    virtual long RegisterInputSiteElement(BamoInputSiteElementPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSiteElementWithHint@BamoInputSiteManagerProxy@@UEAAJPEAVBamoInputSiteElementPrincipal@@AEBUInputSiteId@@@Z
    virtual long RegisterInputSiteElementWithHint(BamoInputSiteElementPrincipal *, InputSiteId const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputSiteManagerProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputSiteManagerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputSiteManagerProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputSiteManagerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputSiteManagerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class BamoContainerInfoInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoContainerInfoInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerGuid@BamoContainerInfoInputObjectProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetContainerGuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ
    virtual CONTAINER_ID const & GetContainerId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoContainerInfoInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoContainerInfoInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoContainerInfoInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoContainerInfoInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnContainerGuidChanged@BamoContainerInfoInputObjectProxy@@MEAAJXZ
    virtual long OnContainerGuidChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnContainerGuidChanging@BamoContainerInfoInputObjectProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnContainerGuidChanging(_GUID const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnContainerIdChanged@BamoContainerInfoInputObjectProxy@@MEAAJXZ
    virtual long OnContainerIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnContainerIdChanging@BamoContainerInfoInputObjectProxy@@MEAAJAEBUCONTAINER_ID@@@Z
    virtual long OnContainerIdChanging(CONTAINER_ID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoContainerInfoInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnContainerGuidChanged@BamoContainerInfoInputObjectProxy@@AEAAXXZ
    void LogOnContainerGuidChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnContainerGuidChanging@BamoContainerInfoInputObjectProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnContainerGuidChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnContainerIdChanged@BamoContainerInfoInputObjectProxy@@AEAAXXZ
    void LogOnContainerIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnContainerIdChanging@BamoContainerInfoInputObjectProxy@@AEAAXAEBUCONTAINER_ID@@@Z
    void LogOnContainerIdChanging(CONTAINER_ID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoContainerInfoInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoContainerInfoInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoContainerInfoInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

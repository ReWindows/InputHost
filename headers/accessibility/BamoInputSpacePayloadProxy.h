#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class BamoInputSpacePayloadProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputSpacePayloadProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSpace@BamoInputSpacePayloadProxy@@UEAAAEBUINPUT_SPACE@@XZ
    virtual INPUT_SPACE const & GetInputSpace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegions@BamoInputSpacePayloadProxy@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z
    virtual void GetRegions(INPUT_SPACE_REGION const * *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputSpacePayloadProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputSpacePayloadProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputSpacePayloadProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputSpacePayloadProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputSpaceChanged@BamoInputSpacePayloadProxy@@MEAAJXZ
    virtual long OnInputSpaceChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputSpaceChanging@BamoInputSpacePayloadProxy@@MEAAJAEBUINPUT_SPACE@@@Z
    virtual long OnInputSpaceChanging(INPUT_SPACE const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRegionsChanged@BamoInputSpacePayloadProxy@@MEAAJXZ
    virtual long OnRegionsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnRegionsChanging@BamoInputSpacePayloadProxy@@MEAAJPEBUINPUT_SPACE_REGION@@I@Z
    virtual long OnRegionsChanging(INPUT_SPACE_REGION const *, unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputSpacePayloadProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputSpaceChanged@BamoInputSpacePayloadProxy@@AEAAXXZ
    void LogOnInputSpaceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputSpaceChanging@BamoInputSpacePayloadProxy@@AEAAXAEBUINPUT_SPACE@@@Z
    void LogOnInputSpaceChanging(INPUT_SPACE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnRegionsChanged@BamoInputSpacePayloadProxy@@AEAAXXZ
    void LogOnRegionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnRegionsChanging@BamoInputSpacePayloadProxy@@AEAAXI@Z
    void LogOnRegionsChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

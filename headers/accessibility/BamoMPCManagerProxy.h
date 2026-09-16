#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
class BamoMPCManagerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCManagerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ
    virtual long DisableGamepadExclusivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGamepadExclusivityForProcess@BamoMPCManagerProxy@@UEAAJI@Z
    virtual long EnableGamepadExclusivityForProcess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForcePrimaryInputType@BamoMPCManagerProxy@@UEAAJW4InputType@@@Z
    virtual long ForcePrimaryInputType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMPCConstantManagerClient@BamoMPCManagerProxy@@UEAAPEAVBamoMPCConstantManagerClientProxy@@XZ
    virtual BamoMPCConstantManagerClientProxy * GetMPCConstantManagerClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveSpatialDataToPID@BamoMPCManagerProxy@@UEAAJI@Z
    virtual long GiveSpatialDataToPID(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCManagerProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendGamepadIsSupportedForProcess@BamoMPCManagerProxy@@UEAAJI@Z
    virtual long ResendGamepadIsSupportedForProcess(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConvertGraspToSystemGesture@BamoMPCManagerProxy@@UEAAJ_NI@Z
    virtual long SetConvertGraspToSystemGesture(bool, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOnlyMixedWorldRouting@BamoMPCManagerProxy@@UEAAJ_N@Z
    virtual long SetOnlyMixedWorldRouting(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerHomeGesture@BamoMPCManagerProxy@@UEAAJW4InputType@@I@Z
    virtual long TriggerHomeGesture(int, unsigned int);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnMPCConstantManagerClientChanged@BamoMPCManagerProxy@@MEAAJXZ
    virtual long OnMPCConstantManagerClientChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnMPCConstantManagerClientChanging@BamoMPCManagerProxy@@MEAAJPEAVBamoMPCConstantManagerClientProxy@@@Z
    virtual long OnMPCConstantManagerClientChanging(BamoMPCConstantManagerClientProxy *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCManagerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoMPCManagerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoMPCManagerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoMPCManagerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

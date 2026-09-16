#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class BamoMPCManagerClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCManagerClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxy@@UEAAJIII_KI@Z
    virtual long OnButtonsChangedDuringHomeGesture(unsigned int, unsigned int, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnETCalibrationRequested@BamoMPCManagerClientProxy@@UEAAJI@Z
    virtual long OnETCalibrationRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadExclusivityExited@BamoMPCManagerClientProxy@@UEAAJXZ
    virtual long OnGamepadExclusivityExited();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadIsSupportedForProcess@BamoMPCManagerClientProxy@@UEAAJI@Z
    virtual long OnGamepadIsSupportedForProcess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureDetected@BamoMPCManagerClientProxy@@UEAAJII_KII@Z
    virtual long OnHomeGestureDetected(unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxy@@UEAAJ_NII_KII@Z
    virtual long OnHomeGestureReadyChanged(bool, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z
    virtual long OnInputProviderChanged(LegacyDeviceInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJW4MPCSourceKind@@I@Z
    virtual long OnMenuPressed(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJXZ
    virtual long OnMouseSnappedToGaze();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCManagerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCManagerClientProxy@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCManagerClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoMPCManagerClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoMPCManagerClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoMPCManagerClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};

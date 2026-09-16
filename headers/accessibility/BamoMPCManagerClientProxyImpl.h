#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
namespace BamoImpl {
class BamoMPCManagerClientProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMPCManagerClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z
    long OnButtonsChangedDuringHomeGesture(unsigned int, unsigned int, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnETCalibrationRequested@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJI@Z
    long OnETCalibrationRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadExclusivityExited@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJXZ
    long OnGamepadExclusivityExited();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadIsSupportedForProcess@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJI@Z
    long OnGamepadIsSupportedForProcess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureDetected@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII_KII@Z
    long OnHomeGestureDetected(unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJ_NII_KII@Z
    long OnHomeGestureReadyChanged(bool, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputProviderChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z
    long OnInputProviderChanged(LegacyDeviceInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJW4MPCSourceKind@@I@Z
    long OnMenuPressed(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMPCManagerClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseSnappedToGaze@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJXZ
    long OnMouseSnappedToGaze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoMPCManagerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoMPCManagerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoMPCManagerClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace BamoImpl

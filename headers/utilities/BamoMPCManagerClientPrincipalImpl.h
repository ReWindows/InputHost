#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace BamoImpl {
class BamoMPCManagerClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJIII_KI@Z
    long OnButtonsChangedDuringHomeGesture(unsigned int, unsigned int, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnETCalibrationRequested@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long OnETCalibrationRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadExclusivityExited@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJXZ
    long OnGamepadExclusivityExited();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadIsSupportedForProcess@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long OnGamepadIsSupportedForProcess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KII@Z
    long OnHomeGestureDetected(unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureReadyChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJ_NII_KII@Z
    long OnHomeGestureReadyChanged(bool, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputProviderChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJPEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z
    long OnInputProviderChanged(LegacyDeviceInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuPressed@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJW4MPCSourceKind@@I@Z
    long OnMenuPressed(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseSnappedToGaze@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJXZ
    long OnMouseSnappedToGaze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
};
} // namespace BamoImpl

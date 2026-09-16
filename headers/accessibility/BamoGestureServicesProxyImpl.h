#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
namespace BamoImpl {
class BamoGestureServicesProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApproveProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z
    long ApproveProcessesForAnimation(unsigned int const *, unsigned int, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z
    long CancelOperation(unsigned int, BamoDragManagerClientPrincipal *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoGestureServicesProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoGestureServicesProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z
    long ProcessResult(unsigned int, ::Windows::UI::Internal::Input::DragOperationResult const &, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoGestureServicesProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoGestureServicesProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoGestureServicesProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientPrincipal@@@Z
    long RegisterGestureDragClient(uint64_t, int, int, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z
    long RevokeProcessesForAnimation(unsigned int const *, unsigned int, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z
    long StartAnimation(unsigned int, BamoAnimationTargetClientPrincipal * const *, unsigned int, BamoDragManagerClientPrincipal *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z
    long StartOperation(unsigned int, bool, uint64_t, uint64_t, BamoDragManagerClientPrincipal *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJ_KPEAVBamoDragManagerClientPrincipal@@@Z
    long UnregisterGestureDragClient(uint64_t, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoGestureServicesProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendApproveProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z
    void LogSendApproveProcessesForAnimation(unsigned int const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendCancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIIW4GestureProcessorType@@@Z
    void LogSendCancelOperation(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIAEBUDragOperationResult@Input@Internal@UI@Windows@@I@Z
    void LogSendProcessResult(unsigned int, ::Windows::UI::Internal::Input::DragOperationResult const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRegisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@I@Z
    void LogSendRegisterGestureDragClient(uint64_t, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRevokeProcessesForAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXPEBIII@Z
    void LogSendRevokeProcessesForAnimation(unsigned int const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendStartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIPEBIIIW4GestureProcessorType@@@Z
    void LogSendStartAnimation(unsigned int, unsigned int const *, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendStartOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXI_N_K1IW4GestureProcessorType@@@Z
    void LogSendStartOperation(unsigned int, bool, uint64_t, uint64_t, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendUnregisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KI@Z
    void LogSendUnregisterGestureDragClient(uint64_t, unsigned int);
};
} // namespace BamoImpl

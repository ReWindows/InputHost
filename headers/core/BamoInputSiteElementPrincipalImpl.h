#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 107 member(s).
namespace BamoImpl {
class BamoInputSiteElementPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoInputSiteElementPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputSiteElementPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputSiteElementPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoInputSiteElementPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoInputSiteElementPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoInputSiteElementPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoInputSiteElementPrincipalImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoInputSiteElementPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetActivationConfigurationInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoActivationConfigurationInputObjectPrincipal@@@Z
    void LogSetActivationConfigurationInputObject(BamoActivationConfigurationInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetActivationController@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoActivationControllerPrincipal@@@Z
    void LogSetActivationController(BamoActivationControllerPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetActivationListenerInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoActivationListenerInputObjectPrincipal@@@Z
    void LogSetActivationListenerInputObject(BamoActivationListenerInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetActuationClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoActuationClientPrincipal@@@Z
    void LogSetActuationClient(BamoActuationClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetAnimationTargetClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoAnimationTargetClientPrincipal@@@Z
    void LogSetAnimationTargetClient(BamoAnimationTargetClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetAttachableInputObjectSample@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoAttachableInputObjectSamplePrincipal@@@Z
    void LogSetAttachableInputObjectSample(BamoAttachableInputObjectSamplePrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetCUIComponentInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoCUIComponentInputObjectPrincipal@@@Z
    void LogSetCUIComponentInputObject(BamoCUIComponentInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetCUIHostInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoCUIHostInputObjectPrincipal@@@Z
    void LogSetCUIHostInputObject(BamoCUIHostInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetComponentSiteInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoComponentSiteInputObjectPrincipal@@@Z
    void LogSetComponentSiteInputObject(BamoComponentSiteInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetContainerInfoInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoContainerInfoInputObjectPrincipal@@@Z
    void LogSetContainerInfoInputObject(BamoContainerInfoInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetCursorSuppressionPolicyObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoCursorSuppressionPolicyObjectPrincipal@@@Z
    void LogSetCursorSuppressionPolicyObject(BamoCursorSuppressionPolicyObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDelegatedInkCanvasInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDelegatedInkCanvasInputObjectPrincipal@@@Z
    void LogSetDelegatedInkCanvasInputObject(BamoDelegatedInkCanvasInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDragAreaClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDragAreaClientPrincipal@@@Z
    void LogSetDragAreaClient(BamoDragAreaClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDragManagerClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDragManagerClientPrincipal@@@Z
    void LogSetDragManagerClient(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDragSourceClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDragSourceClientPrincipal@@@Z
    void LogSetDragSourceClient(BamoDragSourceClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDropTargetClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDropTargetClientPrincipal@@@Z
    void LogSetDropTargetClient(BamoDropTargetClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetEdgyDragSourceClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoEdgyDragSourceClientPrincipal@@@Z
    void LogSetEdgyDragSourceClient(BamoEdgyDragSourceClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetEdgyNotificationSourceClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoEdgyNotificationSourceClientPrincipal@@@Z
    void LogSetEdgyNotificationSourceClient(BamoEdgyNotificationSourceClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputDelegationInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputDelegationInputObjectPrincipal@@@Z
    void LogSetInputDelegationInputObject(BamoInputDelegationInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputForwardAreaInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputForwardAreaInputObjectPrincipal@@@Z
    void LogSetInputForwardAreaInputObject(BamoInputForwardAreaInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputForwardTargetInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputForwardTargetInputObjectPrincipal@@@Z
    void LogSetInputForwardTargetInputObject(BamoInputForwardTargetInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputInjectionClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputInjectionClientPrincipal@@@Z
    void LogSetInputInjectionClient(BamoInputInjectionClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputSiteId@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetInputSiteId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputSiteIdNamespace@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXW4InputSiteIdNamespace@@@Z
    void LogSetInputSiteIdNamespace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetLightDismissClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoLightDismissClientPrincipal@@@Z
    void LogSetLightDismissClient(BamoLightDismissClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetMPCInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoMPCInputObjectPrincipal@@@Z
    void LogSetMPCInputObject(BamoMPCInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetMagnifierController@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoMagnifierControllerPrincipal@@@Z
    void LogSetMagnifierController(BamoMagnifierControllerPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetManualDragAreaClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoManualDragAreaClientPrincipal@@@Z
    void LogSetManualDragAreaClient(BamoManualDragAreaClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetManualResizeAreaClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoManualResizeAreaClientPrincipal@@@Z
    void LogSetManualResizeAreaClient(BamoManualResizeAreaClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetResizeAreaClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoResizeAreaClientPrincipal@@@Z
    void LogSetResizeAreaClient(BamoResizeAreaClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetResizeControllerClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoResizeControllerClientPrincipal@@@Z
    void LogSetResizeControllerClient(BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetShellGesturesClient@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoShellGesturesClientPrincipal@@@Z
    void LogSetShellGesturesClient(BamoShellGesturesClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSystemButtonEventController@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSystemButtonEventControllerPrincipal@@@Z
    void LogSetSystemButtonEventController(BamoSystemButtonEventControllerPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetUIAHitTestInputObject@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoUIAHitTestInputObjectPrincipal@@@Z
    void LogSetUIAHitTestInputObject(BamoUIAHitTestInputObjectPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetVirtualTouchpadController@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoVirtualTouchpadControllerPrincipal@@@Z
    void LogSetVirtualTouchpadController(BamoVirtualTouchpadControllerPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetWindowsMessageDelivery@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoWindowsMessageDeliveryPrincipal@@@Z
    void LogSetWindowsMessageDelivery(BamoWindowsMessageDeliveryPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivationConfigurationInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateActivationConfigurationInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivationControllerRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateActivationControllerRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivationListenerInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateActivationListenerInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivationListenerInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateActivationListenerInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActuationClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateActuationClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActuationClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateActuationClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationTargetClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateAnimationTargetClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAttachableInputObjectSampleRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateAttachableInputObjectSampleRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAttachableInputObjectSampleRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateAttachableInputObjectSampleRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCUIComponentInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateCUIComponentInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCUIComponentInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateCUIComponentInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCUIHostInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateCUIHostInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCUIHostInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateCUIHostInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComponentSiteInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateComponentSiteInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComponentSiteInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateComponentSiteInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContainerInfoInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateContainerInfoInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContainerInfoInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateContainerInfoInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorSuppressionPolicyObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateCursorSuppressionPolicyObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDelegatedInkCanvasInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDelegatedInkCanvasInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDelegatedInkCanvasInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDelegatedInkCanvasInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragAreaClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDragAreaClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragAreaClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDragAreaClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragManagerClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDragManagerClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragManagerClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDragManagerClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragSourceClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDragSourceClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragSourceClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDragSourceClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropTargetClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDropTargetClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropTargetClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDropTargetClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEdgyDragSourceClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateEdgyDragSourceClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEdgyNotificationSourceClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateEdgyNotificationSourceClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputDelegationInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInputDelegationInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputDelegationInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputDelegationInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputForwardAreaInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputForwardAreaInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputForwardTargetInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInputForwardTargetInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputForwardTargetInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputForwardTargetInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputInjectionClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInputInjectionClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputInjectionClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputInjectionClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSiteIdNamespaceRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInputSiteIdNamespaceRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSiteIdNamespaceRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputSiteIdNamespaceRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSiteIdRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInputSiteIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSiteIdRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputSiteIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismissClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateLightDismissClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismissClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateLightDismissClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPCInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateMPCInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPCInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateMPCInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMagnifierControllerRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateMagnifierControllerRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMagnifierControllerRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateMagnifierControllerRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManualDragAreaClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateManualDragAreaClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManualResizeAreaClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateManualResizeAreaClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResizeAreaClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateResizeAreaClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResizeAreaClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateResizeAreaClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResizeControllerClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateResizeControllerClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResizeControllerClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateResizeControllerClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellGesturesClientRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateShellGesturesClientRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellGesturesClientRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateShellGesturesClientRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemButtonEventControllerRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSystemButtonEventControllerRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemButtonEventControllerRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSystemButtonEventControllerRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIAHitTestInputObjectRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateUIAHitTestInputObjectRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIAHitTestInputObjectRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateUIAHitTestInputObjectRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVirtualTouchpadControllerRemoteCache@BamoInputSiteElementPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateVirtualTouchpadControllerRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVirtualTouchpadControllerRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateVirtualTouchpadControllerRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowsMessageDeliveryRemoteCacheStatic@BamoInputSiteElementPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateWindowsMessageDeliveryRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl

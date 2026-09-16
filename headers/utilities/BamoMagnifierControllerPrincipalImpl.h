#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
namespace BamoImpl {
class BamoMagnifierControllerPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoMagnifierControllerPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAcknowledgeGestureReceived@BamoMagnifierControllerPrincipalImpl@BamoImpl@@QEAAJXZ
    long BroadcastAcknowledgeGestureReceived();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMagnifierControllerPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMagnifierControllerPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PanGestureDetected@BamoMagnifierControllerPrincipalImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IPEBUPoint@Foundation@7@@Z
    long PanGestureDetected(int, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoMagnifierControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoMagnifierControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoMagnifierControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleDetected@BamoMagnifierControllerPrincipalImpl@BamoImpl@@QEAAJPEBUPoint@Foundation@Windows@@@Z
    long ToggleDetected(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomGestureDetected@BamoMagnifierControllerPrincipalImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IPEBUPoint@Foundation@7@@Z
    long ZoomGestureDetected(int, unsigned int, WindissectOpaque const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallAcknowledgeGestureReceivedOnStub@BamoMagnifierControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@@Z
    static long CallAcknowledgeGestureReceivedOnStub(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceivePanGestureDetected@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z
    void LogReceivePanGestureDetected(int, unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveToggleDetected@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAXAEBUPoint@Foundation@Windows@@@Z
    void LogReceiveToggleDetected(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveZoomGestureDetected@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z
    void LogReceiveZoomGestureDetected(int, unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGesturesEnabled@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetGesturesEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetToggleEnabled@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetToggleEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetUseInputSiteCoordinateSpace@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetUseInputSiteCoordinateSpace(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoMagnifierControllerPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGesturesEnabledRemoteCache@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGesturesEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGesturesEnabledRemoteCacheStatic@BamoMagnifierControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGesturesEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToggleEnabledRemoteCache@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateToggleEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToggleEnabledRemoteCacheStatic@BamoMagnifierControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateToggleEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUseInputSiteCoordinateSpaceRemoteCache@BamoMagnifierControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateUseInputSiteCoordinateSpaceRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUseInputSiteCoordinateSpaceRemoteCacheStatic@BamoMagnifierControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateUseInputSiteCoordinateSpaceRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 18 member(s).
namespace BamoImpl {
class BamoEdgyNotificationSourceClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgyRecognized@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@QEAAJPEBUPoint@Foundation@Windows@@@Z
    long EdgyRecognized(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoEdgyNotificationSourceClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveEdgyRecognized@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@AEAAXAEBUPoint@Foundation@Windows@@@Z
    void LogReceiveEdgyRecognized(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoEdgyGestureRecognitionConfigurationPrincipal@@@Z
    void LogSetGestureRecognitionConfiguration(BamoEdgyGestureRecognitionConfigurationPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetRoutingMode@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@AEAAXW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    void LogSetRoutingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureRecognitionConfigurationRemoteCache@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureRecognitionConfigurationRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureRecognitionConfigurationRemoteCacheStatic@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureRecognitionConfigurationRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoutingModeRemoteCache@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRoutingModeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoutingModeRemoteCacheStatic@BamoEdgyNotificationSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateRoutingModeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl

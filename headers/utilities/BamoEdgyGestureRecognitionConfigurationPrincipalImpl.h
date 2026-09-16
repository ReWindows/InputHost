#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
namespace BamoImpl {
class BamoEdgyGestureRecognitionConfigurationPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@QEAAXM@Z
    void SetOrientationBiasInDegrees(float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureDirection@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXAEBUVector2@Numerics@Foundation@Windows@@@Z
    void LogSetGestureDirection(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetGestureMinimumDistanceInHimetrics(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetGestureTimeoutInMilliseconds(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXM@Z
    void LogSetOrientationBiasInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDirectionRemoteCache@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureDirectionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDirectionRemoteCacheStatic@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureDirectionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureMinimumDistanceInHimetricsRemoteCache@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureMinimumDistanceInHimetricsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureMinimumDistanceInHimetricsRemoteCacheStatic@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureMinimumDistanceInHimetricsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureTimeoutInMillisecondsRemoteCache@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureTimeoutInMillisecondsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureTimeoutInMillisecondsRemoteCacheStatic@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureTimeoutInMillisecondsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrientationBiasInDegreesRemoteCache@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateOrientationBiasInDegreesRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrientationBiasInDegreesRemoteCacheStatic@BamoEdgyGestureRecognitionConfigurationPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateOrientationBiasInDegreesRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl

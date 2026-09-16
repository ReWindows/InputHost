#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
namespace BamoImpl {
class BamoMPCInputObjectPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoMPCInputObjectPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMPCInputObjectPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAugmentedInputEvent@BamoMPCInputObjectPrincipalImpl@BamoImpl@@QEAAJPEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@PEBUAugmentedInputDataMsg@56789@_JPEBUHitObjectMsg@56789@@Z
    long OnAugmentedInputEvent(MPCTraceInfo const *, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const *, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandEvent@BamoMPCInputObjectPrincipalImpl@BamoImpl@@QEAAJPEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@PEBUHandStateMsg@56789@PEBUHitObjectMsg@56789@@Z
    long OnHandEvent(MPCTraceInfo const *, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const *, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMPCInputObjectPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVoiceEvent@BamoMPCInputObjectPrincipalImpl@BamoImpl@@QEAAJPEBUMPCTraceInfo@@PEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@PEBUPoseDataMsg@56789@PEBUHitObjectMsg@56789@@Z
    long OnVoiceEvent(MPCTraceInfo const *, int const *, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const *, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoMPCInputObjectPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoMPCInputObjectPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoMPCInputObjectPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnAugmentedInputEvent@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z
    void LogReceiveOnAugmentedInputEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const &, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnHandEvent@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z
    void LogReceiveOnHandEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnVoiceEvent@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z
    void LogReceiveOnVoiceEvent(MPCTraceInfo const &, int const &, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetCalledGetDetectedSourcesAtTimestampRecently(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetEventSubscriptions@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetEventSubscriptions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCalledGetDetectedSourcesAtTimestampRecentlyRemoteCache@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateCalledGetDetectedSourcesAtTimestampRecentlyRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCalledGetDetectedSourcesAtTimestampRecentlyRemoteCacheStatic@BamoMPCInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateCalledGetDetectedSourcesAtTimestampRecentlyRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEventSubscriptionsRemoteCache@BamoMPCInputObjectPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateEventSubscriptionsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEventSubscriptionsRemoteCacheStatic@BamoMPCInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateEventSubscriptionsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl

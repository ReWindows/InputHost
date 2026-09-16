#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace BamoImpl {
class BamoMPCInputObjectProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMPCInputObjectProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z
    long OnAugmentedInputEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const &, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z
    long OnHandEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z
    long OnVoiceEvent(MPCTraceInfo const &, int const &, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateCalledGetDetectedSourcesAtTimestampRecently(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateEventSubscriptions(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendOnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z
    void LogSendOnAugmentedInputEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const &, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendOnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z
    void LogSendOnHandEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendOnVoiceEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z
    void LogSendOnVoiceEvent(MPCTraceInfo const &, int const &, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
};
} // namespace BamoImpl

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
class MPCInputObjectBamo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCInputObjectBamo@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAVMPCInputObject@@@Z
    MPCInputObjectBamo(::ISMBamos_AutoBamos::BamoConnection *, MPCInputObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAugmentedInputEvent@MPCInputObjectBamo@@UEAAJPEAVBamoMPCInputObjectStub@@AEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z
    virtual long OnAugmentedInputEvent(BamoMPCInputObjectStub *, MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const &, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandEvent@MPCInputObjectBamo@@UEAAJPEAVBamoMPCInputObjectStub@@AEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z
    virtual long OnHandEvent(BamoMPCInputObjectStub *, MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVoiceEvent@MPCInputObjectBamo@@UEAAJPEAVBamoMPCInputObjectStub@@AEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@56789@AEBUHitObjectMsg@56789@@Z
    virtual long OnVoiceEvent(BamoMPCInputObjectStub *, MPCTraceInfo const &, int const &, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@MPCInputObjectBamo@@MEAAJPEAVBamoMPCInputObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoMPCInputObjectStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@MPCInputObjectBamo@@MEAAJPEAVBamoMPCInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoMPCInputObjectStub *);
};

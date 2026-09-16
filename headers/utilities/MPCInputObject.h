#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class MPCInputObject {
public:
    class Api;
    class ServerConnectionApi;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MPCInputObject@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@MPCInputObject@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCInputObject@@QEAA@XZ
    MPCInputObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAugmentedInputEvent@MPCInputObject@@QEAAXAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z
    void OnAugmentedInputEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const &, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionStateChanged@MPCInputObject@@QEAAX_N@Z
    void OnConnectionStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandEvent@MPCInputObject@@QEAAXAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z
    void OnHandEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVoiceEvent@MPCInputObject@@QEAAXAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z
    void OnVoiceEvent(MPCTraceInfo const &, int const &, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@MPCInputObject@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MPCInputObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MPCInputObject@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MPCInputObject@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MPCInputObject@@UEAA@XZ
    virtual ~MPCInputObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEventArgsStatics@MPCInputObject@@IEAAJXZ
    long EnsureEventArgsStatics();
};

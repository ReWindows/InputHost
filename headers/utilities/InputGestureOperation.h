#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 39 member(s).
class InputGestureOperation {
public:
    class AnimationDeferralInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputGestureOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted_Callback@InputGestureOperation@@QEAAX_K0@Z
    void AnimationStarted_Callback(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDeferral_Callback@InputGestureOperation@@QEAAXXZ
    void CancelDeferral_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelOperation@InputGestureOperation@@UEAAJXZ
    virtual long CancelOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputGestureOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAnimationObject@InputGestureOperation@@UEAAJPEAUICompositor@Composition@UI@Windows@@PEAPEAUIAnimationObject@345@@Z
    virtual long GetInputAnimationObject(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IAnimationObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputGestureOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputGestureOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputGestureOperation@@QEAA@XZ
    InputGestureOperation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputGestureOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputGestureOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartAnimationAsync@InputGestureOperation@@UEAAJPEAUICompositor@Composition@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryStartAnimationAsync(::Windows::UI::Composition::ICompositor *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartAnimationAsync2@InputGestureOperation@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryStartAnimationAsync2(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartExternalAnimationAsync@InputGestureOperation@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryStartExternalAnimationAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartResumableAnimationAsync@InputGestureOperation@@UEAAJPEAU?$IVector@PEAVInputAnimationTarget@Input@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long TryStartResumableAnimationAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GestureEnded@InputGestureOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureOperation@Input@Internal@UI@Windows@@PEAVInputGestureOperationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GestureEnded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GestureStarted@InputGestureOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureOperation@Input@Internal@UI@Windows@@PEAVInputGestureOperationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GestureStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationEnded@InputGestureOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureOperation@Input@Internal@UI@Windows@@PEAVInputGestureOperationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationEnded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationResumed@InputGestureOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureOperation@Input@Internal@UI@Windows@@PEAVInputGestureOperationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationResumed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationStarted@InputGestureOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputGestureOperation@Input@Internal@UI@Windows@@PEAVInputGestureOperationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnimationData@InputGestureOperation@@UEAAJPEAUGestureAnimationData@Input@Internal@UI@Windows@@@Z
    virtual long get_AnimationData(::Windows::UI::Internal::Input::GestureAnimationData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@InputGestureOperation@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputType@InputGestureOperation@@UEAAJPEAW4InputType@Input@Internal@UI@Windows@@@Z
    virtual long get_InputType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginalInputType@InputGestureOperation@@UEAAJPEAW4InputType@Input@Internal@UI@Windows@@@Z
    virtual long get_OriginalInputType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@InputGestureOperation@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceId@InputGestureOperation@@UEAAJPEA_K@Z
    virtual long get_SourceId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Translation@InputGestureOperation@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Translation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Velocity@InputGestureOperation@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Velocity(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GestureEnded@InputGestureOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GestureEnded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GestureStarted@InputGestureOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GestureStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationEnded@InputGestureOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationEnded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationResumed@InputGestureOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationResumed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationStarted@InputGestureOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationStarted(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputGestureOperation@@UEAA@XZ
    virtual ~InputGestureOperation();
};

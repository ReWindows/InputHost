#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 40 member(s).
class InputDragOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputDragOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDrag@InputDragOperation@@UEAAJXZ
    virtual long CancelDrag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputDragOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputDragOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputDragOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDragOperation@@QEAA@XZ
    InputDragOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@InputDragOperation@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputDragOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputDragOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputDragOperation@@QEAAJK_KW4InputType@Input@Internal@UI@Windows@@AEBV?$ComPtr@VInputDragManager@@@WRL@Microsoft@@@Z
    long RuntimeClassInitialize(unsigned long, uint64_t, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartAnimationAsync@InputDragOperation@@UEAAJPEAUICompositor@Composition@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryStartAnimationAsync(::Windows::UI::Composition::ICompositor *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragEnded@InputDragOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDragOperation@Input@Internal@UI@Windows@@PEAVDragOperationInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragEnded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragInProgress@InputDragOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDragOperation@Input@Internal@UI@Windows@@PEAVDragOperationInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragInProgress(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragStarted@InputDragOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDragOperation@Input@Internal@UI@Windows@@PEAVDragOperationInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DropTargetChanged@InputDragOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDragOperation@Input@Internal@UI@Windows@@PEAVDragOperationInputEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DropTargetChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationPolicy@InputDragOperation@@UEAAJPEAW4SpatialInputActivationPolicy@Input@Internal@UI@Windows@@@Z
    virtual long get_ActivationPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@InputDragOperation@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputType@InputDragOperation@@UEAAJPEAW4InputType@Input@Internal@UI@Windows@@@Z
    virtual long get_InputType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@InputDragOperation@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceId@InputDragOperation@@UEAAJPEA_K@Z
    virtual long get_SourceId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Velocity@InputDragOperation@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Velocity(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivationPolicy@InputDragOperation@@UEAAJW4SpatialInputActivationPolicy@Input@Internal@UI@Windows@@@Z
    virtual long put_ActivationPolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragEnded@InputDragOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragEnded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragInProgress@InputDragOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragInProgress(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragStarted@InputDragOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DropTargetChanged@InputDragOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DropTargetChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDragOperation@@UEAA@XZ
    virtual ~InputDragOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragInvokeHandler@InputDragOperation@@AEAAJUPoint@Foundation@Windows@@00_KUVector2@Numerics@34@W4VirtualKeyModifiers@System@4@AEAV?$EventSource@U?$ITypedEventHandler@PEAVInputDragOperation@Input@Internal@UI@Windows@@PEAVDragOperationInputEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@PEBUDragInfoStruct@@I1@Z
    long DragInvokeHandler(WindissectOpaque, WindissectOpaque, WindissectOpaque, uint64_t, WindissectOpaque, int, WindissectOpaque &, DragInfoStruct const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForAnimation@InputDragOperation@@AEAAJPEAUICompositor@Composition@UI@Windows@@_K1@Z
    long InitializeForAnimation(::Windows::UI::Composition::ICompositor *, uint64_t, uint64_t);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 33 member(s).
class InputResizeOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputResizeOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelResize@InputResizeOperation@@UEAAJXZ
    virtual long CancelResize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputResizeOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputResizeOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputResizeOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputResizeOperation@@QEAA@XZ
    InputResizeOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@InputResizeOperation@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputResizeOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputResizeOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartAnimationAsync@InputResizeOperation@@UEAAJPEAUICompositor@Composition@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryStartAnimationAsync(::Windows::UI::Composition::ICompositor *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResizeEnded@InputResizeOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputResizeOperation@Input@Internal@UI@Windows@@PEAVInputResizeControllerEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ResizeEnded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResizeInProgress@InputResizeOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputResizeOperation@Input@Internal@UI@Windows@@PEAVInputResizeControllerEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ResizeInProgress(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResizeStarted@InputResizeOperation@@UEAAJPEAU?$ITypedEventHandler@PEAVInputResizeOperation@Input@Internal@UI@Windows@@PEAVInputResizeControllerEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ResizeStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@InputResizeOperation@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputType@InputResizeOperation@@UEAAJPEAW4InputType@Input@Internal@UI@Windows@@@Z
    virtual long get_InputType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Region@InputResizeOperation@@UEAAJPEAW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual long get_Region(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResizeEnded@InputResizeOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResizeEnded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResizeInProgress@InputResizeOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResizeInProgress(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResizeStarted@InputResizeOperation@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResizeStarted(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputResizeOperation@@UEAA@XZ
    virtual ~InputResizeOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForAnimation@InputResizeOperation@@AEAAJPEAUICompositor@Composition@UI@Windows@@_K1@Z
    long InitializeForAnimation(::Windows::UI::Composition::ICompositor *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeInvokeHandler@InputResizeOperation@@AEAAJUPoint@Foundation@Windows@@UVector2@Numerics@34@AEAV?$EventSource@U?$ITypedEventHandler@PEAVInputResizeOperation@Input@Internal@UI@Windows@@PEAVInputResizeControllerEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@@Z
    long ResizeInvokeHandler(WindissectOpaque, WindissectOpaque, WindissectOpaque &);
};

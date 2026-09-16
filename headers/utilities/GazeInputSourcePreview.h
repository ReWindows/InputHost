#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 43 member(s).
namespace Windows::Devices::Input::Preview {
class GazeInputSourcePreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableBackgroundAccess@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJXZ
    virtual long DisableBackgroundAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableBackgroundAccess@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJW4GazeInputBackgroundAccessType@34Internal@5@@Z
    virtual long EnableBackgroundAccess(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeInputSourcePreview@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeInputSourcePreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@GazeInputSourcePreview@Preview@Input@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@GazeInputSourcePreview@Preview@Input@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeApiCallbacks@GazeInputSourcePreview@Preview@Input@Devices@Windows@@QEAAJPEAVGazePointPreview@2345@PEAV?$Vector@PEAVGazePointPreview@Preview@Input@Devices@Windows@@U?$DefaultEqualityPredicate@PEAVGazePointPreview@Preview@Input@Devices@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGazePointPreview@Preview@Input@Devices@Windows@@@7895@U?$DefaultVectorOptions@PEAVGazePointPreview@Preview@Input@Devices@Windows@@@7895@@Internal@Collections@Foundation@5@@Z
    long InvokeApiCallbacks(::Windows::Devices::Input::Preview::GazePointPreview *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputReady@GazeInputSourcePreview@Preview@Input@Devices@Windows@@QEAAJPEAUIInspectable@@0@Z
    long OnInputReady(IInspectable *, IInspectable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueInput@GazeInputSourcePreview@Preview@Input@Devices@Windows@@QEAAJPEAVGazePointPreview@2345@@Z
    long QueueInput(::Windows::Devices::Input::Preview::GazePointPreview *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GazeInputSourcePreview@Preview@Input@Devices@Windows@@QEAAJ_K@Z
    long RuntimeClassInitialize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GazeEntered@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeInputSourcePreview@Preview@Input@Devices@Windows@@PEAVGazeEnteredPreviewEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_GazeEntered(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GazeExited@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeInputSourcePreview@Preview@Input@Devices@Windows@@PEAVGazeExitedPreviewEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_GazeExited(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GazeMoved@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeInputSourcePreview@Preview@Input@Devices@Windows@@PEAVGazeMovedPreviewEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_GazeMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GazeEntered@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GazeEntered(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GazeExited@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GazeExited(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GazeMoved@GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GazeMoved(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeInputSourcePreview@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeInputSourcePreview();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePointForDpiTransform@GazeInputSourcePreview@Preview@Input@Devices@Windows@@AEAAXPEAVGazePointPreview@2345@@Z
    void UpdatePointForDpiTransform(::Windows::Devices::Input::Preview::GazePointPreview *);
};
} // namespace Windows::Devices::Input::Preview

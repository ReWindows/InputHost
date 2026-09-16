#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 39 member(s).
namespace Windows::Devices::Input::Preview {
class GazeDeviceWatcherPreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@QEAA@XZ
    GazeDeviceWatcherPreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceById@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@QEAAJKPEAPEAVGazeDevicePreview@2345@@Z
    long GetDeviceById(unsigned long, ::Windows::Devices::Input::Preview::GazeDevicePreview * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceArrival@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceArrival(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceEnumerationCompleted@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAXXZ
    virtual void OnDeviceEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoval@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceRemoval(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceUpdate@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceUpdate(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnect@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAXXZ
    virtual void OnServerDisconnect();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Added@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@PEAVGazeDeviceWatcherAddedPreviewEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Added(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnumerationCompleted@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_EnumerationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Removed@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@PEAVGazeDeviceWatcherRemovedPreviewEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Removed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Updated@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@PEAVGazeDeviceWatcherUpdatedPreviewEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Updated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Added@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Added(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnumerationCompleted@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnumerationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Removed@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Removed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Updated@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Updated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@UEAA@XZ
    virtual ~GazeDeviceWatcherPreview();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceArrival@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@AEAAJPEBUDeviceInfo@@@Z
    long ProcessDeviceArrival(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceRemoval@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@AEAAJPEBUDeviceInfo@@@Z
    long ProcessDeviceRemoval(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceUpdate@GazeDeviceWatcherPreview@Preview@Input@Devices@Windows@@AEAAJPEBUDeviceInfo@@@Z
    long ProcessDeviceUpdate(DeviceInfo const *);
};
} // namespace Windows::Devices::Input::Preview

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 37 member(s).
class DeviceDockWatcher {
public:
    class Api;
    class Test;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeviceDockWatcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DeviceDockWatcher@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeviceDockWatcher@@QEAA@XZ
    DeviceDockWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockDeviceAdded@DeviceDockWatcher@@QEAAXIPEAVBamoDockDeviceProxy@@@Z
    void OnDockDeviceAdded(unsigned int, BamoDockDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockDeviceRemoved_Callback@DeviceDockWatcher@@QEAAXI@Z
    void OnDockDeviceRemoved_Callback(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockInput@DeviceDockWatcher@@QEAAXIAEBUDockInputInfo@@@Z
    void OnDockInput(unsigned int, DockInputInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockableDeviceAdded_Callback@DeviceDockWatcher@@QEAAXIPEAVBamoDockableDeviceProxy@@@Z
    void OnDockableDeviceAdded_Callback(unsigned int, BamoDockableDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockableDeviceRemoved_Callback@DeviceDockWatcher@@QEAAXI@Z
    void OnDockableDeviceRemoved_Callback(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeviceDockWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeviceDockWatcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DeviceDockWatcher@@QEAAJPEAVContextSession@WRL2@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceDockWatcher@@UEAA@XZ
    virtual ~DeviceDockWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDockedImpl@DeviceDockWatcher@@AEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAVDockEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddDockedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEnumerationCompletedImpl@DeviceDockWatcher@@AEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddEnumerationCompletedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUndockedImpl@DeviceDockWatcher@@AEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAVDockEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddUndockedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUpdatedImpl@DeviceDockWatcher@@AEAAJPEAU?$ITypedEventHandler@PEAVDeviceDockWatcher@Input@Internal@UI@Windows@@PEAVDockEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddUpdatedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTestModeImpl@DeviceDockWatcher@@AEAAJXZ
    long EnableTestModeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDockedEventIfNeeded_Callback@DeviceDockWatcher@@AEAAXAEBUDockEventState@@@Z
    void FireDockedEventIfNeeded_Callback(DockEventState const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEnumerationCompletedEventIfNeeded_Callback@DeviceDockWatcher@@AEAAXXZ
    void FireEnumerationCompletedEventIfNeeded_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireUndockedEventIfNeeded_Callback@DeviceDockWatcher@@AEAAXAEBUDockEventState@@@Z
    void FireUndockedEventIfNeeded_Callback(DockEventState const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireUpdatedEventIfNeeded_Callback@DeviceDockWatcher@@AEAAXAEBUDockEventState@@@Z
    void FireUpdatedEventIfNeeded_Callback(DockEventState const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextDeviceId@DeviceDockWatcher@@AEAAIXZ
    unsigned int GetNextDeviceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayAdded_NoLock@DeviceDockWatcher@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@Windows@winrt@@AEBUDeviceInformation@3456@@Z
    void OnDisplayAdded_NoLock(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayEnumerationCompleted_NoLock@DeviceDockWatcher@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnDisplayEnumerationCompleted_NoLock(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayRemoved_NoLock@DeviceDockWatcher@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@Windows@winrt@@AEBUDeviceInformationUpdate@3456@@Z
    void OnDisplayRemoved_NoLock(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayUpdated@DeviceDockWatcher@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@Windows@winrt@@AEBUDeviceInformationUpdate@3456@@Z
    void OnDisplayUpdated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDockInput_Callback@DeviceDockWatcher@@AEAAXIAEBUhstring@winrt@@AEBUDockInputInfo@@@Z
    void ProcessDockInput_Callback(unsigned int, WindissectOpaque const &, DockInputInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDockedImpl@DeviceDockWatcher@@AEAAJUEventRegistrationToken@@@Z
    long RemoveDockedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEnumerationCompletedImpl@DeviceDockWatcher@@AEAAJUEventRegistrationToken@@@Z
    long RemoveEnumerationCompletedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUndockedImpl@DeviceDockWatcher@@AEAAJUEventRegistrationToken@@@Z
    long RemoveUndockedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUpdatedImpl@DeviceDockWatcher@@AEAAJUEventRegistrationToken@@@Z
    long RemoveUpdatedImpl(EventRegistrationToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoutingPolicyImpl@DeviceDockWatcher@@AEAAJW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z
    long SetRoutingPolicyImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@DeviceDockWatcher@@AEAAJXZ
    long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl_Callback@DeviceDockWatcher@@AEAAJXZ
    long StopImpl_Callback();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class InputDeviceWatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@InputDeviceWatcher@@UEAAJXZ
    virtual long Detach();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTypesSupported@InputDeviceWatcher@@UEAAKXZ
    virtual unsigned long GetInputTypesSupported();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDeviceWatcher@@QEAA@XZ
    InputDeviceWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceArrival@InputDeviceWatcher@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceArrival(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceEnumerationCompleted@InputDeviceWatcher@@UEAAXXZ
    virtual void OnDeviceEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoval@InputDeviceWatcher@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceRemoval(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceUpdate@InputDeviceWatcher@@UEAAXPEBUDeviceInfo@@@Z
    virtual void OnDeviceUpdate(DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnect@InputDeviceWatcher@@UEAAXXZ
    virtual void OnServerDisconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputDeviceWatcher@@QEAAJPEAUIInputDeviceWatcherOwner@@K@Z
    long RuntimeClassInitialize(IInputDeviceWatcherOwner *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCommandToInputDevice@InputDeviceWatcher@@UEAAJKPEAUDeviceCommandMessage@@@Z
    virtual long SendCommandToInputDevice(unsigned long, DeviceCommandMessage *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDeviceWatcher@@MEAA@XZ
    virtual ~InputDeviceWatcher();
};

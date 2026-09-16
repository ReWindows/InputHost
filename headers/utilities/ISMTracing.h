#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class ISMTracing {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_Create_@ISMTracing@@QEAAXPEAX@Z
    void GenericInputHost_Create_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_Destroy_@ISMTracing@@QEAAXPEAX@Z
    void GenericInputHost_Destroy_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_HandlesAllInputFromDevices_@ISMTracing@@QEAAXPEAXK@Z
    void GenericInputHost_HandlesAllInputFromDevices_(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_HandlesAnyInputOfTypes_@ISMTracing@@QEAAXPEAXK@Z
    void GenericInputHost_HandlesAnyInputOfTypes_(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_OnDeviceAttach_@ISMTracing@@QEAAXPEAXPEAUDeviceInfo@@@Z
    void GenericInputHost_OnDeviceAttach_(void *, DeviceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_OnDeviceEnumerationCompleted_@ISMTracing@@QEAAXPEAX@Z
    void GenericInputHost_OnDeviceEnumerationCompleted_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_OnDeviceRemoval_@ISMTracing@@QEAAXPEAXPEAUDeviceInfo@@@Z
    void GenericInputHost_OnDeviceRemoval_(void *, DeviceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_OnInputReport_LogMPC_@ISMTracing@@QEAAXPEAXPEAULegacyInputInfo@@@Z
    void GenericInputHost_OnInputReport_LogMPC_(void *, LegacyInputInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_OnSystemInputDisconnect_@ISMTracing@@QEAAXPEAX@Z
    void GenericInputHost_OnSystemInputDisconnect_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericInputHost_OnSystemInputReconnect_@ISMTracing@@QEAAXPEAX@Z
    void GenericInputHost_OnSystemInputReconnect_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_Create_@ISMTracing@@QEAAXPEAXK@Z
    void InputDeviceWatcher_Create_(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_Destroy_@ISMTracing@@QEAAXPEAX@Z
    void InputDeviceWatcher_Destroy_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_OnDeviceArrival_@ISMTracing@@QEAAXPEAXPEBUDeviceInfo@@@Z
    void InputDeviceWatcher_OnDeviceArrival_(void *, DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_OnDeviceEnumerationCompleted_@ISMTracing@@QEAAXPEAX@Z
    void InputDeviceWatcher_OnDeviceEnumerationCompleted_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_OnDeviceRemoval_@ISMTracing@@QEAAXPEAXPEBUDeviceInfo@@@Z
    void InputDeviceWatcher_OnDeviceRemoval_(void *, DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_OnDeviceUpdate_@ISMTracing@@QEAAXPEAXPEBUDeviceInfo@@@Z
    void InputDeviceWatcher_OnDeviceUpdate_(void *, DeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_OnServerDisconnect_@ISMTracing@@QEAAXPEAX@Z
    void InputDeviceWatcher_OnServerDisconnect_(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceWatcher_SendCommandToInputDevice_@ISMTracing@@QEAAXPEAXKK@Z
    void InputDeviceWatcher_SendCommandToInputDevice_(void *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ISMTracing@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z
    static bool IsVerboseEnabled(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MPCInputObject_InputEventProcessed_AfterEvent_@ISMTracing@@QEAAXI@Z
    void MPCInputObject_InputEventProcessed_AfterEvent_(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MPCInputObject_InputEventProcessed_BeforeEvent_@ISMTracing@@QEAAXI@Z
    void MPCInputObject_InputEventProcessed_BeforeEvent_(unsigned int);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class GenericInputHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GenericInputHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@GenericInputHost@@SAJPEAUIGenericInputHostOwner@@PEAPEAUIInputHostClient@@@Z
    static long Create(IGenericInputHostOwner *, IInputHostClient * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GenericInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GenericInputHost@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GenericInputHost@@IEAA@PEAUIGenericInputHostOwner@@@Z
    GenericInputHost(IGenericInputHostOwner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputDevicesSupported@GenericInputHost@@MEAAKXZ
    virtual unsigned long GetInputDevicesSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTypesSupported@GenericInputHost@@MEAAKXZ
    virtual unsigned long GetInputTypesSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlesAllInputFromDevices@GenericInputHost@@MEAAXK@Z
    virtual void HandlesAllInputFromDevices(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlesAnyInputOfTypes@GenericInputHost@@MEAAXK@Z
    virtual void HandlesAnyInputOfTypes(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceAttach@GenericInputHost@@MEAAJPEAUDeviceInfo@@@Z
    virtual long OnDeviceAttach(DeviceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceEnumerationCompleted@GenericInputHost@@MEAAJXZ
    virtual long OnDeviceEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoval@GenericInputHost@@MEAAJPEAUDeviceInfo@@@Z
    virtual long OnDeviceRemoval(DeviceInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputReport@GenericInputHost@@MEAAJPEAUInputInfo@@@Z
    virtual long OnInputReport(InputInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemInputDisconnect@GenericInputHost@@MEAAJXZ
    virtual long OnSystemInputDisconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemInputReconnect@GenericInputHost@@MEAAJXZ
    virtual long OnSystemInputReconnect();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GenericInputHost@@MEAA@XZ
    virtual ~GenericInputHost();
};

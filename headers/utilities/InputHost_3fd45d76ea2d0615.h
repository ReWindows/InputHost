#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 39 member(s).
class InputHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@InputHost@@UEAAJPEAUIInputHostClient@@@Z
    virtual long Attach(IInputHostClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDeviceWatcher@InputHost@@UEAAJPEAUIInputDeviceWatcherClient@@@Z
    virtual long AttachDeviceWatcher(IInputDeviceWatcherClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InputHost@@SAJPEAPEAUIInputHost@@@Z
    static long Create(IInputHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@InputHost@@UEAAJPEAUIInputHostClient@@@Z
    virtual long Detach(IInputHostClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDeviceWatcher@InputHost@@UEAAJPEAUIInputDeviceWatcherClient@@@Z
    virtual long DetachDeviceWatcher(IInputDeviceWatcherClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@InputHost@@UEAA?AV?$ComPtr@VInputSystemClientConnection@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetConnection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointHandle@InputHost@@UEAAJPEA_K@Z
    virtual long GetEndpointHandle(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputRoutingInfo@InputHost@@UEAAJPEAUtagInputRoutingInfo@@@Z
    virtual long GetInputRoutingInfo(tagInputRoutingInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageSession@InputHost@@UEAAJPEAPEAUIMessageSession@@@Z
    virtual long GetMessageSession(IMessageSession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@InputHost@@UEAAXAEBUtagInputRoutingInfo@@PEBUInputEventPayload@@@Z
    virtual void OnInput(tagInputRoutingInfo const &, InputEventPayload const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputEventStatic@InputHost@@SAJPEAXPEBXH@Z
    static long OnInputEventStatic(void *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnect@InputHost@@UEAAXXZ
    virtual void OnServerDisconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerReconnect@InputHost@@UEAAXXZ
    virtual void OnServerReconnect();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputHost@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@InputHost@@IEAAJXZ
    long Initialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputHost@@IEAA@XZ
    InputHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputEvent@InputHost@@IEAAJPEAUInputEventPayload@@@Z
    long OnInputEvent(InputEventPayload *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputHost@@MEAA@XZ
    virtual ~InputHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastDeviceEventToWatchers@InputHost@@AEAAXPEAUInputEventPayload@@@Z
    void BroadcastDeviceEventToWatchers(InputEventPayload *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputDevicesSupported@InputHost@@AEAAKXZ
    unsigned long GetInputDevicesSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTypesSupported@InputHost@@AEAAKXZ
    unsigned long GetInputTypesSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceInfoCache@InputHost@@AEAAXPEAUInputEventPayload@@@Z
    void UpdateDeviceInfoCache(InputEventPayload *);
};

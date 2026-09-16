#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class CursorDeviceWatcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CursorDeviceWatcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CursorDeviceWatcher@@QEAA@XZ
    CursorDeviceWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@CursorDeviceWatcher@@QEAAJAEBUCursorDeviceInfo@@@Z
    long DeviceAdded(CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@CursorDeviceWatcher@@QEAAJ_K@Z
    long DeviceRemoved(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CursorDeviceWatcher@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CursorDeviceWatcher@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CursorDeviceWatcher@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CursorDeviceWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CursorDeviceWatcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CursorDeviceWatcher@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CursorDeviceWatcher@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Added@CursorDeviceWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVCursorDeviceWatcher@Input@Internal@UI@Windows@@PEAVCursorDeviceWatcherAddedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Added(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnumerationCompleted@CursorDeviceWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVCursorDeviceWatcher@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EnumerationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Removed@CursorDeviceWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVCursorDeviceWatcher@Input@Internal@UI@Windows@@PEAVCursorDeviceWatcherRemovedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Removed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Added@CursorDeviceWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Added(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnumerationCompleted@CursorDeviceWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnumerationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Removed@CursorDeviceWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Removed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CursorDeviceWatcher@@UEAA@XZ
    virtual ~CursorDeviceWatcher();
};

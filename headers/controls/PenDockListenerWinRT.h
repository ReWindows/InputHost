#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class PenDockListenerWinRT {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenDockListenerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PenDockListenerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocked@PenDockListenerWinRT@@QEAAJ_N@Z
    long OnDocked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUndocked@PenDockListenerWinRT@@QEAAJ_N@Z
    long OnUndocked(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PenDockListenerWinRT@@QEAA@XZ
    PenDockListenerWinRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenDockListenerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenDockListenerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PenDockListenerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenDockListenerWinRT@@UEAA@XZ
    virtual ~PenDockListenerWinRT();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeIsSupportedChangedEvent@PenDockListenerWinRT@@MEAAJXZ
    virtual long InvokeIsSupportedChangedEvent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBamoEventConsumerChange@PenDockListenerWinRT@@AEAAXXZ
    void NotifyBamoEventConsumerChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoutingPolicyImpl@PenDockListenerWinRT@@AEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    long SetRoutingPolicyImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DockedImpl@PenDockListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenDockListener@Input@Devices@Windows@@PEAVPenDockedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_DockedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsSupportedChangedImpl@PenDockListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenDockListener@Input@Devices@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_IsSupportedChangedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UndockedImpl@PenDockListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenDockListener@Input@Devices@Windows@@PEAVPenUndockedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_UndockedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DockedImpl@PenDockListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_DockedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsSupportedChangedImpl@PenDockListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_IsSupportedChangedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UndockedImpl@PenDockListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_UndockedImpl(EventRegistrationToken);
};

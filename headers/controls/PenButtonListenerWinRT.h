#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
class PenButtonListenerWinRT {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenButtonListenerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PenButtonListenerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTailButtonClicked@PenButtonListenerWinRT@@QEAAJ_N@Z
    long OnTailButtonClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTailButtonDoubleClicked@PenButtonListenerWinRT@@QEAAJ_N@Z
    long OnTailButtonDoubleClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTailButtonLongPressed@PenButtonListenerWinRT@@QEAAJ_N@Z
    long OnTailButtonLongPressed(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PenButtonListenerWinRT@@QEAA@XZ
    PenButtonListenerWinRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenButtonListenerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenButtonListenerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PenButtonListenerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenButtonListenerWinRT@@UEAA@XZ
    virtual ~PenButtonListenerWinRT();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeIsSupportedChangedEvent@PenButtonListenerWinRT@@MEAAJXZ
    virtual long InvokeIsSupportedChangedEvent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBamoEventConsumerChange@PenButtonListenerWinRT@@AEAAXXZ
    void NotifyBamoEventConsumerChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoutingPolicyImpl@PenButtonListenerWinRT@@AEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    long SetRoutingPolicyImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsSupportedChangedImpl@PenButtonListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_IsSupportedChangedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TailButtonClickedImpl@PenButtonListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAVPenTailButtonClickedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TailButtonClickedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TailButtonDoubleClickedImpl@PenButtonListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAVPenTailButtonDoubleClickedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TailButtonDoubleClickedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TailButtonLongPressedImpl@PenButtonListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenButtonListener@Input@Devices@Windows@@PEAVPenTailButtonLongPressedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TailButtonLongPressedImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsSupportedChangedImpl@PenButtonListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_IsSupportedChangedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TailButtonClickedImpl@PenButtonListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_TailButtonClickedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TailButtonDoubleClickedImpl@PenButtonListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_TailButtonDoubleClickedImpl(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TailButtonLongPressedImpl@PenButtonListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_TailButtonLongPressedImpl(EventRegistrationToken);
};

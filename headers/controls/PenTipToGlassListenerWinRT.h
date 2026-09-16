#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class PenTipToGlassListenerWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenTipToGlassListenerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PenTipToGlassListenerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTipToGlass@PenTipToGlassListenerWinRT@@QEAAJI@Z
    long OnTipToGlass(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenTipToGlassListenerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenTipToGlassListenerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PenTipToGlassListenerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenTipToGlassListenerWinRT@@UEAA@XZ
    virtual ~PenTipToGlassListenerWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBamoEventConsumerChange@PenTipToGlassListenerWinRT@@AEAAXXZ
    void NotifyBamoEventConsumerChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TipToGlassImpl@PenTipToGlassListenerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVPenTipToGlassListener@Input@Devices@Internal@Windows@@PEAVPenTipToGlassEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TipToGlassImpl(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TipToGlassImpl@PenTipToGlassListenerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long remove_TipToGlassImpl(EventRegistrationToken);
};

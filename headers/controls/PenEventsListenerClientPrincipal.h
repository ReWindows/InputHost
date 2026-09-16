#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class PenEventsListenerClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PenEventsListenerClientPrincipal@@QEAA@PEAVInputSystemClientConnection@@_N@Z
    PenEventsListenerClientPrincipal(InputSystemClientConnection *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenEventsListenerClientPrincipal@@UEAA@XZ
    virtual ~PenEventsListenerClientPrincipal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectBamo@PenEventsListenerClientPrincipal@@IEAAXW4ConnectOperation@1@@Z
    void ConnectBamo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DockEventsEnabledChanged@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long DockEventsEnabledChanged(BamoPenEventsClientStub *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Docked@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long Docked(BamoPenEventsClientStub *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@@Z
    virtual long OnStubDisconnected(BamoPenEventsClientStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonClicked@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long TailButtonClicked(BamoPenEventsClientStub *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonDoubleClicked@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long TailButtonDoubleClicked(BamoPenEventsClientStub *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonEventsEnabledChanged@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long TailButtonEventsEnabledChanged(BamoPenEventsClientStub *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonLongPressed@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long TailButtonLongPressed(BamoPenEventsClientStub *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TipToGlass@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@I@Z
    virtual long TipToGlass(BamoPenEventsClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Undocked@PenEventsListenerClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@_N@Z
    virtual long Undocked(BamoPenEventsClientStub *, bool);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class PenListenerWinRTBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEventsEnabledChanged@PenListenerWinRTBase@@QEAAJ_N@Z
    long OnEventsEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PenListenerWinRTBase@@QEAAJ_N@Z
    long RuntimeClassInitialize(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenListenerWinRTBase@@QEAA@XZ
    ~PenListenerWinRTBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedImpl@PenListenerWinRTBase@@IEAAJPEAE@Z
    long IsSupportedImpl(unsigned char *);
};

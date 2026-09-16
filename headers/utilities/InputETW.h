#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class InputETW {
public:
    class DragNDrop;
    class InputGesture;
    class InputHost;
    class Resize;
    class SystemButtonEventControllerPrincipal;
    class UIAHitTest;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z
    static uint64_t CalculateElapsedMicroseconds(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@InputETW@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerboseEnabled@InputETW@@SA_N_K@Z
    static bool IsVerboseEnabled(uint64_t);
};

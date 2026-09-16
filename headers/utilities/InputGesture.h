#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace InputETW {
class InputGesture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStartedReceived@InputGesture@InputETW@@SAXK_K0@Z
    static void AnimationStartedReceived(unsigned long, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelOperation@InputGesture@InputETW@@SAXK@Z
    static void CancelOperation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureCancelledReceived@InputGesture@InputETW@@SAXKPEBUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z
    static void GestureCancelledReceived(unsigned long, tagPOINT const *, tagPOINT const *, tagPOINT const *, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureEndedReceived@InputGesture@InputETW@@SAXKPEBUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z
    static void GestureEndedReceived(unsigned long, tagPOINT const *, tagPOINT const *, tagPOINT const *, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureStartedReceived@InputGesture@InputETW@@SAXKPEBUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I11@Z
    static void GestureStartedReceived(unsigned long, tagPOINT const *, tagPOINT const *, tagPOINT const *, uint64_t, int, uint64_t, unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@InputGesture@InputETW@@SAXK@Z
    static void StartAnimation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperation@InputGesture@InputETW@@SAXK@Z
    static void StartOperation(unsigned long);
};
} // namespace InputETW

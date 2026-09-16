#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace InputTraceLogging {
class Haptics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToISM@Haptics@InputTraceLogging@@SAX_N_J@Z
    static void ConnectToISM(bool, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI@Z
    static void SendHapticFeedbackForDuration(int, unsigned short, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMII@Z
    static void SendHapticFeedbackForPlayCount(int, unsigned short, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFeedback@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z
    static void StopFeedback(int);
};
} // namespace InputTraceLogging

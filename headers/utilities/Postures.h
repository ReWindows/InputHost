#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace InputTraceLogging {
class Postures {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePosture@Postures@InputTraceLogging@@SAXPEAUHWND__@@W4DevicePostureMode@Input@Internal@UI@Windows@@1@Z
    static void ChangePosture(HWND__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateConvertibility@Postures@InputTraceLogging@@SAXK_NK0@Z
    static void EvaluateConvertibility(unsigned long, bool, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z
    static void EvaluateDisplayConfig(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z
    static void EvaluatePosture(int, bool, unsigned long, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z
    static void EvaluatePostureRemote(int, bool, bool);
};
} // namespace InputTraceLogging

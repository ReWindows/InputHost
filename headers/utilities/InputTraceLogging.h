#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
class InputTraceLogging {
public:
    class ActivatableEntity;
    class ActivationController;
    class ActivationWatcher;
    class DeviceDock;
    class ForegroundManagerClient;
    class Haptics;
    class LightDismiss;
    class Magnifier;
    class Mouse;
    class Postures;
    class ShellGestures;
    class VirtualTouchpad;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z
    static void Callback(_GUID const *, unsigned long, unsigned char, uint64_t, uint64_t, _EVENT_FILTER_DESCRIPTOR *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Windows@@@Z
    static char const * DevicePostureModeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z
    static char const * InputMessageDeviceTypeToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MagnifierGestureStateToString@InputTraceLogging@@CAPEBDW4MagnifierGestureState@Input@Internal@UI@Windows@@@Z
    static char const * MagnifierGestureStateToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeIdToString@InputTraceLogging@@CAPEBDTSystemCursorShapeIdDetails@@@Z
    static char const * ShapeIdToString(SystemCursorShapeIdDetails);
};

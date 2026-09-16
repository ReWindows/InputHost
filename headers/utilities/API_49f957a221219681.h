#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
namespace InputTraceLogging::Cursor {
class API {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllDevices@API@Cursor@InputTraceLogging@@SAXXZ
    static void ClearAllDevices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursor@API@Cursor@InputTraceLogging@@SAX_K@Z
    static void CreateCursor(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@API@Cursor@InputTraceLogging@@SAX_K@Z
    static void DeviceAdded(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@API@Cursor@InputTraceLogging@@SAX_K@Z
    static void DeviceRemoved(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorMagnification@API@Cursor@InputTraceLogging@@SAX_KM@Z
    static void SetCursorMagnification(uint64_t, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemCursor@API@Cursor@InputTraceLogging@@SAX_K0PEAUHSTRING__@@@Z
    static void SetSystemCursor(uint64_t, uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WatcherDeviceAddedEvent@API@Cursor@InputTraceLogging@@SAX_K@Z
    static void WatcherDeviceAddedEvent(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WatcherDeviceRemovedEvent@API@Cursor@InputTraceLogging@@SAX_K@Z
    static void WatcherDeviceRemovedEvent(uint64_t);
};
} // namespace InputTraceLogging::Cursor

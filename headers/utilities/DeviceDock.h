#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace InputTraceLogging {
class DeviceDock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientDocked@DeviceDock@InputTraceLogging@@SAXPEBXAEBUDockInputIdentity@@PEBG2AEBURect@Foundation@Windows@winrt@@@Z
    static void ClientDocked(void const *, DockInputIdentity const &, unsigned short const *, unsigned short const *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientEnumerationCompleted@DeviceDock@InputTraceLogging@@SAXPEBX@Z
    static void ClientEnumerationCompleted(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientReceiveInput@DeviceDock@InputTraceLogging@@SAXPEBXAEBUDockInputIdentity@@_NAEBUtagRECT@@@Z
    static void ClientReceiveInput(void const *, DockInputIdentity const &, bool, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientUndocked@DeviceDock@InputTraceLogging@@SAXPEBXAEBUDockInputIdentity@@PEBG2@Z
    static void ClientUndocked(void const *, DockInputIdentity const &, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientUpdated@DeviceDock@InputTraceLogging@@SAXPEBXAEBUDockInputIdentity@@PEBG2AEBURect@Foundation@Windows@winrt@@@Z
    static void ClientUpdated(void const *, DockInputIdentity const &, unsigned short const *, unsigned short const *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z
    static void CreateClient(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z
    static void DestroyClient(void const *);
};
} // namespace InputTraceLogging

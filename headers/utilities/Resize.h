#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace InputETW {
class Resize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataSourceReader@Resize@InputETW@@SAX_K00_N@Z
    static void DataSourceReader(uint64_t, uint64_t, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeCancelledReceived@Resize@InputETW@@SAXKIIUtagPOINT@@0@Z
    static void ResizeCancelledReceived(unsigned long, unsigned int, unsigned int, tagPOINT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeEndedReceived@Resize@InputETW@@SAXKUtagPOINT@@0@Z
    static void ResizeEndedReceived(unsigned long, tagPOINT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeInProgressReceived@Resize@InputETW@@SAXKUtagPOINT@@0@Z
    static void ResizeInProgressReceived(unsigned long, tagPOINT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStartedReceived@Resize@InputETW@@SAXKIIUtagPOINT@@0@Z
    static void ResizeStartedReceived(unsigned long, unsigned int, unsigned int, tagPOINT, tagPOINT);
};
} // namespace InputETW

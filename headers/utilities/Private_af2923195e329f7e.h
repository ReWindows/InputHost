#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace InputDropTarget {
class Private {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ChangeHostingContext@Private@InputDropTarget@@UEAAJPEAUHWND__@@I@Z
    virtual long ChangeHostingContext(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachInputHandle@Private@InputDropTarget@@UEAAJPEAPEAX@Z
    virtual long DetachInputHandle(void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@InputDropTarget@@QEAA@XZ
    Private();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputHandle@Private@InputDropTarget@@UEAAJPEAPEAX@Z
    virtual long get_InputHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@Private@InputDropTarget@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_WindowHandle(HWND__* *);
};
} // namespace InputDropTarget

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace SystemCursors {
class WicCursorSourceReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WicCursorSourceReader@SystemCursors@@QEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WicCursorSourceReader@SystemCursors@@QEAA@XZ
    ~WicCursorSourceReader();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHotspotOffset@WicCursorSourceReader@SystemCursors@@AEAAJIAEAG0@Z
    long GetHotspotOffset(unsigned int, unsigned short &, unsigned short &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromWic@WicCursorSourceReader@SystemCursors@@AEAAJXZ
    long ReadFromWic();
};
} // namespace SystemCursors

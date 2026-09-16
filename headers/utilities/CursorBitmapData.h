#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 2 member(s).
namespace SystemCursors {
class CursorBitmapData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBitmap@CursorBitmapData@SystemCursors@@QEAAJXZ
    long AllocateBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillOutBamoHeader@CursorBitmapData@SystemCursors@@QEAAXIPEAUCursorBitmapDataHeader@@@Z
    void FillOutBamoHeader(unsigned int, CursorBitmapDataHeader *);
};
} // namespace SystemCursors

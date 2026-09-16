#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace InputTraceLogging::Cursor {
class CursorClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapCursorShape@CursorClient@Cursor@InputTraceLogging@@SAX_K@Z
    static void CreateBitmapCursorShape(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomCursorShape@CursorClient@Cursor@InputTraceLogging@@SAX_K@Z
    static void CreateCustomCursorShape(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCustomCursorShape@CursorClient@Cursor@InputTraceLogging@@SAX_K@Z
    static void DestroyCustomCursorShape(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlyph@CursorClient@Cursor@InputTraceLogging@@SAXUCursorId@@_K@Z
    static void SetGlyph(CursorId, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocked@CursorClient@Cursor@InputTraceLogging@@SAXUCursorId@@_N@Z
    static void SetLocked(CursorId, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@CursorClient@Cursor@InputTraceLogging@@SAXUCursorId@@_N@Z
    static void SetVisibility(CursorId, bool);
};
} // namespace InputTraceLogging::Cursor

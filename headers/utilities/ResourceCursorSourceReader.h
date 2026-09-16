#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace SystemCursors {
class ResourceCursorSourceReader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceCursorSourceReader@SystemCursors@@QEAA@IPEAUHINSTANCE__@@PEBG1@Z
    ResourceCursorSourceReader(unsigned int, HINSTANCE__*, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceCursorSourceReader@SystemCursors@@QEAA@XZ
    ~ResourceCursorSourceReader();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDecoder@ResourceCursorSourceReader@SystemCursors@@MEAAJXZ
    virtual long InitializeDecoder();
};
} // namespace SystemCursors

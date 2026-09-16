#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace SystemCursors {
class FileCursorSourceReader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileCursorSourceReader@SystemCursors@@QEAA@IPEBG@Z
    FileCursorSourceReader(unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileCursorSourceReader@SystemCursors@@QEAA@XZ
    ~FileCursorSourceReader();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDecoder@FileCursorSourceReader@SystemCursors@@MEAAJXZ
    virtual long InitializeDecoder();
};
} // namespace SystemCursors

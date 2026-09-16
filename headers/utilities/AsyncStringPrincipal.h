#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class AsyncStringPrincipal {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@H@Z
    virtual long SetError(BamoAsyncResult_string_Stub *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@AsyncStringPrincipal@@UEAAJPEAVBamoAsyncResult_string_Stub@@PEBG@Z
    virtual long SetResult(BamoAsyncResult_string_Stub *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncStringPrincipal@@UEAA@XZ
    virtual ~AsyncStringPrincipal();
};

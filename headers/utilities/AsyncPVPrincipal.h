#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class AsyncPVPrincipal {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z
    virtual long SetError(BamoAsyncResult_PROPVARIANT_Stub *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@AEBUtagPROPVARIANT@@@Z
    virtual long SetResult(BamoAsyncResult_PROPVARIANT_Stub *, tagPROPVARIANT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncPVPrincipal@@UEAA@XZ
    virtual ~AsyncPVPrincipal();
};

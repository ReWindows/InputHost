#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class MPCConstantManagerClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCConstantManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCConstantManagerClient@@@Z
    MPCConstantManagerClientPrincipal(MPCManagerClientConnection *, MPCConstantManagerClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z
    virtual long OnConstantChanged(BamoMPCConstantManagerClientCallbacksStub *, int, unsigned short const *, tagPROPVARIANT const &, tagPROPVARIANT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MPCConstantManagerClientPrincipal@@UEAA@XZ
    virtual ~MPCConstantManagerClientPrincipal();
};

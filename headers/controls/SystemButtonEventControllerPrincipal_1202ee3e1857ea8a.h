#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class SystemButtonEventControllerPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemButtonEventControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAVSystemButtonEventControllerWinRT@@@Z
    SystemButtonEventControllerPrincipal(::ISMBamos_AutoBamos::BamoConnection *, SystemButtonEventControllerWinRT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemButtonEvent@SystemButtonEventControllerPrincipal@@MEAAJPEAVBamoSystemButtonEventControllerStub@@AEBUSystemButtonEventInfo@@@Z
    virtual long OnSystemButtonEvent(BamoSystemButtonEventControllerStub *, SystemButtonEventInfo const &);
};

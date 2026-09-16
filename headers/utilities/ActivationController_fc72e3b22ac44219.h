#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class ActivationController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAVActivationControllerWinRT@@@Z
    ActivationController(::ISMBamos_AutoBamos::BamoConnection *, ActivationControllerWinRT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatedChanged@ActivationController@@MEAAJPEAVBamoActivationControllerStub@@@Z
    virtual long OnActivatedChanged(BamoActivationControllerStub *);
};

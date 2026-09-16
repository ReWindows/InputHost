#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class AttachableInputObjectSample {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AttachableInputObjectSample@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAUIAttachableInputObjectSampleOwner@@@Z
    AttachableInputObjectSample(::ISMBamos_AutoBamos::BamoConnection *, IAttachableInputObjectSampleOwner *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@AttachableInputObjectSample@@MEAAJPEAVBamoAttachableInputObjectSampleStub@@_J1PEBG@Z
    virtual long OnInput(BamoAttachableInputObjectSampleStub *, int64_t, int64_t, unsigned short const *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class ActivationListenerInputObject {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationListenerInputObject@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAUIActivationListenerInputObjectOwner@@@Z
    ActivationListenerInputObject(::ISMBamos_AutoBamos::BamoConnection *, IActivationListenerInputObjectOwner *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivate@ActivationListenerInputObject@@MEAAJPEAVBamoActivationListenerInputObjectStub@@W4InputActivationState@Input@UI@Windows@@@Z
    virtual long OnActivate(BamoActivationListenerInputObjectStub *, int);
};

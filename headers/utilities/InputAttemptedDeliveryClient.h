#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class InputAttemptedDeliveryClient {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputAttemptedDeliveryClient@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@IPEAUIInputDeliveryClientInputAttemptedCallback@@@Z
    InputAttemptedDeliveryClient(::ISMBamos_AutoBamos::BamoConnection *, unsigned int, IInputDeliveryClientInputAttemptedCallback *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputAttempted@InputAttemptedDeliveryClient@@MEAAJPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long InputAttempted(BamoInputAttemptedDeliveryClientStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputAttemptedDeliveryClient@@MEAAJPEAVBamoInputAttemptedDeliveryClientStub@@@Z
    virtual long OnStubDisconnected(BamoInputAttemptedDeliveryClientStub *);
};

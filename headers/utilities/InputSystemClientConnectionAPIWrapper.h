#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class InputSystemClientConnectionAPIWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputAttemptedDeliveryClient@InputSystemClientConnectionAPIWrapper@@UEAA?AV?$ComPtr@UIInputAttemptedDeliveryClient@@@WRL@Microsoft@@IPEAUIInputDeliveryClientInputAttemptedCallback@@@Z
    virtual WindissectOpaque CreateInputAttemptedDeliveryClient(unsigned int, IInputDeliveryClientInputAttemptedCallback *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputSystemClientConnectionAPIWrapper@@UEAA@XZ
    virtual ~InputSystemClientConnectionAPIWrapper();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class InputSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildServerRegistrationMessage@InputSource@@QEBA?AUInputDeliveryServerMessage@@XZ
    InputDeliveryServerMessage BuildServerRegistrationMessage() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputCallback@InputSource@@QEAAXAEBUtagInputRoutingInfo@@AEBV?$ComPtr@UIInputDeliveryClientInputCallback@@@WRL@Microsoft@@@Z
    void SetInputCallback(tagInputRoutingInfo const &, WindissectOpaque const &);
};

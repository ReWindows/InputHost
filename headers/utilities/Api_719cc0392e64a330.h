#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace ActivationConfigurationInputObjectWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ActivationConfigurationInputObjectWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivatePolicy@Api@ActivationConfigurationInputObjectWinRT@@UEAAJPEAW4ActivatePolicy@Input@Internal@UI@Windows@@@Z
    virtual long get_ActivatePolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EatPolicy@Api@ActivationConfigurationInputObjectWinRT@@UEAAJPEAW4EatPolicy@Input@Internal@UI@Windows@@@Z
    virtual long get_EatPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivatePolicy@Api@ActivationConfigurationInputObjectWinRT@@UEAAJW4ActivatePolicy@Input@Internal@UI@Windows@@@Z
    virtual long put_ActivatePolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EatPolicy@Api@ActivationConfigurationInputObjectWinRT@@UEAAJW4EatPolicy@Input@Internal@UI@Windows@@@Z
    virtual long put_EatPolicy(int);
};
} // namespace ActivationConfigurationInputObjectWinRT

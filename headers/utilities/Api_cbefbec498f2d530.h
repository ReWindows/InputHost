#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace InputDelegationInputObjectWinRT {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessIDDelegation@Api@InputDelegationInputObjectWinRT@@UEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    virtual long SetProcessIDDelegation(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewIDDelegation@Api@InputDelegationInputObjectWinRT@@UEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    virtual long SetViewIDDelegation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GamepadInputReceived@Api@InputDelegationInputObjectWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDelegationInputObject@Input@Internal@UI@Windows@@PEAVGamepadInputReceivedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GamepadInputReceived(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GamepadInterceptionStarted@Api@InputDelegationInputObjectWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDelegationInputObject@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GamepadInterceptionStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyboardInputDelegated@Api@InputDelegationInputObjectWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVInputDelegationInputObject@Input@Internal@UI@Windows@@PEAVKeyboardInputDelegatedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyboardInputDelegated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GamepadInterceptionEnabled@Api@InputDelegationInputObjectWinRT@@UEAAJPEAE@Z
    virtual long get_GamepadInterceptionEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GamepadKeyRoutingEnabled@Api@InputDelegationInputObjectWinRT@@UEAAJPEAE@Z
    virtual long get_GamepadKeyRoutingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GamepadMouseModeEnabled@Api@InputDelegationInputObjectWinRT@@UEAAJPEAE@Z
    virtual long get_GamepadMouseModeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GamepadInterceptionEnabled@Api@InputDelegationInputObjectWinRT@@UEAAJE@Z
    virtual long put_GamepadInterceptionEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GamepadKeyRoutingEnabled@Api@InputDelegationInputObjectWinRT@@UEAAJE@Z
    virtual long put_GamepadKeyRoutingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GamepadMouseModeEnabled@Api@InputDelegationInputObjectWinRT@@UEAAJE@Z
    virtual long put_GamepadMouseModeEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GamepadInputReceived@Api@InputDelegationInputObjectWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GamepadInputReceived(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GamepadInterceptionStarted@Api@InputDelegationInputObjectWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GamepadInterceptionStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyboardInputDelegated@Api@InputDelegationInputObjectWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyboardInputDelegated(EventRegistrationToken);
};
} // namespace InputDelegationInputObjectWinRT

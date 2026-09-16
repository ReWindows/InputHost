#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 18 member(s).
namespace KeyboardInputWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@KeyboardInputWinRT@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentKeyState@Api@KeyboardInputWinRT@@UEAAJW4VirtualKey@System@Windows@@PEAW4CoreVirtualKeyStates@Core@UI@5@@Z
    virtual long GetCurrentKeyState(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyState@Api@KeyboardInputWinRT@@UEAAJW4VirtualKey@System@Windows@@PEAW4CoreVirtualKeyStates@Core@UI@5@@Z
    virtual long GetKeyState(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AcceleratorKeyActivated@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVAcceleratorKeyEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_AcceleratorKeyActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CharacterReceived@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVCharacterReceivedEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CharacterReceived(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextMenuKey@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVContextMenuKeyEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextMenuKey(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyDown@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVKeyEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyDown(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyUp@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVKeyEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyUp(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SysKeyDown@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVKeyEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SysKeyDown(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SysKeyUp@Api@KeyboardInputWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVKeyboardInput@Input@Internal@UI@Windows@@PEAVKeyEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SysKeyUp(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentKeyEventDeviceId@Api@KeyboardInputWinRT@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentKeyEventDeviceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AcceleratorKeyActivated@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AcceleratorKeyActivated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CharacterReceived@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CharacterReceived(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextMenuKey@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextMenuKey(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyDown@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyUp@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyUp(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SysKeyDown@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SysKeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SysKeyUp@Api@KeyboardInputWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SysKeyUp(EventRegistrationToken);
};
} // namespace KeyboardInputWinRT

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
namespace VirtualTouchpadControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@VirtualTouchpadControllerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ReceivingInputChanged@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVVirtualTouchpadController@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ReceivingInputChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UserSettingsChanged@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVVirtualTouchpadController@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_UserSettingsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAE@Z
    virtual long get_IsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryClickZone@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    virtual long get_PrimaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReceivingInput@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAE@Z
    virtual long get_ReceivingInput(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryClickZone@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    virtual long get_SecondaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    virtual long get_Size(::Windows::UI::Internal::Input::VirtualTouchpadSize *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypingDefensesEnabled@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAE@Z
    virtual long get_TypingDefensesEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserSettings@Api@VirtualTouchpadControllerWinRT@@UEAAJPEAUTouchpadUserSettings@Input@Internal@UI@Windows@@@Z
    virtual long get_UserSettings(::Windows::UI::Internal::Input::TouchpadUserSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsActive@Api@VirtualTouchpadControllerWinRT@@UEAAJE@Z
    virtual long put_IsActive(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PrimaryClickZone@Api@VirtualTouchpadControllerWinRT@@UEAAJUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    virtual long put_PrimaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SecondaryClickZone@Api@VirtualTouchpadControllerWinRT@@UEAAJUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    virtual long put_SecondaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@Api@VirtualTouchpadControllerWinRT@@UEAAJUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    virtual long put_Size(::Windows::UI::Internal::Input::VirtualTouchpadSize);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TypingDefensesEnabled@Api@VirtualTouchpadControllerWinRT@@UEAAJE@Z
    virtual long put_TypingDefensesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ReceivingInputChanged@Api@VirtualTouchpadControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ReceivingInputChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UserSettingsChanged@Api@VirtualTouchpadControllerWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UserSettingsChanged(EventRegistrationToken);
};
} // namespace VirtualTouchpadControllerWinRT

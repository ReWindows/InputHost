#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace InputEdgyNotificationSource {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputEdgyNotificationSource@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EdgyRecognized@Api@InputEdgyNotificationSource@@UEAAJPEAU?$ITypedEventHandler@PEAVInputEdgyNotificationSource@Input@Internal@UI@Windows@@PEAVEdgyRecognizedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EdgyRecognized(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureRecognitionConfiguration@Api@InputEdgyNotificationSource@@UEAAJPEAPEAUIEdgyGestureRecognitionConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long get_GestureRecognitionConfiguration(::Windows::UI::Internal::Input::IEdgyGestureRecognitionConfiguration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoutingMode@Api@InputEdgyNotificationSource@@UEAAJPEAW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    virtual long get_RoutingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureRecognitionConfiguration@Api@InputEdgyNotificationSource@@UEAAJPEAUIEdgyGestureRecognitionConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long put_GestureRecognitionConfiguration(::Windows::UI::Internal::Input::IEdgyGestureRecognitionConfiguration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RoutingMode@Api@InputEdgyNotificationSource@@UEAAJW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    virtual long put_RoutingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EdgyRecognized@Api@InputEdgyNotificationSource@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EdgyRecognized(EventRegistrationToken);
};
} // namespace InputEdgyNotificationSource

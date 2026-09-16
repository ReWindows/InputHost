#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
namespace ActivationWatcher {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@Api@ActivationWatcher@@UEAAJ_KE@Z
    virtual long Activate(uint64_t, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ActivationWatcher@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSpatialActivation@Api@ActivationWatcher@@UEAAJ_KE@Z
    virtual long EnableSpatialActivation(uint64_t, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@Api@ActivationWatcher@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Api@ActivationWatcher@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivatableEntityAdded@Api@ActivationWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationWatcher@Input@Internal@UI@Windows@@PEAVActivationWatcherEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivatableEntityAdded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivatableEntityRemoved@Api@ActivationWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationWatcher@Input@Internal@UI@Windows@@PEAVActivationWatcherEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivatableEntityRemoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivationChanged@Api@ActivationWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationWatcher@Input@Internal@UI@Windows@@PEAVActivationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActivationRequested@Api@ActivationWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationWatcher@Input@Internal@UI@Windows@@PEAVActivationRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ActivationRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EnumerationCompleted@Api@ActivationWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationWatcher@Input@Internal@UI@Windows@@PEAVActivationWatcherEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EnumerationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Stopped@Api@ActivationWatcher@@UEAAJPEAU?$ITypedEventHandler@PEAVActivationWatcher@Input@Internal@UI@Windows@@PEAVActivationWatcherEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Stopped(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationWatcherStatus@Api@ActivationWatcher@@UEAAJPEAW4ActivationWatcherStatus@Input@Internal@UI@Windows@@@Z
    virtual long get_ActivationWatcherStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveEntity@Api@ActivationWatcher@@UEAAJPEAPEAUIActivatableEntity@Input@Internal@UI@Windows@@@Z
    virtual long get_ActiveEntity(::Windows::UI::Internal::Input::IActivatableEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivatableEntityAdded@Api@ActivationWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivatableEntityAdded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivatableEntityRemoved@Api@ActivationWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivatableEntityRemoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivationChanged@Api@ActivationWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActivationRequested@Api@ActivationWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActivationRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EnumerationCompleted@Api@ActivationWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EnumerationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Stopped@Api@ActivationWatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Stopped(EventRegistrationToken);
};
} // namespace ActivationWatcher

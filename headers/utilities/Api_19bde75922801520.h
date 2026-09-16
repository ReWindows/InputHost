#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace MPCInputObject {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@MPCInputObject@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AugmentedInputEvent@Api@MPCInputObject@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCInputObject@Input@Internal@UI@Windows@@PEAVPrivAugmentedInputEventArgs@3Spatial@245@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_AugmentedInputEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HandEvent@Api@MPCInputObject@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCInputObject@Input@Internal@UI@Windows@@PEAVPrivHandEventArgs@3Spatial@245@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HandEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VoiceEvent@Api@MPCInputObject@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCInputObject@Input@Internal@UI@Windows@@PEAVPrivVoiceEventArgs@3Spatial@245@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VoiceEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CalledGetDetectedSourcesAtTimestampRecently@Api@MPCInputObject@@UEAAJPEAE@Z
    virtual long get_CalledGetDetectedSourcesAtTimestampRecently(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventSubscriptions@Api@MPCInputObject@@UEAAJPEAI@Z
    virtual long get_EventSubscriptions(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CalledGetDetectedSourcesAtTimestampRecently@Api@MPCInputObject@@UEAAJE@Z
    virtual long put_CalledGetDetectedSourcesAtTimestampRecently(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EventSubscriptions@Api@MPCInputObject@@UEAAJI@Z
    virtual long put_EventSubscriptions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AugmentedInputEvent@Api@MPCInputObject@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AugmentedInputEvent(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HandEvent@Api@MPCInputObject@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HandEvent(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VoiceEvent@Api@MPCInputObject@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VoiceEvent(EventRegistrationToken);
};
} // namespace MPCInputObject

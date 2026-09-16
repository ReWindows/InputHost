#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace AttachableInputObjectSampleWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@AttachableInputObjectSampleWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OnInput@Api@AttachableInputObjectSampleWinRT@@UEAAJPEAU?$ITypedEventHandler@PEAVAttachableInputObjectSample@Input@Internal@UI@Windows@@PEAVAttachableInputObjectSampleEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OnInput(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enabled@Api@AttachableInputObjectSampleWinRT@@UEAAJPEAE@Z
    virtual long get_Enabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Enabled@Api@AttachableInputObjectSampleWinRT@@UEAAJE@Z
    virtual long put_Enabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OnInput@Api@AttachableInputObjectSampleWinRT@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OnInput(EventRegistrationToken);
};
} // namespace AttachableInputObjectSampleWinRT

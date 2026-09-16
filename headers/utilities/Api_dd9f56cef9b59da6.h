#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace ShellHandwritingHost {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ShellHandwritingHost@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InkPointsTransferred@Api@ShellHandwritingHost@@UEAAJPEAU?$ITypedEventHandler@PEAVShellHandwritingHost@Input@Internal@UI@Windows@@PEAVShellHandwritingTransferEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_InkPointsTransferred(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InkPointsTransferred@Api@ShellHandwritingHost@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InkPointsTransferred(EventRegistrationToken);
};
} // namespace ShellHandwritingHost

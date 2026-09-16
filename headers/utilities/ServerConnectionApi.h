#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace MPCInputObject {
class ServerConnectionApi {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ServerConnectionApi@MPCInputObject@@QEAA@XZ
    ServerConnectionApi();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ServerConnectionChanged@ServerConnectionApi@MPCInputObject@@UEAAJPEAU?$ITypedEventHandler@PEAUIServerConnection@Input@Internal@UI@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ServerConnectionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsServerConnected@ServerConnectionApi@MPCInputObject@@UEAAJPEAE@Z
    virtual long get_IsServerConnected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ServerConnectionChanged@ServerConnectionApi@MPCInputObject@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ServerConnectionChanged(EventRegistrationToken);
};
} // namespace MPCInputObject

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace IslandSiteInputSiteWinRT {
class Private2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIsland_Callback@Private2@IslandSiteInputSiteWinRT@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    virtual long ConnectIsland_Callback(::Windows::UI::Internal::Input::IInputSite *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectedIslandInputSite@Private2@IslandSiteInputSiteWinRT@@UEAAAEBV?$ComPtr@UIInputSiteForIslandPrivate@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque const & GetConnectedIslandInputSite();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private2@IslandSiteInputSiteWinRT@@QEAA@XZ
    Private2();
};
} // namespace IslandSiteInputSiteWinRT

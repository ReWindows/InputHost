#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace IslandInputSiteWinRTBase {
class Private2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateVisual@Private2@IslandInputSiteWinRTBase@@UEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long AssociateVisual(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIslandSite@Private2@IslandInputSiteWinRTBase@@UEAAXPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    virtual void ConnectIslandSite(::Windows::UI::Internal::Input::IInputSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputWindow_Callback@Private2@IslandInputSiteWinRTBase@@UEAAJPEAUHWND__@@I@Z
    virtual long CreateInputWindow_Callback(HWND__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssociatedVisual@Private2@IslandInputSiteWinRTBase@@UEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long GetAssociatedVisual(::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectedIslandSiteInputSite@Private2@IslandInputSiteWinRTBase@@UEAAAEBV?$ComPtr@UIInputSiteForIslandSitePrivate@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque const & GetConnectedIslandSiteInputSite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociatedVisual@Private2@IslandInputSiteWinRTBase@@UEAA_NPEAUIVisual@Composition@UI@Windows@@@Z
    virtual bool IsAssociatedVisual(::Windows::UI::Composition::IVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private2@IslandInputSiteWinRTBase@@QEAA@XZ
    Private2();
};
} // namespace IslandInputSiteWinRTBase

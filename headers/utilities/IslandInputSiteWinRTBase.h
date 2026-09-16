#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class IslandInputSiteWinRTBase {
public:
    class Partner;
    class Private2;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIslandSite@IslandInputSiteWinRTBase@@QEAAXPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    void ConnectIslandSite(::Windows::UI::Internal::Input::IInputSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@IslandInputSiteWinRTBase@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowId@IslandInputSiteWinRTBase@@QEAAJPEA_K@Z
    long GetWindowId(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IslandInputSiteWinRTBase@@UEAA@XZ
    virtual ~IslandInputSiteWinRTBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputSinkForAssociatedVisual@IslandInputSiteWinRTBase@@IEAAXPEAUHWND__@@I@Z
    void CreateInputSinkForAssociatedVisual(HWND__*, unsigned int);
};

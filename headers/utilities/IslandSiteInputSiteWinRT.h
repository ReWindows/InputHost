#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class IslandSiteInputSiteWinRT {
public:
    class Private2;
    class SystemOnly_Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@IslandSiteInputSiteWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIsland_Callback@IslandSiteInputSiteWinRT@@QEAAXPEAUIInputSiteForIslandPrivate@@@Z
    void ConnectIsland_Callback(IInputSiteForIslandPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@IslandSiteInputSiteWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@IslandSiteInputSiteWinRT@@UEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@IslandSiteInputSiteWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@IslandSiteInputSiteWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@IslandSiteInputSiteWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@W4InputSiteIdNamespace@@_K_JPEAUIVisual@Composition@UI@Windows@@AEBUInputSiteForIslandSiteConfiguration@Input@Internal@89@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, uint64_t, int64_t, ::Windows::UI::Composition::IVisual *, ::Windows::UI::Internal::Input::InputSiteForIslandSiteConfiguration const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus_Callback@IslandSiteInputSiteWinRT@@QEAAJPEA_N@Z
    long SetFocus_Callback(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIASize@IslandSiteInputSiteWinRT@@QEAAJHH@Z
    long SetUIASize(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IslandSiteInputSiteWinRT@@UEAA@XZ
    virtual ~IslandSiteInputSiteWinRT();
};

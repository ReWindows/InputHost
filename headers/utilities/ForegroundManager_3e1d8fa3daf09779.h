#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace winrt::Windows::UI::Internal::Input::implementation {
class ForegroundManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentForeground@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@QEAA?AUForegroundActivatableItemInfo@34567@XZ
    WindissectOpaque CurrentForeground();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@QEAA@W4ForegroundManagerScope@23456@@Z
    ForegroundManager(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatableEntityAdded@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@UEAAXPEAVBamoActivatableEntityProxy@@E@Z
    virtual void OnActivatableEntityAdded(BamoActivatableEntityProxy *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatableEntityRemoved@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@UEAAXPEAVBamoActivatableEntityProxy@@@Z
    virtual void OnActivatableEntityRemoved(BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivatedEntityChanged@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@UEAAX_K0@Z
    virtual void OnActivatedEntityChanged(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationRequested@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@UEAAXPEAVBamoActivatableEntityProxy@@0@Z
    virtual void OnActivationRequested(BamoActivatableEntityProxy *, BamoActivatableEntityProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBamoProxyDisconnected@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@UEAAXXZ
    virtual void OnBamoProxyDisconnected();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@UEAA@XZ
    virtual ~ForegroundManager();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentForeground@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@AEAA?AUForegroundActivatableItemInfo@34567@XZ
    WindissectOpaque GetCurrentForeground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemInfoForItemId@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@AEAA?AUForegroundActivatableItemInfo@34567@AEBUForegroundActivatableItemId@34567@@Z
    WindissectOpaque GetItemInfoForItemId(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemInfoForWindowId@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@AEAA?AUForegroundActivatableItemInfo@34567@_K@Z
    WindissectOpaque GetItemInfoForWindowId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@AEAAXW4RegisterOperation@1234567@@Z
    void RegisterWithISM(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncForegroundStateFromBamoProxy@ForegroundManager@implementation@Input@Internal@UI@Windows@winrt@@AEAAXXZ
    void SyncForegroundStateFromBamoProxy();
};
} // namespace winrt::Windows::UI::Internal::Input::implementation

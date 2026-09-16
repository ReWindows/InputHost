#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace winrt::Windows::UI::Internal::Input::implementation {
class ForegroundActivatableItemInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ForegroundActivatableItemInfo@implementation@Input@Internal@UI@Windows@winrt@@QEAA@PEAVBamoActivatableEntityProxy@@AEBUForegroundManager@23456@@Z
    ForegroundActivatableItemInfo(BamoActivatableEntityProxy *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsForeground@ForegroundActivatableItemInfo@implementation@Input@Internal@UI@Windows@winrt@@QEBA_NXZ
    bool IsForeground() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ForegroundActivatableItemInfo@implementation@Input@Internal@UI@Windows@winrt@@UEAA@XZ
    virtual ~ForegroundActivatableItemInfo();
};
} // namespace winrt::Windows::UI::Internal::Input::implementation

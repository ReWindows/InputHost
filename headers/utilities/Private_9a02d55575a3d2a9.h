#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace InputAnimationTarget {
class Private {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientPrincipal@Private@InputAnimationTarget@@UEAAJPEAPEAVBamoAnimationTargetClientPrincipal@@@Z
    virtual long GetClientPrincipal(BamoAnimationTargetClientPrincipal * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@InputAnimationTarget@@QEAA@XZ
    Private();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationData@Private@InputAnimationTarget@@UEAAJUGestureAnimationData@Input@Internal@UI@Windows@@@Z
    virtual long SetAnimationData(::Windows::UI::Internal::Input::GestureAnimationData);
};
} // namespace InputAnimationTarget

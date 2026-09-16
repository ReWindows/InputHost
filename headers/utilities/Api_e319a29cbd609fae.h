#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace InputAnimationTarget {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputAnimationTarget@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResumableInputAnimationObject@Api@InputAnimationTarget@@UEAAJUGestureAnimationData@Input@Internal@UI@Windows@@PEAPEAUIAnimationObject@Composition@67@@Z
    virtual long GetResumableInputAnimationObject(::Windows::UI::Internal::Input::GestureAnimationData, ::Windows::UI::Composition::IAnimationObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnimationData@Api@InputAnimationTarget@@UEAAJPEAUGestureAnimationData@Input@Internal@UI@Windows@@@Z
    virtual long get_AnimationData(::Windows::UI::Internal::Input::GestureAnimationData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@Api@InputAnimationTarget@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@Api@InputAnimationTarget@@UEAAJ_K@Z
    virtual long put_Id(uint64_t);
};
} // namespace InputAnimationTarget

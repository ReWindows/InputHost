#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
namespace CoreIndependentInputSourceControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CoreIndependentInputSourceControllerWinRT@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlledInput@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@@Z
    virtual long SetControlledInput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlledInputWithFilters@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@W4CoreIndependentInputFilters@456@1@Z
    virtual long SetControlledInputWithFilters(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPalmRejectionEnabled@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJPEAE@Z
    virtual long get_IsPalmRejectionEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTransparentForUncontrolledInput@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJPEAE@Z
    virtual long get_IsTransparentForUncontrolledInput(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJPEAPEAUICoreInputSourceBase@Core@UI@Windows@@@Z
    virtual long get_Source(::Windows::UI::Core::ICoreInputSourceBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPalmRejectionEnabled@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJE@Z
    virtual long put_IsPalmRejectionEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTransparentForUncontrolledInput@Api@CoreIndependentInputSourceControllerWinRT@@UEAAJE@Z
    virtual long put_IsTransparentForUncontrolledInput(unsigned char);
};
} // namespace CoreIndependentInputSourceControllerWinRT

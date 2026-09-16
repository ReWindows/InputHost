#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace BaseInputObjectWinRT {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@BaseInputObjectWinRT@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@Partner@BaseInputObjectWinRT@@UEAAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSite@Partner@BaseInputObjectWinRT@@UEAAJPEAPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    virtual long get_InputSite(::Windows::UI::Internal::Input::IInputSite * *);
};
} // namespace BaseInputObjectWinRT

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace SystemCursors {
class WindowsCompositionGlobals {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@WindowsCompositionGlobals@SystemCursors@@SAJPEAUIVisual@Composition@UI@Windows@@0@Z
    static long AddChild(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z
    static long CreateInteropCompositor(::Windows::UI::Composition::ICompositor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@WindowsCompositionGlobals@SystemCursors@@SAJPEAUIVisual@Composition@UI@Windows@@0@Z
    static long RemoveChild(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *);
};
} // namespace SystemCursors

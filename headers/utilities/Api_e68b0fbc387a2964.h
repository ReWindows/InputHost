#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
namespace PointerCursorControllerWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PointerCursorControllerWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cursor@Api@PointerCursorControllerWinRT@@UEAAJPEAPEAUICoreCursor@Core@UI@Windows@@@Z
    virtual long get_Cursor(::Windows::UI::Core::ICoreCursor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@Api@PointerCursorControllerWinRT@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cursor@Api@PointerCursorControllerWinRT@@UEAAJPEAUICoreCursor@Core@UI@Windows@@@Z
    virtual long put_Cursor(::Windows::UI::Core::ICoreCursor *);
};
} // namespace PointerCursorControllerWinRT

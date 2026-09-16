#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
namespace InputEdgyDragSource {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InputEdgyDragSource@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPoints@Api@InputEdgyDragSource@@UEAAJIPEAUPoint@Foundation@Windows@@@Z
    virtual long SetControlPoints(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureRecognitionConfiguration@Api@InputEdgyDragSource@@UEAAJPEAPEAUIEdgyGestureRecognitionConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long get_GestureRecognitionConfiguration(::Windows::UI::Internal::Input::IEdgyGestureRecognitionConfiguration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@Api@InputEdgyDragSource@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@Api@InputEdgyDragSource@@UEAAJPEAU_GUID@@@Z
    virtual long get_Type(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureRecognitionConfiguration@Api@InputEdgyDragSource@@UEAAJPEAUIEdgyGestureRecognitionConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long put_GestureRecognitionConfiguration(::Windows::UI::Internal::Input::IEdgyGestureRecognitionConfiguration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@Api@InputEdgyDragSource@@UEAAJ_K@Z
    virtual long put_Id(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@Api@InputEdgyDragSource@@UEAAJU_GUID@@@Z
    virtual long put_Type(_GUID);
};
} // namespace InputEdgyDragSource

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
namespace EdgyController {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@EdgyController@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertex@Api@EdgyController@@UEAAJIPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long GetVertex(unsigned int, WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVertices@Api@EdgyController@@UEAAJIQEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long SetVertices(unsigned int, WindissectOpaque* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EdgyDetected@Api@EdgyController@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgyController@Input@Internal@UI@Windows@@PEAVEdgyDetectedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EdgyDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EdgeId@Api@EdgyController@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EdgeId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceRunState@Api@EdgyController@@UEAAJPEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z
    virtual long get_ExperienceRunState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureDirection@Api@EdgyController@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_GestureDirection(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureDistance@Api@EdgyController@@UEAAJPEAI@Z
    virtual long get_GestureDistance(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputRouting@Api@EdgyController@@UEAAJPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@@Z
    virtual long get_InputRouting(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VertexCount@Api@EdgyController@@UEAAJPEAI@Z
    virtual long get_VertexCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExperienceRunState@Api@EdgyController@@UEAAJW4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z
    virtual long put_ExperienceRunState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureDirection@Api@EdgyController@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_GestureDirection(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureDistance@Api@EdgyController@@UEAAJI@Z
    virtual long put_GestureDistance(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InputRouting@Api@EdgyController@@UEAAJW4EdgyInputRouting@Input@Internal@UI@Windows@@@Z
    virtual long put_InputRouting(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EdgyDetected@Api@EdgyController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EdgyDetected(EventRegistrationToken);
};
} // namespace EdgyController

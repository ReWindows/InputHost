#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
class UIAHitTestProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachUIAHitTest@UIAHitTestProxy@@QEAAXPEAVUIAHitTestClient@@@Z
    void AttachUIAHitTest(UIAHitTestClient *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@UIAHitTestProxy@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAHitTestResponse@UIAHitTestProxy@@MEAAJAEBU_GUID@@@Z
    virtual long UIAHitTestResponse(_GUID const &);
};

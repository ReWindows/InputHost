#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
class ControllerNavigationClient {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControllerNavigationClient@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    ControllerNavigationClient(::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControllerNavigationClient@@UEAA@XZ
    virtual ~ControllerNavigationClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsCrossed@ControllerNavigationClient@@MEAAJPEAVBamoControllerNavigationClientStub@@AEBUtagPOINT@@@Z
    virtual long BoundsCrossed(BamoControllerNavigationClientStub *, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@ControllerNavigationClient@@MEAAJPEAVBamoControllerNavigationClientStub@@@Z
    virtual long OnStubDisconnected(BamoControllerNavigationClientStub *);
};

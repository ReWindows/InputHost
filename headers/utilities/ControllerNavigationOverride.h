#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
class ControllerNavigationOverride {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControllerNavigationOverride@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    ControllerNavigationOverride(::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControllerNavigationOverride@@UEAA@XZ
    virtual ~ControllerNavigationOverride();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsCrossed@ControllerNavigationOverride@@MEAAJPEAVBamoControllerNavigationOverrideStub@@AEBUtagPOINT@@@Z
    virtual long BoundsCrossed(BamoControllerNavigationOverrideStub *, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@ControllerNavigationOverride@@MEAAJPEAVBamoControllerNavigationOverrideStub@@@Z
    virtual long OnStubDisconnected(BamoControllerNavigationOverrideStub *);
};

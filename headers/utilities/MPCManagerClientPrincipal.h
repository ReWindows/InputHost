#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class MPCManagerClientPrincipal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z
    MPCManagerClientPrincipal(MPCManagerClientConnection *, MPCManagerClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z
    virtual long OnButtonsChangedDuringHomeGesture(BamoMPCManagerClientStub *, unsigned int, unsigned int, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnETCalibrationRequested@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@I@Z
    virtual long OnETCalibrationRequested(BamoMPCManagerClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadExclusivityExited@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@@Z
    virtual long OnGamepadExclusivityExited(BamoMPCManagerClientStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadIsSupportedForProcess@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@I@Z
    virtual long OnGamepadIsSupportedForProcess(BamoMPCManagerClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z
    virtual long OnHomeGestureDetected(BamoMPCManagerClientStub *, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z
    virtual long OnHomeGestureReadyChanged(BamoMPCManagerClientStub *, bool, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputProviderChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@W4MPCSourceKind@@@Z
    virtual long OnInputProviderChanged(BamoMPCManagerClientStub *, LegacyDeviceInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuPressed@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@W4MPCSourceKind@@I@Z
    virtual long OnMenuPressed(BamoMPCManagerClientStub *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseSnappedToGaze@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@@Z
    virtual long OnMouseSnappedToGaze(BamoMPCManagerClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MPCManagerClientPrincipal@@UEAA@XZ
    virtual ~MPCManagerClientPrincipal();
};

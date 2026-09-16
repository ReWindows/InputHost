#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class SystemCursorControllerClient {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorShellMagnification@SystemCursorControllerClient@@QEAAJ_KM@Z
    long SetCursorShellMagnification(uint64_t, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemCursorControllerClient@@QEAA@PEAVInputSystemClientConnection@@PEAVSystemCursorManager@@@Z
    SystemCursorControllerClient(InputSystemClientConnection *, SystemCursorManager *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemCursorControllerClient@@UEAA@XZ
    virtual ~SystemCursorControllerClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachIsmCursorVisual@SystemCursorControllerClient@@MEAAJPEAVBamoSystemCursorControllerClientStub@@_K1@Z
    virtual long AttachIsmCursorVisual(BamoSystemCursorControllerClientStub *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@SystemCursorControllerClient@@MEAAJPEAVBamoSystemCursorControllerClientStub@@AEBUCursorDeviceInfo@@@Z
    virtual long DeviceAdded(BamoSystemCursorControllerClientStub *, CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@SystemCursorControllerClient@@MEAAJPEAVBamoSystemCursorControllerClientStub@@_K@Z
    virtual long DeviceRemoved(BamoSystemCursorControllerClientStub *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@SystemCursorControllerClient@@MEAAJPEAVBamoSystemCursorControllerClientStub@@@Z
    virtual long OnStubDisconnected(BamoSystemCursorControllerClientStub *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@SystemCursorControllerClient@@AEAAXPEAVInputSystemClientConnection@@W4RegisterOperation@1@@Z
    void RegisterWithISM(InputSystemClientConnection *, int);
};

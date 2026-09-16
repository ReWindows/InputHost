#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class DeviceDockClient {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeviceDockClient@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAVDeviceDockWatcher@@@Z
    DeviceDockClient(::ISMBamos_AutoBamos::BamoConnection *, DeviceDockWatcher *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockDeviceAdded@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@IPEAVBamoDockDeviceProxy@@@Z
    virtual long OnDockDeviceAdded(BamoDeviceDockClientStub *, unsigned int, BamoDockDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockDeviceRemoved@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@I@Z
    virtual long OnDockDeviceRemoved(BamoDeviceDockClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockInput@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@IAEBUDockInputInfo@@@Z
    virtual long OnDockInput(BamoDeviceDockClientStub *, unsigned int, DockInputInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockableDeviceAdded@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@IPEAVBamoDockableDeviceProxy@@@Z
    virtual long OnDockableDeviceAdded(BamoDeviceDockClientStub *, unsigned int, BamoDockableDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockableDeviceRemoved@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@I@Z
    virtual long OnDockableDeviceRemoved(BamoDeviceDockClientStub *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnumerationCompleted@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@@Z
    virtual long OnEnumerationCompleted(BamoDeviceDockClientStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@DeviceDockClient@@MEAAJPEAVBamoDeviceDockClientStub@@@Z
    virtual long OnStubDisconnected(BamoDeviceDockClientStub *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@DeviceDockClient@@AEAAXPEAVInputSystemClientConnection@@W4RegisterOperation@1@@Z
    void RegisterWithISM(InputSystemClientConnection *, int);
};

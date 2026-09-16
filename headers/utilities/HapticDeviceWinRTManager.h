#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class HapticDeviceWinRTManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControllerForPointerDevice@HapticDeviceWinRTManager@@QEAAJPEAXPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    long GetControllerForPointerDevice(void *, ::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@HapticDeviceWinRTManager@@SAPEAV1@XZ
    static HapticDeviceWinRTManager * GetInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPenDeviceFromPenId@HapticDeviceWinRTManager@@QEAAXU_GUID@@PEAPEAVPenDeviceWinRT@@@Z
    void GetPenDeviceFromPenId(_GUID, PenDeviceWinRT * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPenDeviceFromPointerId@HapticDeviceWinRTManager@@QEAAXIPEAPEAVPenDeviceWinRT@@@Z
    void GetPenDeviceFromPointerId(unsigned int, PenDeviceWinRT * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HapticDeviceWinRTManager@@QEAA@XZ
    HapticDeviceWinRTManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFeedbackCapableMouseDevice@HapticDeviceWinRTManager@@QEAA_NXZ
    bool HasFeedbackCapableMouseDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFeedbackCapablePenDevice@HapticDeviceWinRTManager@@QEAA_NXZ
    bool HasFeedbackCapablePenDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFeedbackCapableTouchpadDevice@HapticDeviceWinRTManager@@QEAA_NXZ
    bool HasFeedbackCapableTouchpadDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBamoSystemDisconnect@HapticDeviceWinRTManager@@QEAAXXZ
    void NotifyBamoSystemDisconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeviceProxyAdded@HapticDeviceWinRTManager@@QEAAXPEAVBamoPenDeviceProxy@@@Z
    void NotifyDeviceProxyAdded(BamoPenDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeviceProxyRemoved@HapticDeviceWinRTManager@@QEAAXPEAVBamoPenDeviceProxy@@@Z
    void NotifyDeviceProxyRemoved(BamoPenDeviceProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HapticDeviceWinRTManager@@UEAA@XZ
    virtual ~HapticDeviceWinRTManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@HapticDeviceWinRTManager@@AEAAXW4RegisterOperation@1@@Z
    void RegisterWithISM(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncPenDevicesFromBamoProxy@HapticDeviceWinRTManager@@AEAAXXZ
    void SyncPenDevicesFromBamoProxy();
};

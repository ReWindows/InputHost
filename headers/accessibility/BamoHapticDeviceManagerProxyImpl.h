#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoHapticDeviceManagerProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseDevices@BamoHapticDeviceManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateMouseDevices(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePenDevices@BamoHapticDeviceManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdatePenDevices(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchpadDevices@BamoHapticDeviceManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateTouchpadDevices(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoHapticDeviceManagerProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoHapticDeviceManagerProxyImpl();
};
} // namespace BamoImpl

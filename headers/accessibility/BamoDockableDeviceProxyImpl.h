#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace BamoImpl {
class BamoDockableDeviceProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDockableDeviceProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z
    long UpdateDeviceId(bool, DockableDeviceIdentity const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z
    long UpdateDeviceType(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z
    long UpdateInterfacePath(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryUsageId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z
    long UpdatePrimaryUsageId(bool, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z
    long UpdatePrimaryUsagePage(bool, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockableDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDockableDeviceProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoDockableDeviceProxyImpl();
};
} // namespace BamoImpl
